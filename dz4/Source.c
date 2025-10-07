#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{
    setlocale(LC_ALL, "rus");
    int A, B;
    printf("Введите пароль A и B: ");
    scanf ("%d %d", &A, &B);
    if ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0)) 
    {
        printf("Пароль активен\n");
    }
    else 
    {
        printf("Пароль неактивен\n");
    }

    return 0;
}