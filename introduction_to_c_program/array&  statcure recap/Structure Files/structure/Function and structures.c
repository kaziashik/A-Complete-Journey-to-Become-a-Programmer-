
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

void fun(struct Student *st)
{

    (*st).marks=100;
    //or  st->marks=100;
}
int main(){

    struct Student a={"rakib", 21,82};
    fun(&a);
    print_struct(a);


}


