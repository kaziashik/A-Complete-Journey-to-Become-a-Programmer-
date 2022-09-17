#include<stdio.h>
#include<stdbool.h>
int ar3[100]={0};

bool check_array(int *a, int n)
{

bool arr=true;
    for(int val=1; val<=n; val++){


           printf("\n%d %d ",val,a[val]);
    }

    for(int val=1; val<=n; val++){


           if(a[val]<=0){
                arr=false;

            return arr;
           }
    }
    return arr;

}

int main()

{

    int n,j=0;
    printf("Enter arry size:");
    scanf("%d",&n);
    int ar[n], ar2[n];
    int a=n;


    for(int i=1; i<=n; i++){
            printf("Enter arry element %d:",a);

        scanf("%d",&ar[i]);
        a--;
    }

    for(int i=0; i<=n; i++){
        ar2[i]=i;


    }

        for(int i=1; i<=n; i++){
                int val=ar[i];
                 ar3[val]++;
    }


bool xx=check_array(ar3,n);

if(xx==1){
   printf("\nTrue");
}
if(xx==0){
    printf("\nFalse");
}






    }








