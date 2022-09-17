#include<stdint.h>

int main(){
int arr1[10],arr2[10],arr3[10];

int i,j=0,k=0,n,count=0,count2=0;

printf("Input the numbber of element to be stored in the array");
 scanf("%d",&n);



printf("Inpute %d elements in the array: \n",n);

for(i=0;i<n; i++){
    printf("element - %d ",i);
    scanf("%d",&arr1[i]);
}

for(i=0;i<n;i++){
    if(arr1[i]%2==0){
        arr2[j]=arr1[i];
        j++;
        count++;
    }

    else
    {
        arr3[k]=arr1[i];
        k++;

        count2++;
    }
}


for(i=0;i<j; i++){
    printf("%d ",arr2[i]);

}

printf("\n");

for(i=0;i<k; i++){
    printf("%d ",arr3[i]);

}

printf(" \ntotal even number->%d. \n total odd number-> %d",count,count2);
}
