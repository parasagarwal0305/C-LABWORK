#include <stdio.h>

int main() {
    FILE *ptr;               
    char filename[100];   
    int ch;                   
    int spaceCount = 0;       
    printf("Enter the file name: ");
    scanf("%s", filename);
    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("File not found or cannot be opened\n");
        return 0;
    }
    while ((ch = fgetc(ptr)) != EOF) {
        if (ch == ' ') {
            spaceCount++;
        }
    }

    printf("Number of spaces in the file: %d\n", spaceCount);

    fclose(ptr); 
    return 0;
}
