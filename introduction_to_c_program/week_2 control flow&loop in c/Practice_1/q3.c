#include<stdio.h>

int main()

{
int n;

printf("enter number so i can tell is it even or odd: ");
scanf("%d",&n);

if (n%2==0){

    printf("%d is even number",n);
}
else {
    printf("%d number is odd",n);
}


return 0;
}
