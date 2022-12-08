#include "stdio.h"
#include "conio.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"
void show_record();
void reset_score();
void help();
void edit_score(float, char []);
int main(){
    int countr,r,r1,count,i,n;
    float score;
    char choice;
    char playgame[20];
    mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZEE\n");
    printf("\n\t\t-------------------");
    printf("\n\t\t Welcome");
    printf("\n\t\t to");
    printf("\n\t\t The GAME!");
    printf("\n\t\t ");
    printf("\n\t\t-------------------");
    printf("\n\t\t-------------------");
    printf("\n\t\t  Become a Millionaire");
    printf("\n\t\t-------------------");
    printf("\n\t\t-------------------");
    printf("\n\t\t Press S to start the game");
    printf("\n\t\t Press V to view the highest score");
    printf("\n\t\t Press R to reset score");
    printf("\n\t\t Press H to reset score");
    printf("\n\t\t Press Q to quit");
    printf("\n\t\t-------------------");
    choice= toupper(getch());
    if(choice=='V'){
        show_record();
        goto mainhome;
    }
    else if(choice=='H'){
        help();
        getch();
        goto mainhome;

    }
    else if(choice=='R'){
        reset_score();
        getch();
        goto mainhome;

    }
    else if(choice=='Q'){
        exit(1);
    }
    else if(choice=='S'){
        system("cls");
    }









    printf("\n\t\t ");
    printf("\n\t\t-------------------");




}
