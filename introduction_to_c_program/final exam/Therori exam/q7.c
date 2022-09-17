#include<stdio.h>

int main()
{
int n, mul,mul1[100];



//number of value will take
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++){

        scanf("%d",&ar[i]);
    }


    //taking mul value as inout
scanf("%d",&mul);

     for(int i=0; i<n; i++){



        for(int j=0; j<n; j++)
          {


                  mul1[i]=ar[i]*ar[j];
            printf("%d ",mul1[i]);



           }

      if(mul1[i]==mul){
         printf("\nYES");
            return 0;
            }
    }

     printf("\nNo\n");

}

