#include <stdio.h>

void calc(int x, int y, int *a1, int *a2);

int main(void)
{
    int caster = 10;
    int *i;

    // i と caster は同じアドレスになる
    i = &caster;

    printf("%d\n", *i);
    printf("%d\n", caster);
    printf("%p\n", i);
    printf("%p\n", &caster);

    int *kome, rice;
    kome = &rice;
    printf("%p\n", kome);
    printf("%p\n", &rice);

    *kome = 20;
    printf("%d\n", rice);
    printf("%d\n", *kome);


    int plus;
    int minus;

    calc(10, 20, &plus, &minus);
    printf("%d\n", plus);
    printf("%d\n", minus);

    return 0;
}


void calc(int x, int y,int *a1, int *a2)
{
    *a1 = x + y;
    *a2 = x - y;
}
