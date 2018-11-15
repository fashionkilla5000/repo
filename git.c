#include <stdio.h>
int main()
{
    char znak;
    printf("podaj znak . : \n");
    scanf("%c", &znak);
    if(znak=='.')
    {
        printf("dobrze");
    }
    else
    {
        printf("zle");
    }
	
	

    getchar();

    return 0;
}
