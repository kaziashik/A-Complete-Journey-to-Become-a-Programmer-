#include<stdio.h>

int simple_structure(int a[]){


for(int i=0; i<=strlen(a); i++){
    if(a[i]%2==0){
        printf("\neven");
     }
     else{
         printf("\nodd");
     }
}



}
int main()
{
 int n;
 scanf("%d",&n);
 int b[n];

 for(int i=0; i<n; i++){
    scanf("%d",&b[i]);
 }
  simple_structure(b);

}
