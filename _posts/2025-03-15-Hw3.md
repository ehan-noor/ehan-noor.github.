---
title: "Hw3"
date: 2025-03-15T22:54:30+0300

tags:
- Hw3
---

Link to the code is given at the bottom of this page.

  
```c
#include <stdio.h>
#include<math.h>

int main() {
    double popularity,size,price;
    printf("Enter the popularity of your neighborhood: ");
    scanf("%lf",&popularity);
    
    printf("Enter the size of your house; ");
    scanf("%lf",&size);
    
    price = (pow(size,2)+pow(popularity,3))*10000;
    printf("Price : %.2lf Tl",price);
    
    return 0;
}



```

(https://github.com/Altanhasbay/Altanhasbay.github.io/blob/master/_codes/Hw3.c)
