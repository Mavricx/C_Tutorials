# Variables In C language

Variables are the name of a memory location which stores some data.

| Value | Description                                          |
| ----- | ---------------------------------------------------- |
| 23    | Let's name this block of memory a variable name `a`. |

### Rules in Variable Declaration

1. Variables are case sensitive (e.g., `a` and `A` are different).
2. The first character must be an alphabet or an underscore (`_`).
3. No commas or blank spaces are allowed.
4. No other symbols are allowed except for the underscore (`_`).

### Declarations

```c
int num = 23;
char star = '*';
float pi = 3.14;
double _ping = 300;
```

In C, there are no boolean and string data types, but we can have strings as follows:

1. As an array of chars:

   ```c
   char str[20] = "Hello, World!";
   ```

   Here, `str` is an array that can hold up to 19 characters (the 20th is reserved for the null terminator `\0`).

2. Using a pointer to a character:

   ```c
   char *str = "Hello, World!";
   ```

   In this case, `str` points to a string literal stored in read-only memory. You shouldn't modify it.

### Data Types and Sizes

| Data Type                       | Size in Bytes |
| ------------------------------- | ------------- |
| char or signed char             | 1             |
| unsigned char                   | 1             |
| int or signed int               | 2             |
| unsigned int                    | 2             |
| short int or unsigned short int | 2             |
| signed short int                | 2             |
| long int or signed long int     | 4             |
| unsigned long int               | 4             |
| float                           | 4             |
| double                          | 4             |
| long double                     | 10            |

---

### Constants

Constants are values that don't change (fixed).

#### Types of Constants

1. **Integer Constants**: `1`, `2`, `3`, `0`, `-1`, `-2`
2. **Real Constants**: `1.0`, `2.0`, `3.14`, `-2.4`
3. **Character Constants**: `'a'`, `'b'`, `'A'`, `'#'`, `'&'`

## Keywords

Reserved words that have special meaning to the compiler. There are 32 keywords in C.

| auto     | double | int      | struct   |
| -------- | ------ | -------- | -------- |
| break    | else   | long     | switch   |
| case     | enum   | register | typedef  |
| char     | extern | return   | union    |
| continue | for    | signed   | void     |
| do       | if     | static   | while    |
| default  | goto   | sizeof   | volatile |
| const    | float  | short    | unsigned |

### Program Structure in C

```c
#include <stdio.h> // this is called a preprocessor directive

int main() {
   // program execution starts with this main function and occurs line by line
   printf("hello world");
   return 0; // show zero errors or file executed successfully
}
```

### Comments

Comments are lines that are not part of the program's execution.

- **Single-line comments**: Use `//` to comment out a single line.

  ```c
  // This is a single-line comment
  ```

- **Multi-line comments**: Use `/*` to start and `*/` to end the comment block.

  ```c
  /* This is a multi-line comment
      that spans multiple lines */
  ```

### How to Show Output

To display output in C, use the `printf` function, which is a library function we get with in-built C.

```c
printf("hello world");
printf("kuch bhi");
```

Use `\n` to go to the next line. For example, if you want to print "hello world" and then "kuch bhi" on the next line, you can write it this way:

```c
printf("hello world\n");
printf("kuch bhi");
```

Here is how to show output with some variables using format specifiers:

1. Integers

   ```c
   printf("age is %d", age);
   ```

2. Real Numbers

   ```c
   printf("value of pi is %f", pi);
   ```

3. Characters

   ```c
   printf("star looks like this %c", star);
   ```

`%d`, `%f`, `%c` are called format specifiers.

### Input

To take input in C, we use the `scanf` function, which is another library function.

Here is how:

```c
printf("please enter the age of baby");
scanf("%d", &age); // first use `"%d"` as format specifier and `&` is to get access to the address of variable age
```

Check out the program `sum.c` to see a simple example of input → operation → output in the code. Then find out the area of a square and circle using `scanf` and `printf`.

### Compilation

A computer program that translates C code into machine code.

```plaintext
hello.c ---> C compiler ---> a.exe (Windows) / a.out (Mac and Linux)
```

