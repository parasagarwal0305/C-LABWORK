#include <stdio.h>

int main() {
    FILE *ptr;
    char filename[100];
    int ch;
    printf("Enter the file name: ");
    scanf("%s", filename);
    ptr = fopen(filename, "r");
printf("context of file is\n");
    while ((ch = fgetc(ptr)) != EOF) {
        putchar(ch);
    }
    fclose(ptr);
    return 0;
}
