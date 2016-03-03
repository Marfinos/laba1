#include <stdio.h>
#include <stdlib.h>

int a,b;
int main()
{
    printf("Vvedite chislo A \n");
    scanf("%d",&a);
    printf("Vvedite chislo B \n");
    scanf("%d",&b);
    printf("%d + %d = %d \n", a,b,a+b);
    printf("%d - %d = %d", a,b,a-b);

    return 0;
}
