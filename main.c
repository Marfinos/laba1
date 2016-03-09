#include <stdio.h>
#include <stdlib.h>

//программа является учебной

float a,b;
int main()
{
    printf("Vvedite chislo A \n");
    scanf("%f",&a);
    printf("Vvedite chislo B \n");
    scanf("%f",&b);
    printf("%1.0f + %1.0f = %1.0f \n", a,b,a+b);
    printf("%1.0f - %1.0f = %1.0f \n", a,b,a-b);
    printf("%1.0f * %1.0f = %1.0f \n", a,b,a*b);
    printf("%1.0f / %1.0f = %1.2f", a,b,a/b);

    return 0;
}
