#include <stdio.h>

struct student{
char name[100];
int marks ;
int roll;
char section[100];
int whichClass;

};

int main()

{


    int n;
    struct student hight={.marks=0}, lowest={.marks=100};

    scanf("%d",&n);

    for( int i=0; i<n; i++)
    {

        struct student a,b;

        scanf("%s %d %d %s %d",&a.name,&a.marks,&a.roll,&a.section,&a.whichClass);

        if(a.marks>hight.marks){

            hight=a;
        }

         if(a.marks<lowest.marks){

            lowest=a;
        }


    }
    printf("hight:  %s %d %d %s %d\n",hight.name,hight.marks,hight.roll,hight.section,hight.whichClass);
      printf("lowest :  %s %d %d %s %d\n",lowest.name,lowest.marks, lowest.roll,lowest.section,lowest.whichClass);
}
