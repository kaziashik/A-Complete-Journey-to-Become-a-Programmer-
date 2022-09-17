
#include<stdio.h>

struct Student{
    char name[100];
    int rool;
    int marks;



};
int main(){

    int n;
    scanf("%d",&n);
    struct Student highest={.marks=0};

    for(int i=0; i<n; i++)
    { struct Student a;
       scanf("%s %d %d",&a.name,&a.rool,&a.marks);

       if(a.marks>highest.marks){
        highest=a;
       }


    }
     printf("%s %d %d",highest.name,highest.rool,highest.marks);


}

