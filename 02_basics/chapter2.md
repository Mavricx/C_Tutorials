## Chapter 2: Instructions
These are statements in a program:

1. Type declaration instructions
2. Arithmetic instructions
3. Control instructions

### Type Declaration Instructions

Declare variables before using them.

Valid declaration examples:

```c
int a = 22;
int b = a;
int c = b + 1;
int d = 1, e; // declaration of both d and e but only d is assigned with a value
```

Let's take another example:

```c
int a, b, c;
a = b = c = 1; // this is also a valid declaration
```

### Arithmetic Instructions

Operands and operations:

`a + b` → `a` and `b` are operands and `+` is the operation being performed.

Code example:

```c
int main() {
   int a = 1, b = 2;
   int sum = a + b;
   int multiply = a * b;
   return 0;
}
```

**NOTE:** There must be a single variable on the left-hand side (LHS) of an assignment.

```c
int result = operand1 + operand2; // Correct
```

The value obtained from the operation is stored in the LHS.
Incorrect examples:

```c
int b + c = a; // Incorrect , There must be a single variable on the left hand side.
int a = bc;    // Incorrect , Operation instruction missing
int a = b ^ c; // Incorrect . the correct code is int a=pow(b,c);
```

### Various Operations

Various operations are `+`, `-`, `*`, `/`, and `%`.

Note: `a % b` returns the remainder of `a / b`. If the numerator is positive, the result of the modulus is also positive, but if the numerator is negative, the result will be negative.

### Arithmetic Instructions

- `int op int` → `int` (e.g., `2 * 2 = 4`)
- `int op float` → `float` (e.g., `2 * 2.0 = 4.0`)
- `float op float` → `float` (e.g., `2.0 * 2.0 = 4.0`)

Since float variables are larger in size (i.e., 4 bytes) than int variables, when a variable is expected to be of a larger size, the compiler automatically converts them to float.

```c
printf("%d\n", 2 * 2);   // no error as the result is an int
printf("%d\n", 2 * 2.0); // error as the result is a float
// correct would be
printf("%f\n", 2 * 2.0);
```

Let's take a look at some special cases:

```c
printf("%f\n", 2.0 / 3); // 0.666666
printf("%d\n", 2 / 3);   // 0
printf("%f\n", 3.0 / 2); // 1.500000
printf("%d\n", 3 / 2);   // 1
```

### Type Conversion

If you are expecting an accurate answer, you should use `float`, but if a vague and rounded answer is expected, then `int` should be used.

Type conversion is of two types:

1. **Implicit Conversion**:

   - This is done by the compiler itself.
   - According to this, a small-sized variable (e.g., `int`) can be stored in large-sized variables (e.g., `float`).

2. **Explicit Conversion**:
   - This is done by the coder/user.
   - We can store large-sized variables in small-sized variables forcefully with explicit conversion.

Example:

```c
int a = (int) 1.99999; // Output: 1
```

### Operator Precedence

For starters, let's go like this:

```
+-----------------------+
| *, /, % > +, - > =    |
+-----------------------+
```

Operator precedence determines the order in which operations are performed in an expression. Operators with higher precedence are evaluated before operators with lower precedence.

Here is the precedence order of different operations in C (from highest to lowest):

1. **Parentheses `()`**: Used to group expressions and override default precedence.
2. **Unary operators `+`, `-`, `++`, `--`, `!`**: Unary plus, unary minus, increment, decrement, logical NOT.
3. **Multiplicative `*`, `/`, `%`**: Multiplication, division, modulus.
4. **Additive `+`, `-`**: Addition, subtraction.
5. **Relational `<`, `<=`, `>`, `>=`**: Less than, less than or equal to, greater than, greater than or equal to.
6. **Equality `==`, `!=`**: Equal to, not equal to.
7. **Logical AND `&&`**: Logical AND.
8. **Logical OR `||`**: Logical OR.
9. **Assignment `=`, `+=`, `-=`, `*=`, `/=`, `%=`**: Assignment and compound assignment operators.

### Examples

Consider the following examples to understand operator precedence:

```c
int a = 5, b = 10, c = 15;
int result;

result = a + b * c; // Multiplication (*) has higher precedence than addition (+)
printf("%d\n", result); // Output: 155

result = (a + b) * c; // Parentheses () override the default precedence
printf("%d\n", result); // Output: 225

result = a + b > c; // Relational operator (>) has higher precedence than addition (+)
printf("%d\n", result); // Output: 0 (false)

result = a < b && b < c; // Relational operators (<) have higher precedence than logical AND (&&)
printf("%d\n", result); // Output: 1 (true)
```

Understanding operator precedence is crucial for writing correct and efficient code. When in doubt, use parentheses to ensure the desired order of operations.

### Associativity Rule

For operators with the same precedence, the operations are performed from left to right.

Example:

```c
int x = 4 * 3 / 6 * 2;
// Step-by-step evaluation:
x = 12 / 6 * 2;
x = 2 * 2;
x = 4;
```
