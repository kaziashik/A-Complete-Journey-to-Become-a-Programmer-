#include<stdio.h>
int main()
{
    int d, days,months,years;

    printf("Enter days: ");
    scanf("%d",&days);

    years=days/365;
    months=(days-(years*365))/30;
    d=years-(months*30);

     printf("%d Year(s)\n",years);
     printf("%d\n",months);
      printf("%d",d);





    return 0;
}
