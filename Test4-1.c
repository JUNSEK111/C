#include <stdio.h>

int main(void) {
    
    int id, pass;

    printf("id: ____ \b\b\b\b");
    scanf("%d", &id);
    printf("pass: ____ \b\b\b\b");
    scanf("%d", &pass);

    printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

    return 0;

}