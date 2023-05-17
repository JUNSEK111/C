#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	system("dir");        		// DOS 명령어 실행  
	printf("아무 키나 치세요\n");
	_getch();					// 키보드를 누르면 작동.? 
	system("cls");				// DOS 명령어 실행  
	return 0;
}
