#include <stdio.h>

int max(int x, int y) {

    if (x > y)
        return x;
    else
        return y;

}
int main(void) {
    
    int x, y, larger;

    printf("정수를 두개 입력하세요: ");
    scanf("%d %d", &x, &y);

    larger = max(x, y);
    printf("더 큰 값은 %d입니다.\n",larger);

    return 0;
}