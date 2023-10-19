#include <windows.h>
#include <stdio.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c;

    printf("¬вед≥ть значенн€ дл€ a: ");
    scanf_s("%d", &a);

    printf("¬вед≥ть значенн€ дл€ b: ");
    scanf_s("%d", &b);

    printf("¬вед≥ть значенн€ дл€ c: ");
    scanf_s("%d", &c);

    a = a + c;
    c = a - c;
    a = a - c;
    printf("a=%d, c=%d\n", a, c);
    c = c + b;
    b = c - b;
    c = c - b;
    printf("c=%d, b=%d\n", c, b);
    b = b + a;
    a = b - a;
    b = b - a;
    printf("b=%d, a=%d\n", b, a);

    return 0;
}