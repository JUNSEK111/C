#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int coin_toss(void); // �Լ� ����  

int main (void) {

	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL)); //������ �ٸ��� �����ϱ����� �õ� ����  
	
	for (toss = 0; toss < 100; toss++) {   //100ȸ �ݺ�  
		if(coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	printf("������ �ո�: %d \n", heads);
	printf("������ �޸�: %d \n", tails);
	return 0;	
}

int coin_toss( void ) {
	int head = rand()%2;        //2���� ���� �ϳ��� �������� �� 
	return head; 				// head���� ��ȯ��  
}
