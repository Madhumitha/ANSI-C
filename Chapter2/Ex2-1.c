//
//  main.c
//  Brain&Dennis
//
//  Created by Madhu 10/13/18.
//  Copyright © 2018 MadhuLeo. All rights reserved.
//  To Determine the ranges of char, short, int and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types
// The ANSI Standard for C specifies that ranges be defined in <limits.h>. The ranges may vary from machine to machine.

#include<stdio.h>
#include<limits.h>

int main()
{
    //Unsigned types
    printf("Unsigned Char Max = %u\n", UCHAR_MAX);
    printf("Unsigned Short Max = %u\n", USHRT_MAX);
    printf("Unsigned Int Max = %u\n", UINT_MAX);
    printf("Unsigned long Max = %lu\n", ULONG_MAX);
    
    //Signed types
    printf("Signed Char Min = %d\n", SCHAR_MIN);
    printf("Signed Char Max = %d\n", SCHAR_MAX);
    printf("Signed Short Min = %d\n", SHRT_MIN);
    printf("Signed Short Max = %d\n", SHRT_MAX);
    printf("Signed int Min = %d\n", INT_MIN);
    printf("Signed int Max = %d\n", INT_MAX);
    printf("Signed int LONG Min = %ld\n", LONG_MIN);
    printf("Signed int LONG Max = %ld\n", LONG_MAX);
    
    
}
