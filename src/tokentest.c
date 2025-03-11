#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void token() {
    if (token_array.count < 6) {
        printf("Invalid input\n");
        return;
    }

    if (strcmp(token_array.tokens[0], "int") == 0 &&
        strcmp(token_array.tokens[1], "let") == 0 &&
        strcmp(token_array.tokens[3], "=") == 0 &&
        strcmp(token_array.tokens[5], "|") == 0 &&
        strcmp(token_array.tokens[6], "RUN") == 0) {

        char var_name[100];
        int value;

        strcpy(var_name, token_array.tokens[2]);
        value = atoi(token_array.tokens[4]);

        printf("int %s = %d;\n", var_name, value);
        printf("Running the generated code...\n");

        // Execute the generated code
        int x = value;
        printf("%s = %d\n", var_name, x);
    } else {
        printf("Invalid syntax\n");
    }
}

int main() {
    space_delete();
    token();
    printf("Total tokens: %d\n", amount_tok);
    return 0;
}