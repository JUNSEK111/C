#include <stdio.h>

int main(void) {

    int num;

    printf("도형의 길이: ");
    scanf("%d",&num);

    for (int length = num; length >= 1; length--) {
        for (int width = 1; width <= length; width++ ) {
            if (length == num || length == 1) {
                printf("* ");
            } else if ( width == 1 || width == length) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int length = 1; length <= num; length++) {
        for (int width = num; width >= length; width--) {
            if (length == width || length == 1) {
                printf("* ");
            } else if (width == num || width == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}