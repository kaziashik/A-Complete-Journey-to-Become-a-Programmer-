
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n],ar2[n],i,j,count=0,count2=0;
    for(int i=0,j=0; i<n; i++, j++)
    {

      scanf("%d %d",&ar[i],&ar2[j]);


        if(ar[i]>ar2[j]){
            count++;
        }




          if(ar2[i]>ar[j]){
            count2++;
        }

    }


    if(count2>count){
        printf("Chris");
    }
    else if(count2<count){
        printf("Mishka");
    }
    else{
        printf("Friendship is magic!^^");
    }


}
