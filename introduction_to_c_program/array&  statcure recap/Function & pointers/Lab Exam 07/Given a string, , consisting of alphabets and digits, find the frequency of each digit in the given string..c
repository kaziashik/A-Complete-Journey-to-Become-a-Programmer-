
#include<stdio.h>
#include<string.h>

int main()
{


    char num[1000];


    scanf("%s",&num);
    int count[1000]={0};




    for(int i=0; i<strlen(num); i++){
         char v=num[i];
        count[v-'0']++;

    }



for(int val=0; val<=9; val++){


           printf("%d ",count[val]);

    }


}
