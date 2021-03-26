#include <stdio.h>
#include <stdlib.h>


int main()
{
    int array[10];
    int index=0,sum=0;
    float avarage;

    printf("Enter array elements:\n");

            while(index<10){
            printf("%d> ",index+1);
            scanf("%d",&array[index]);

            sum=sum+array[index];
            index++;
            }
printf("sum:%d \n", sum);
printf("index:%d \n", index);
avarage=(float)(sum/index);

printf("avarage:%.2f \n",avarage);

    return 0;
}


