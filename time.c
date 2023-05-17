#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t start, end; // time_t는 unsigned long과 동일. 
	start = time(NULL);   // 현재 시각 반환. 
	
	printf("10초가 되면 아무 키나 누르세요\n");
	
	while (1) { 			// 조건없이 반복. 
		if (getchar())		// 키보드 입력시 반복문 탈출. 
		break;
	}
	
	printf("종료되었습니다.\n");
	
	end = time(NULL);		// 현재 시각 반환. 
	
	printf("경과된 시간은 %ld 초입니다. \n", end - start);
	return 0;
}

