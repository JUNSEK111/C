#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int coin_toss(void); // 함수 원형  

int main (void) {

	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL)); //난수를 다르게 생성하기위한 시드 설정  
	
	for (toss = 0; toss < 100; toss++) {   //100회 반복  
		if(coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	printf("동전의 앞면: %d \n", heads);
	printf("동전의 뒷면: %d \n", tails);
	return 0;	
}

int coin_toss( void ) {
	int head = rand()%2;        //2가지 값중 하나를 랜덤으로 받 
	return head; 				// head에게 반환됨  
}
