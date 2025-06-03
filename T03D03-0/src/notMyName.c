#include <stdio.h>

int main() {
    
    int name;
    fgets(name, 50, stdin);
    printf("Hello, %d", name);

    return 0;
}