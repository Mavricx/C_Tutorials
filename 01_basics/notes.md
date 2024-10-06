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
