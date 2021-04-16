#include<stdio.h>
#include<stdlib.h>
#include "functions.h"


    int main(void)
    {
       struct ArrayADT Array;
       printf("enter the size of an array\n");
       scanf("%d",&Array.size);

       printf("Enter the number of elements:\n");
       scanf("%d",&Array.length);

       Array.A= (int*)malloc(Array.size*sizeof(int));

       printf("Enter the elements in array:\n");
       for (short int count=0;count<Array.length;count++)
       scanf("%d",&Array.A[count]);

       display(&Array);
       append(&Array,10);
       display(&Array);
       insert(&Array,1,100);
       display(&Array);
       delete(&Array,1);
       display(&Array);
       return 0;
    }
