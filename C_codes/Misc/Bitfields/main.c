#include <stdio.h>
#include <stdlib.h>


struct
{
    unsigned int bitfield : 3;
}bitmap;
int main()
{
    bitmap.bitfield=8;

    printf("%d",bitmap.bitfield);
    return 0;
}
