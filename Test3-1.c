#include <stdio.h>
int main(void)
{
    double lightspeed = 300000;
    double distance = 149600000; 
    double time;


    time = distance / lightspeed; 


    printf("태양과 지구와의 거리 %fkm \n", distance);
    printf("도달 시간은 %f초\n", time);


    return 0;
}