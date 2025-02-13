#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char user_input[99];
char stop_sign[3] = "RUN";
int check_end = 0;

void cli_input (){                                          //rn it detects input and sisplays, also breaks at "RUN"
    while (check_end == 0){
        fgets(user_input, sizeof(user_input), stdin);
        int len = strlen(user_input);
        user_input[len-1] = '\0';
        int cmpstring = strcmp(user_input, stop_sign);
        if (cmpstring == 0){
            check_end = 1;
            exit(0);
        };
        printf("%s\n",user_input);
    };
};

int main() {
    cli_input();
    return 0;
};


// Hier gaat alles samenkomen i.e. alle functies komen bij elkaar.

// Explanation main.c:
// De main function gaat een loop draaien waar wordt bijgehouden of de statement RUN wordt tegengekomen,
// zoja ==> stopt de compiler met input aannemen en compiled hij de code.

// Explanation compile.c:
// compiled de uiteindelijke tokens in C

// Explanation token.c:
// we gaan de input van de user eerst filteren van alle spatie's en speciale karakters,
// dan gaan we alle gevonden strings, ints en chars een variable geven (bijv. input_user[waarde])
// vervolgens analyseren we de woorden of de compiler deze kent ==> dit doen we statically met standaard waardens 
// (denk aan: "if input_user[0] = let then assigna_variable to input_user[1]") 
// deze tokens worden via C gecompiled naar C waardes en zo uitgevoerd --> in principe schrijven we geen compiler/language maar een translator.