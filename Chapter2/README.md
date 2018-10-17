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

2.4 Declarations 

2.5. Arithmetic Operators 

2.6 Relational and Logical Operators

- Expression connected by && or || are evaluated left to right, and evaluation stops as soon as the truth or falsehood of the result is known 
- The call and assignment must occur before the character in c is tested 
- The precedence of && is higher than that of ||

[Exercise 2-2](./Code)
[Loop equivalent to the for loop below code snippet without using && or ||](./Code/Exercise_2-2.c)
```
for(i=0;i<lim-1 && (c=getchar()) != '\n' && c!= EOF; ++i)
s[i] =c;
```

2.7 Type Conversions 

- Converting an integer to floating point in an expression like f+i
- The standard header <ctyoe.h> defines a family of functions that provide tests and conversions that are independent of character set. 
- Note: The floats in an expression are not automatically converted to double.
- comparisons between signed and unsigned values are machine-dependent. 
- Conversions take place across assignments; the value of the right side is converted to the type of the left
- Reversing the order of assignments might lose information 

[Exercise 2-3](./Code)
[Converts a string of hexadecimal digits(including an optional 0x or 0X) into its equivalent integer value](./Code/Exercise_2-3.c)



