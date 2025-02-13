#include <stdio.h>
//#include <main.c>

char test_code[] = "let x = 5 |";

void space_delete() {
    char input[100] = "let x = 5 |", output[100];
    int i, j = 0;


    for(i = 0; input[i] != '\0'; ++i) {
        if(input[i] != ' ') {
            output[j++] = input[i];
        }
    }
    //output[j] = '\0';
    printf("String after removing spaces: %s\n", output);
};

void token(){
        

};

int main(){
    space_delete();
    
};