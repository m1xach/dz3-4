#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    double d, r, p, v;
    float pi = 3.14;
    printf("������� ������� ����: ");
    scanf("%lf", &d);
    r = d / 2.0;
    p = 4.0 * pi * (r * r);
    v = (4.0 / 3.0) * pi * (r * r * r);
    printf("������� ����������� ����: %.2f\n", p);
    printf("����� ����: %.2f\n", v);

    return 0;
}