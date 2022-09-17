
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct student
{

    char name[100];
    int id;
    int marks;
    int total;
};

struct Unique_student{

char name[100];
int id;
int total;

};
int main()

{
    int n;

    scanf("%d",&n);

    struct student students[n];
    struct Unique_student unique_student[n];
    int k=2;



    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d", &students[i].name,&students[i].id,&students[i].marks);
        bool found=false;

        for(int j=0;j<k;j++)
        {

            if(unique_student[j].id==students[i].id){

                unique_student[j].total+=students[i].marks;
                found=true;
            }
        }

       if(found==false){


        strcpy(unique_student[k].name,students[i].name);
        unique_student[k].id=students[i].id;
        unique_student[k].total=students[i].marks;
        k++;
       }



    }


    for(int i=0; i<k; i++){
        printf("%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }






}

