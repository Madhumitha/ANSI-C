CHAPTER 2: Operators and Expressions

2.1 Variable names

2.2 Data Types and Sizes

The standard headers <limits.h> and <floadt.h> contain symbolic constants for all of these sizes, along with other properties of the machine and compiler. 

[Exercise 2-1](./Code)
 1. [Ranges Solved using standard headers](./Code/Ex2-1.c)
 2. [Ranges Solved using bitwise operator](./Code/Exercise2.1.1.c)

2.3 Constants 

- A long constant is written with a terminal l or L.
- Unsigned constants is written with a terminal u or U
- The suffixes f or F indicate a float constant 
- l or L indicate a long double 
- A character constant is an integer, written as one character within single quotes
- The value of a character constant is the numeric value of the character in the machine's character set

- A *constant expression* is an expression that involves only constants. Such expression may be evaluated during compilation rather than run-time
```
#define MAXLINE 1000
char line[MAXLINE+ 1];
```

- A string constant is a sequnce of zero or more characters surrounded by double quotes
- enumeration constant 
