

#include<stdio.h>

struct Student{
    char name[100];
    int rool;
    int marks;



};

void print_struct(struct Student a)
{
     printf("%s %d %d\n",a.name,a.rool,a.marks);
}

void fun(struct Student *a)
{

    a[1].marks=100;
    //or  st->marks=100;
}
int main(){

    struct Student a[3];
    for(int i=0; i<3; i++){
        scanf("%s %d %d",&a[i].name,&a[i].rool,&a[i].marks);
    }

    fun(a);

    for(int i=2; i>=0; i--){
    print_struct(a[i]);
    }


}


