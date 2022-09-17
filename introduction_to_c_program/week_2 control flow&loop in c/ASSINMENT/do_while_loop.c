#include<stdio.h>
int main()


{
   int x=4;

//   while (x<4){
//    scanf("%d", &x);
//
//   }



//do {
//    scanf("%d", &x);
//
//    printf("x is %d\n", x);
//} while (x<4);


do {

    scanf("%d", &x);
}while(x%2 !=0);

    printf("Your input: %d", x);



    return 0;
}
