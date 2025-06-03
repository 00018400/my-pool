#include <stdio.h>

int main()
{
    int x, y;
    printf("Please enter only two integers: ");
    scanf("%d%d", &x, &y);
    printf("Adding: %d \nSubstracting: %d \nDivision: %d \nMultiplying: %d", x+y, x-y, x/y, x*y);
    return 0;
}