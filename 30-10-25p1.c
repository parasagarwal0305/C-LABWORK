#include <stdio.h>

int main() {
    FILE *ptr;
    char filename[100];
    int size;
    printf("Enter the name of the file ");
    scanf("%s", filename);
    ptr = fopen(filename, "r");
    fseek(ptr, 0, SEEK_END);
    size = ftell(ptr);
    if (size == 0) {
        printf("The file is empty\n");
    } else {
        printf("The file contains some text\n");
    }
    fclose(ptr);
    return 0;
}
