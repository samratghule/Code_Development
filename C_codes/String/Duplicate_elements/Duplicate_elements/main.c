#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string = "love is in the air";
    int hashtable[128]={0},i;

    for(i=0; string[i]!='\0';i++)
    {
        hashtable[string[i]]++;
    }
    for(i=0;i<128;i++)
    {
       if(hashtable[i]>1 && i!=' ')
       {
           printf("%c is printed %d times\n",i, hashtable[i]);
       }
    }


    return 0;
}
