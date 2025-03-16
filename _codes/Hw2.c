---
title: "HW1-Q2"
date: 2025-03-15T14:35:30+0300
tags:
  - HW1
---

The mistakes explained at line 9,12 and 16. 


Link to the code is given at the bottom of this page.





  
```c
/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1 /* first number to be input by user  */
   int integer2 /* second number to be input by user */
   int x;      /* variable in which sum will be stored */ 
   //integer 1 and 2 are missing a semicolon

   printf( Enter first integer\n ); /* prompt */
   //it should be ("enter first integer") with quotation marks 
   
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */
   //Sum is not defined 

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */

```

