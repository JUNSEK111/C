#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void)
{
	double height, distance, tree_height, degrees, radians;
	
	printf("�������� �Ÿ�(������ ����): ");
	scanf("%lf", &distance);       // ������ ������� �Ÿ� �Է�. 
	
	printf("�������� Ű(������ ����): ");
	scanf("%lf", &height);			// ����� Ű(����) �Է�. 
	
	printf("����(������ ��): ");
	scanf("%lf", &degrees);			// ���� �Է�. 
	
	radians = degrees * (3.141592 / 180.0); 	// ���� = ���� x ���� / 180��. 
	
	tree_height = tan(radians) * distance + height;  // ���� ���� = ź��Ʈ ���� x �Ÿ� + ����. 
	
	printf("������ ����(������ ����): %lf \n", tree_height); //���. 
	
	return 0;
}

