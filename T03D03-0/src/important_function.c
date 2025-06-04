#include <stdio.h>
#include <math.h> //Разрешает использовать фукнции pow(x, y)

int main() {
    
    float x, y;
    printf("Please enter your number: ");
    scanf("%f", &x); //Не забывай указывать адресс переменной через &
    if (x == 0) { //Проверям чтобы x не был 0, так как там происходит деление на x
        printf("n/a\n");
    }
    else {
        y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3) - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2/x) - 1.01;
        printf("Result is: %.1f", y);
    }
    return 0;
}