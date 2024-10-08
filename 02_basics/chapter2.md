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
int a = bc;    // Incorrect , Opreation instruction missing
int a = b ^ c; // Incorrect . the correct code is int a=pow(b,c);
```

Various operations are `+`, `-`, `*`, `/`, and `%`.

note a%b return reminder of a/b
if numenator is positive then the result of modulus is also positive but if numenator is negative then result will be negative.
