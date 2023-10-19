#include <stdio.h>
#include <windows.h> 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double pi = 3.14159265359;
    double h, z;
    printf("¬вед≥ть h: ");
    scanf_s("%lf", &h);
    z = h / 180 * pi;
    printf("%lf", z);
    return 0;
}