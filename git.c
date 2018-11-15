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
	
	printf("teraz program się skonczy");

    getchar();

    return 0;
}
