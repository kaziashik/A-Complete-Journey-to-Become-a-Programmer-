#include<stdio.h>
 int count=0;

int count_zero(char *a){
for(int i=0; i<strlen(a); i++){
            int val=a[i];
        if (val=='0'){
            count++;
        }
}
return count;
}


int main()
{



    char ar[100];


    scanf("%s",ar);


    int count1=count_zero(ar);
    printf("%d",count1);
}
