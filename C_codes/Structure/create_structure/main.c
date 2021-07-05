#include <stdio.h>
#include <stdlib.h>

struct day
{
    int day;
    int month;
    int year;
};

int main()
{


    struct day today;
    today = (struct day){30,6,2022};
    printf("%d %d %d", today.day,today.month, today.year);
   
    return 0;
}
