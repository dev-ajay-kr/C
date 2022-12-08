//
// Created by ajsty on 12/6/2022.
//

#include<stdio.h>
#include<conio.h>
void main1()
{ int a=1234;
    char c='A';
    char str[]="RAVINDER B";
    float f=1324.234513;
    printf("\n%d",a); // prints the value of a normally
    printf("\n%10d",a); // prints a with right alignment
    printf("\n%-10d",a); // prints a with left alignment with width 10
    printf("\n%c",c);
    printf("\n%10c",c);
    printf("\n%-10c",c);
    printf("\n%s",str);
    printf("\n%20s",str);
    printf("\n%-20s",str);
    printf("\n%20.4s",str); // 20.4 means in a width of 20 only
    printf("\n%f",f);
    printf("\n%20f",f);
    printf("\n%-20f",f);
    printf("\n%20.2f",f); // 20.2 means in a width of 20
    // only 2 digits after decimal will be printed
    getch();
}




