#include <stdio.h>

#include "Functions.h"
void display(struct ArrayADT Array)
{
int i;

for (i=0; i<Array.length;i++)
    printf("%d ",Array.A[i]);
    printf("\n");
}

int linearsearch(struct ArrayADT Array, int key)
{
for(int i=0;i<Array.length;i++)
    {
        if (Array.A[i]==key)
        return i;
    }
return -1;

}

int binarysearch(struct ArrayADT Array,int key)
{
int mid,low=0;
int high=Array.length-1;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(Array.A[mid]==key)
            return mid;
            else if (key<Array.A[mid])
                high=mid-1;
                else
                low=mid+1;
        }
return -1;
}
