#include <stdio.h>
#include "functions.h"

void display(struct ArrayADT Array)
{
int i;

for (i=0; i<Array.length;i++)
    printf("%d ",Array.A[i]);
    printf("\n");
}
