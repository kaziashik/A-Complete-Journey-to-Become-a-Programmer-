#include<stdio.h>
int main()
{
    int n;



//for(int  i=1; i<=5; i++){
//    printf("%d\n",i);
//}


int money=0, target=100;
while(money<target){
    printf("Need more money. Enter Amount:");
    int given;
    scanf("%d", &given);
    money+=given;
    printf("Current money = %d\n", money);

}
printf("Congraculation!! Enough money = %d\n", money);
}



