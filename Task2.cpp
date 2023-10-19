#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, z, s, a, b, c, d;
    printf("¬вед≥ть x: ");
    scanf_s("%lf", &x);
    printf("¬вед≥ть y: ");
    scanf_s("%lf", &y);
    printf("¬вед≥ть z: ");
    scanf_s("%lf", &z);

    a = 1 + sin(x + y);
    b = fabs(z - (2 * x / (1 + pow(x, 2) * pow(y, 2))));
    c = pow(x, fabs(y));
    d = tan(1 / z);
    s = a / b * c + d;

    printf("–езультат: %lf\n", s);

    return 0;
}