#include <stdio.h>

int main(void) {

    int num1, num2, result;
    char op;

    printf("수식을 입력하세요:");
    scanf("%d %c %d",&num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    
    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    case '%':
        result = num1 % num2;

    default:
        printf("지원되지 않는 연산자 입니다.");
        break;
    }

    printf("%d %c %d = %d\n",num1, op, num2, result);

    return 0;
}