#include <math.h> 			// 수학 함수들을 포함하는 라이브러리  
#include <stdio.h>
int main( void )
{ 
	double pi = 3.1415926535;
	double x, y;
	x = pi / 2; 
	y = sin(x); 
	printf("sin(%f) = %f\n", x, y); 
	y = cos(x); 
	printf("cos(%f) = %f\n", x, y); 
} 
