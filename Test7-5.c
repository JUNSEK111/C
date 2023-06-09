#include <stdio.h>

void printfMenu() {
    printf("________________________\n");
    printf("  'c 섭씨온도에서 화씨온도로 변환\n");
    printf("  'f'화씨온도에서 섭씨온도로 변환\n");
    printf("  'q' 종료\n");
    printf("________________________\n");
}

double C2F(double c_temp) {
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {
    return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void) {
    char choice;
    double temp;

    while (1) {

        printfMenu();
        printf("메뉴에서 선택하세요: ");
        choice = getchar();

        if (choice == 'q') {
            break;
        } else if (choice == 'f') {
            printf("화씨온도: ");
            scanf("%lf",&temp);
            printf("섭씨온도: %lf \n\n", F2C(temp));
        } else if (choice == 'c') {
            printf("섭씨온도: ");
            scanf("%lf",&temp);
            printf("화씨온도: %lf \n\n", C2F(temp));
        }
        getchar();
    }
    
    return 0;
}