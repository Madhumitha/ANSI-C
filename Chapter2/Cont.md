### 2.8 Increment and Decrement Operators 

- [Exercise 2-4](./Code/Exercise_2-4.c)
- [Exercise 2-5](./Code/Exercise_2-5.c)


### 2.9 Bitwise Operators 

1. The unary operator ~ yields the one's complement of an integer. 
2.  x& ~077 is independent of wordlength 
3.  The portable form involves no extra costm since ~077 is constant expression that can be evaluated at compile time.

- [Exercise 2-6](./Code/Exercise_2-6.c)
- [Exercise 2-7](./Code/Exercise_2-7.c)
- [Exercise 2-8](./Code/Exercise_2-8.c)

### 2.10 Assignment Operators and Expressions 

-  [Exercise 2-9](./Code/Exercise_2-9.c)

### 2.11 Conditional Expressions 

- [Exercise 2-10](./Code/Exercise_2-10.c)

### 2.12 Precedence and Order of Evaluation

1. The precedence of the bitwise operators &, ^ and | falls below == and !=
   => bit testing expression like 
      ```
      if((x&MASK) == 0)...
      ```
      must be fully parenthesized to give proper results 

2. C doesnot specify the order in which the operands of an operator are evaluated. The exceptions are &&, ||, ?: and ,

- [Exercise 2-11](./Code/Exercise_2-11.c)
