#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) // �Ÿ���ŭ  *�� ����ϴ� �Լ�  
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
	
	srand((unsigned)time(NULL)); //  ������ �ٸ��� �����ϱ� ���� �õ带 �ٸ��� �����ϴ� �ڵ� 
	
	for( i = 0; i < 6; i++ ) {
	car1_dist += rand() % 100;         // 100������ ���� ������. 
	car2_dist += rand() % 100;
	disp_car(1, car1_dist);				// 1������ �̵��Ÿ�. 
	disp_car(2, car2_dist);				// 2������ �̵��Ÿ�. 
	printf("---------------------\n");
	_getch(); 					// Ű���带 ������ �����? �̰��� �� �𸣰ڽ��ϴ�. 
}

	return 0;
}
