#include <stdio.h>
#include "Functions.h"

int main()
{
    struct ArrayADT Array={{1,2,23,4,5},10,5};
    display(Array);
    printf("key is at index %d\n",linearsearch(Array ,7));
    printf("key is at index %d\n",binarysearch(Array ,23));

    return 0;
}
