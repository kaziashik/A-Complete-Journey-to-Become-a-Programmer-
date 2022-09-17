
#include<stdio.h>

struct student{
    char name[100];
    int rool;
    int marks;



};
int main(){

    struct student a={"ashik",.marks=91,.rool=21};

    printf("name-%s Rool-%d Marks-%d\n",a.name,a.rool,a.marks);


}
