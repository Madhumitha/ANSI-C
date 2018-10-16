//
//  main.c
//  Brain&Dennis
//
//  Created by Madhu 10/13/18.
//  Copyright © 2018 MadhuLeo. All rights reserved.
//  To Determine the ranges of char, short, int and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types
// The ANSI Standard for C specifies that ranges be defined in <limits.h>. The ranges may vary from machine to machine.

#include<stdio.h>
// determine ranges of types
 int main()
{
    
    //signed types
    printf("Signed char min = %d\n", ~(char)((unsigned char)~0>>1));
    printf("Signed char max = %d\n", (char)((unsigned char) ~0 >> 1));
    printf("Signed short min = %d\n", ~(short)((unsigned short)~0>>1));
    printf("Signed short max = %d\n", (short)((unsigned short) ~0 >> 1));
    printf("Signed int min = %d\n", ~(int)((unsigned int)~0>>1));
    printf("Signed int max = %d\n", (int)((unsigned int) ~0 >> 1));
    printf("Signed long min = %ld\n", ~(long)((unsigned long)~0>>1));
    printf("Signed long max = %ld\n", (long)((unsigned long) ~0 >> 1));
    //unsigned types
    printf("Unsigned char  = %d\n", (unsigned char) ~0 );
    printf("Unsigned short  = %d\n", (unsigned short) ~0);
    printf("Unsigned int  = %d\n", (unsigned int) ~0 );
    printf("Unsigned long max = %lu\n", (unsigned long) ~0);
}
