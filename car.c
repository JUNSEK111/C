#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) // 거리만큼  *을 출력하는 함수  
{
	int i;
	
	printf("CAR #%d:", car_number);
	
	for( i = 0; i < distance/10; i++ ) {
		printf("*");
	}
	
	printf("\n");

}
int main(void)
{
	int i;
	int car1_dist=0, car2_dist=0;
	
	srand((unsigned)time(NULL)); //  난수를 다르게 설정하기 위해 시드를 다르게 생성하는 코드 
	
	for( i = 0; i < 6; i++ ) {
	car1_dist += rand() % 100;         // 100가지의 경우로 제한함. 
	car2_dist += rand() % 100;
	disp_car(1, car1_dist);				// 1번차의 이동거리. 
	disp_car(2, car2_dist);				// 2번차의 이동거리. 
	printf("---------------------\n");
	_getch(); 					// 키보드를 누르면 종료됨? 이것을 잘 모르겠습니다. 
}

	return 0;
}
