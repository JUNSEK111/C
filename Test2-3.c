#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    float radius, area;

    printf("원의 반지름은? : ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;

    printf("원의 면적:%f",area);

    return 0;
}