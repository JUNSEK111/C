#include <stdio.h>

int factorial(int n) {

    int result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;
    return result;

}

int main(void) {
    int n;
    printf("팩토리얼값?: ");
    scanf("%d",&n);
    printf("%d!의 값은 %d입니다.",n,factorial(n));


    return 0;
}