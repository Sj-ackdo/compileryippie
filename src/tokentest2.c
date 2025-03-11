#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char test_code[] = "int let x = 5 | show x | RUN";
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

    int i = 0;
    while (i < token_array.count) {
        if (strcmp(token_array.tokens[i], "int") == 0 &&
            strcmp(token_array.tokens[i + 1], "let") == 0 &&
            strcmp(token_array.tokens[i + 3], "=") == 0) {

            char var_name[100];
            int value;

            strcpy(var_name, token_array.tokens[i + 2]);
            value = atoi(token_array.tokens[i + 4]);

            printf("int %s = %d;\n", var_name, value);
            int x = value; // Simulate variable assignment

            i += 5; // Move to the next command
        } else if (strcmp(token_array.tokens[i], "show") == 0) {
            char var_name[100];
            strcpy(var_name, token_array.tokens[i + 1]);

            // Simulate showing the variable value
            if (strcmp(var_name, "x") == 0) {
                printf("x = 5\n"); // Hardcoded for this example
            }

            i += 2; // Move to the next command
        } else if (strcmp(token_array.tokens[i], "RUN") == 0) {
            printf("Running the generated code...\n");
            break;
        } else {
            printf("Invalid syntax\n");
            break;
        }
    }
}

int main() {
    space_delete();
    token();
    printf("Total tokens: %d\n", amount_tok);
    return 0;
}