#include<stdio.h>
int main()

{
    int age1, age2;

    scanf("%d %d", &age1, &age2);
int year=0;

    while ( age1 <=age2){

        age1 *=3;
        age2 *=2;
        year++;
    }

      printf("%d\n",year);



    return 0;
}
