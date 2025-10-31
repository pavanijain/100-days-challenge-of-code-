//Q34: Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a == 0 || a == 1) {
        printf("Not prime\n");
        return 0;
    }

    if (a == 2) {
        printf("Prime\n");
        return 0;
    }
 
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}