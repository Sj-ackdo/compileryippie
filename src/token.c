#include <stdio.h>
#include <string.h>
//#include <main.c>

char test_code[] = "let x = 5 |";

void space_delete() {
    char input[100] = "let x = 5 |", output[100];
    int i, j = 0;

    char* token = strtok(test_code, " ");
    while (token != NULL) {
        printf(" % s\n", token);
        token = strtok(NULL, " ");
    }
};

void token(){
        

};

int main(){
    space_delete();

};



// for(i = 0; input[i] != '\0'; ++i) {
//     if(input[i] != ' ') {
//         output[j++] = input[i];
//     }
// }

// for (i = 0; i < strlen(test_code); ++i){
//     if(test_code[i] == ' ') {
//         printf("%c %d\n", test_code[i-1], i);
//     }
// }