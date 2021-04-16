#include "functions.h"
#include<stdio.h>
void display(struct ArrayADT *Array)
{
int count;

for (count=0; count<Array->length;count++)
    printf("%d ",Array->A[count]);
    printf("\n");
}

void append(struct ArrayADT *Array,int value)
{
Array->A[Array->length++]=value;
}
void insert(struct ArrayADT *Array,int index, int value)
{
int count;

for (count=Array->length;count>index;count--)
    Array->A[count]=Array->A[count-1];

    Array->A[count]=value;
    Array->length++;
}

void delete(struct ArrayADT *Array, int index)
{
    int count;
    if (index>=0 && index<Array->length)
    {
    for(count=index; count<Array->length-1;count++)
        Array->A[count]=Array->A[count+1];
    }
    Array->length--;

}
