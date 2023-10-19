#include <stdio.h>
#include <Windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b, S;
    double M_PI = 3.1415;
    printf("�����: ");
    scanf_s("%lf", &S);
    printf("������� a: ");
    scanf_s("%lf", &a);
    printf("������� b: ");
    scanf_s("%lf", &b);

    double c = 0.0, alpha, beta, gamma{}, h, P, semi_perimeter = (a + b + c) / 2;

    c = sqrt(a * a + b * b - 2 * a * b * cos(gamma * (M_PI / 180.0)));


    alpha = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
    beta = acos((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / M_PI);
    gamma = 180.0 - alpha - beta;

    h = 2 * S / a;

    P = a + b + c;

    printf("������� c: %lf\n", c);
    printf("��� alpha: %lf �������\n", alpha);
    printf("��� beta: %lf �������\n", beta);
    printf("��� gamma: %lf �������\n", gamma);
    printf("������ h: %lf\n", h);
    printf("�������� P: %lf\n", P);

    return 0;
}