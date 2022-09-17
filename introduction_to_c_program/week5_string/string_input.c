#include<stdio.h>
int main(){


     printf("Enter  your name: ");

    char name[100];
    //gets(name); //if i want to print many word like kaziashikur rahman

    fgets(name,10,stdin); // for safly input , to ignor bafarover flow


    printf("Hello, %s\n", name);



return 0; }

