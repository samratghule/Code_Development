#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{

float current_volume = 10;
float volume_min = 0;
float volume_max =400;
float per_volume_min = 0;
float per_volume_max = 100;
float time=480;
float rate=50;
float volume=400;
float volume_percent=100;
   //int volume = ( (current_volume - volume_min) / (volume_max - volume_min) ) * (per_volume_max - per_volume_min) + per_volume_min;

   // printf("%f",volume);
while(time>10)
{   printf("time: %.2f  volume %.2f volume percent:%2f\t\n",time,volume,volume_percent);
    time=time-10;
    volume=((rate*time)/60);
    volume_percent = 100-(( (volume - volume_min) / (volume_max - volume_min) ) * (per_volume_max - per_volume_min) + per_volume_min);

    Sleep(2000);

}

}
