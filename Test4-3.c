#include <stdio.h>

int main(void) {

    int money, change, price, c1000, c500, c100;

    printf("물건 값: ");
    scanf("%d",&price);

    printf("넣은 돈: ");
    scanf("%d",&money);

    change = money - price;

    c1000 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;

    c100 = change / 100;

    printf("\n천원권: %d장\n", c1000);
    printf("오백원 동전: %d개\n", c500);
    printf("백원 동전: %d개\n", c100);


    return 0;

}