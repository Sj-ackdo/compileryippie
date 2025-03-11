#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  
    FILE *fp;
    char ch;
    fp = fopen("filename.txt", "r");

    if (NULL == file_ptr) {
        printf("file can't be opened \n");
          return EXIT_FAILURE;
    }

    printf("Content of the file are:-: \n");
    while ((ch = fgetc(file_ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(file_ptr);
    return 0;
}

