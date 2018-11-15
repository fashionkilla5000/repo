#include <stdio.h>
int main()
{
    char znak;
    printf("podaj znak . : \n");
    scanf("%c", &znak);
    if(znak=='.')
    {
        printf("prawidlowo");
    }
    else
    {
        printf("blednie");
    }

    getchar();

    return 0;
}
