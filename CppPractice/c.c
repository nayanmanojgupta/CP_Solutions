#include <stdio.h>

#include <stdlib.h>

#include <time.h>

//Preprocessor command

char hitEnter;

#define Colors 8

int getColor();

void convertColor(int);

enum color{Black, Green, Navy, Orange, Pink, Red, Violet, White};

void welcomeScreen(){

//Masterind printf

    printf("\t\t\t\t#########################################################\n");

    printf("\t\t\t\t#########################################################\n");

    printf("\t\t\t\t#########################################################\n");

    printf("\t\t\t\t#############                              ##############\n");

    printf("\t\t\t\t#############          Mastermind          ##############\n");

    printf("\t\t\t\t#############                              ##############\n");

    printf("\t\t\t\t#########################################################\n");

    printf("\t\t\t\t#########################################################\n");

    printf("\t\t\t\t#########################################################\n");

//Rules printf

    printf("Rules: \n1. The Codemaker sets a secret code \n");

    printf("2. The Codebreaker tries to match the code using logic and deduction \n");

    printf("3. After each move the Codemaker gives clues to the Codebreaker\n");

    printf("4. The Codebreaker has 10 attempts to guess the secret code\n");

}

//Clear Screen from ^

void clearScreen(){

    printf("\n \t\t\t\t       <Hit Enter to continue> \n");

    scanf("%c", &hitEnter);

    //system("clear");

    system("cls");

}

//Table Secret Code

void displayBoard(){

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |           SECRET CODE         |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |         ?    ?    ?    ?      |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |    PLAYER GUESS   |   CLUES   |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

    printf("\t\t\t\t |  ?    ?    ?    ? |  ? ? ? ?  |\n");

    printf("\t\t\t\t +-------------------------------+\n");

}

void setCode(){

int color1, color2, color3, color4;

color1 = getColor();

color2 = getColor();

color3 = getColor();

color4 = getColor();

printf("\n Integer Secret Code \n");

printf(" %d  %d  %d  %d \n" , color1, color2, color3, color4);

printf("\n Color Secret Code \n");

convertColor(color1);

convertColor(color2);

convertColor(color3);

convertColor(color4);

}

int getColor(){

int color;

color=0+rand()%Colors;

return color;

}

void convertColor(int color){

    switch(color){

        case 0:printf("Black");

            break;

        case 1:printf("Green");

            break;

        case 2:printf("Navy");

            break;

        case 3:printf("Orange");

            break;

        case 4:printf("Pink");

            break;

        case 5:printf("Red");

            break;

        case 6:printf("Violet");

            break;

        case 7:printf("White");

            break;

        }

printf("\n");

}



int main()

{

srand(time(NULL));

welcomeScreen();

clearScreen();

setCode();

clearScreen();

displayBoard();

return 0;

}


