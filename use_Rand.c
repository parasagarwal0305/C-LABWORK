#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1 , num2, num3;
    num1 = (rand() % 9) + 1;
    num2 = (rand() % 9) + 1;
    num3 = (rand() % 9) + 1;
    printf("Numbers are  %d %d %d\n", num1, num2, num3);
    if (num1 == num2 && num2== num3) {
        printf("1st Prize!\n");
    }
    else if (num1 == num2 || num2 == num3 || num1 == num3) {
        printf("2nd Prize!\n");
    }
    else {
        printf("Try Again.\n");
    }
    return 0;
}
