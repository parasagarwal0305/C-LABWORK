#include <stdio.h>
#include <ctype.h>   // for isspace()

int main() {
    FILE *ptr;               
    char filename[100];       
    int ch;                   
    int charCount = 0;       
    int wordCount = 0;        
    int prev = ' ';           

    printf("Enter the file name: ");
    scanf("%99s", filename);

    
    ptr = fopen(filename, "r");

    if (ptr == NULL) {
        printf("Error: File not found or cannot be opened!\n");
        return 0;
    }

    
    while ((ch = fgetc(ptr)) != EOF) {
        charCount++;

    
        if (!isspace(ch) && isspace(prev)) {
            wordCount++;
        }

        prev = ch;
    }

    printf("\nTotal characters in the file: %d", charCount);
    printf("\nTotal words in the file: %d\n", wordCount);

    fclose(ptr);
    return 0;
}
