#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()

{

    //hidden valu making
    srand( time(0)); //for making random number in real time
  int hidden=rand()%100+1; //%100 because of i want to  guse number in 100 and + 1 mean i want number after 0
  printf("%d\n",  hidden);

  int numeric_of_guess=0;

  while(numeric_of_guess<10){

    int guss;
    scanf("%d",&guss);

    if(guss == hidden){
        printf("Your are right\n");
        break;
    }
    else if( guss> hidden){
            printf("Guess smaller\n");

    }
    else{
        printf("Guess Bigger then this number\n");


    }

    numeric_of_guess++;

  }
  printf("you have filed you try more than 10 times");

}
