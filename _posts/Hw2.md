

Link to the code is given at the bottom of this page.


  
```c
---
title: "HW2-Q2"
date: 2025-03-15T14:35:30+0300
tags:
  - HW2
---

Link to the code is given at the bottom of this page.



  
```c
/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */
   int integer2; /* second number to be input by user */
   //1st Mistake> While defining integers, the line must end with a semicolomn.
   
   int sum;      /* variable in which sum will be stored */ 
   //2nd Mistake> The variable 'sum' isn't defined in the program.


   printf( "Enter first integer\n" ); /* prompt */ 
   //3rd mistake> There should be quotation marks inside the paranthesis in the function.

   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */

```

```

(https://github.com/Altanhasbay/Altanhasbay.github.io/blob/master/_codes/Hw2.c)
