#include <stdio.h>

int main()
{
    double x, y;
    printf("Please enter only two integers: ");
    scanf("%lf %lf", &x, &y);
    if ((int)x == x && (int)y==y){
        if (x>y){
        printf("%d", (int)x);
        }
        else if(x<y) {
            printf("%d", (int)y);
        }
        else {
            printf("They are equal");
        }
    }
    else {
        printf("Error");
    }
    return 0;
}