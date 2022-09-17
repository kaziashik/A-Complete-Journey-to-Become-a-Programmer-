#include<stdio.h>


struct student{

char name[100];
int id;
int marks;
int total;

};


int main(){

    int n;

     scanf("%d",&n);
    struct student utm,utem[n];
    for(int i=0; i<n; i++)

    {

      scanf("%s %d %d",&utem[i].name,&utem[i].id,&utem[i].marks);
    }
utm.total=0;

    for(int i=0; i<n; i++ )

 {

                     utm.total+=utem[i].marks;

        }




      printf("%d\n",utm.total);



}
