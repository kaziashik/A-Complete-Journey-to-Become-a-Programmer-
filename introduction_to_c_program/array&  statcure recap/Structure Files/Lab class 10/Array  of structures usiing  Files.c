

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

    FILE * inputFile =fopen("input.txt","r");

    if(inputFile == NULL){

        printf("NOT FOUND\n");
        return 0;
    }
    int n;

    FILE * outputFile =fopen("output.txt","w");

    fscanf(inputFile,"%d",&n);



    struct student students[n];
    struct Unique_student unique_student[n];
    int k=0;



    for(int i=0; i<n; i++)
    {
        fscanf(inputFile,"%s %d %d", &students[i].name,&students[i].id,&students[i].marks);
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

    for(int i=0; i<k-1;i++){
        for(int j=i+1; j<k; j++){
            if(unique_student[i].total<unique_student[j].total)
            {

                struct Unique_student temp=unique_student[i];
                unique_student[i]=unique_student[j];
                unique_student[j]=temp;
            }
        }
    }


    for(int i=0; i<k; i++){
        fprintf(outputFile,"%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }






}

