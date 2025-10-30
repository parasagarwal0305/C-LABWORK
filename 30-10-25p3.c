#include <stdio.h>

int main() {
    FILE *ptr;               
    char filename[100];     
    char line[500];           

    printf("Enter the file name: ");
    scanf("%s", filename);
    ptr = fopen(filename, "r");
    if (ptr == NULL)
    {
        printf("File not found or cannot be opened\n");
        return 0;
    }
    while (fgets(line, sizeof(line), ptr) != NULL) {
        printf("%s", line);
    }
    fclose(ptr);
    return 0;
}
