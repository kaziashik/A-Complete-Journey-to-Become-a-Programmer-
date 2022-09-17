#include <stdio.h>
int main()
{


    char ch[100];

    scanf("%s",&ch);

    int count[10]={0};
    for(int i=0; i<strlen(ch); i++)
    {

        char value=ch[i];
        count[value-'0']=1;
    }

    for(int value=0; value<=9; value++){
       // printf("\n%d->%d",value,count[value]);

        if(count[value]==0){
            printf("\n\nNO\n\n");
            return 0;
        }
    }

    printf("\n\nYES\n\n");


}
