//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum status s = FAILURE;

    switch (s) {
        case SUCCESS:  printf("Operation successful\n"); break;
        case FAILURE:  printf("Operation failed\n"); break;
        case TIMEOUT:  printf("Operation timed out\n"); break;
    }

    return 0;
}
