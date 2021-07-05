#include <stdio.h>
#include <stdlib.h>
int centuryFromYear(int);
int main()
{

    printf("%d ",centuryFromYear(1700));
    printf("Hello world!\n");
    return 0;
}
int centuryFromYear(int year)
{
printf("%d \n",year%100);
printf("%d \n",year/100);
  if (year%100!=0)
    return((year/100)+1);
  else
  return (year/100);
}
