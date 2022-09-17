#include<stdio.h>



struct student{
    char name[100];
int roll;

int  marks;};

void print_struct(struct student a){


printf("%s %d %d\n",a.name,a.roll,a.marks);
}


int main()
{


    struct student a[3];
     int max=a[0];

    for(int i=0; i<3; i++)
    {
        scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);


    }

    for(int i=0; i<3; i++)
    {


        if(a[i]>a[0])
    {

        a[i];
    }

        print_struct(a[i]);






    printf()
    }
}


