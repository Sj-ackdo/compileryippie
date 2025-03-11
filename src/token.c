#include <stdio.h>
#include <string.h>
//#include <main.c>

char test_code[] = "int let x = 5 | RUN";
int amount_tok;

#define MAX_TOKENS 100

typedef struct {
    char tokens[MAX_TOKENS][100];
    int count;
} TokenArray;

TokenArray token_array;

void space_delete() {
    token_array.count = 0;
    char* token = strtok(test_code, " ");
    while (token != NULL && token_array.count < MAX_TOKENS) {
        strcpy(token_array.tokens[token_array.count++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < token_array.count; i++) {
        printf("%s\n", token_array.tokens[i]);
        amount_tok++;
    }
}

void token(){
        //for(i = 0; i < sizeof(token_array); i++){};

};

int main(){
    space_delete();
    printf("%d",sizeof(amount_tok));
};

//In my program i want to store the integer 5 in the variable x, this will be ran by a RUN command. (an example line of code can be found in line 5) can you finish my program by translating my example program through tokens to C code that will run?

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



// #define MAX_TOKENS 100

// typedef struct {
//     char tokens[MAX_TOKENS][100];
//     int count;
// } TokenArray;

// TokenArray token_array;

// void space_delete() {
//     token_array.count = 0;
//     char* token = strtok(test_code, " ");
//     while (token != NULL && token_array.count < MAX_TOKENS) {
//         strcpy(token_array.tokens[token_array.count++], token);
//         token = strtok(NULL, " ");
//     }

//     for (int i = 0; i < token_array.count; i++) {
//         printf("%s\n", token_array.tokens[i]);
//     }
// }