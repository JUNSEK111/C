#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t start, end; // time_t�� unsigned long�� ����. 
	start = time(NULL);   // ���� �ð� ��ȯ. 
	
	printf("10�ʰ� �Ǹ� �ƹ� Ű�� ��������\n");
	
	while (1) { 			// ���Ǿ��� �ݺ�. 
		if (getchar())		// Ű���� �Է½� �ݺ��� Ż��. 
		break;
	}
	
	printf("����Ǿ����ϴ�.\n");
	
	end = time(NULL);		// ���� �ð� ��ȯ. 
	
	printf("����� �ð��� %ld ���Դϴ�. \n", end - start);
	return 0;
}

