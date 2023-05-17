#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void)
{
	double height, distance, tree_height, degrees, radians;
	
	printf("나무와의 거리(단위는 미터): ");
	scanf("%lf", &distance);       // 나무와 사람간의 거리 입력. 
	
	printf("측정자의 키(단위는 미터): ");
	scanf("%lf", &height);			// 사람의 키(높이) 입력. 
	
	printf("각도(단위는 도): ");
	scanf("%lf", &degrees);			// 각도 입력. 
	
	radians = degrees * (3.141592 / 180.0); 	// 라디안 = 각도 x 파이 / 180도. 
	
	tree_height = tan(radians) * distance + height;  // 나무 높이 = 탄젠트 라디안 x 거리 + 높이. 
	
	printf("나무의 높이(단위는 미터): %lf \n", tree_height); //출력. 
	
	return 0;
}

