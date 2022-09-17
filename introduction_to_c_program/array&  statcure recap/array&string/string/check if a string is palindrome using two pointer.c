
#include<stdio.h>
#include<string.h>
int main()
{



    char ar[100],ar2[100];


    scanf("%s",&ar);


    int i=0, j=strlen(ar)-1;

    while(i<j){
        if(ar[i]!=ar[j]){
            printf("No\n");
            return 0;

        }

        i++;
            j--;
    }

    printf("yes");





}
