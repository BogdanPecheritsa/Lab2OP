#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, h;
    double M_PI = 3.1415;
    printf("������: ");
    scanf_s("%lf", &h);
    printf("������� a: ");
    scanf_s("%lf", &a);
    printf("������� b: ");
    scanf_s("%lf", &b);

    double alpha = atan(h / a);
    double beta = atan(h / b);
    double gamma = M_PI - alpha - beta;
    double s = 0.5 * a * h;
    double p = a + b + sqrt(a * a + b * b - 2 * a * b * cos(gamma));

    printf("��� alpha = %lf �������\n", alpha * (180.0 / M_PI));
    printf("��� beta = %lf �������\n", beta * (180.0 / M_PI));
    printf("��� gamma = %lf �������\n", gamma * (180.0 / M_PI));
    printf("�������� = %lf\n", p);
    printf("����� = %lf\n", s);

    return 0;
}