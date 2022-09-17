
#include<stdio.h>
int main()
{

    char ar[100],ar2[100], sav[100],sav2[100];
    int count=0;

    scanf("%s %s",&ar,&ar2);

    printf("%s %s ",ar,ar2);

    for(int i=0; i<=strlen(ar); i++){

            sav[i]=ar[i];

    }

    for(int j=0; j<=strlen(ar); j++){

            sav2[j]=ar2[j];

    }

     for(char j='a'; j<='z'; j++){

       printf("\n%c  %s",j);

     }



           if(sav==sav2){
            count++;

           }



 if(count==1){
    printf("yes");
 }
    printf("\n%s  %s",sav2,  sav);
}
