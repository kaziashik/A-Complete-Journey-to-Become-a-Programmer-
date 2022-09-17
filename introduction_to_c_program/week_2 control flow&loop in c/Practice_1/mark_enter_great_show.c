#include<stdio.h>
#include<stdbool.h>
int main()
{

int n,point,p,t;
int term;
double TERm_gpa=0;
double gpa=0;
double gpa2=0, sum;

printf("Enter number of terms: ");
scanf("%d",&t);

double gretat_point=0;
bool failed=false;

//this loop for sem term
for ( term=1; term<=t; term++){
printf("Term: %d\n",term);

        //this loop for subjet gret choos
printf("Enter number of Subjects: ");
scanf("%d",&p);
   for(int k=1; k<=p; k++)
     {



printf("Enter Marks Subject %d:",k);
scanf("%d",&n);
    if(n>=80&&n<=100)
{


     point=5;
     printf("Grade=A+, Point=5.00");
}
else if(n>=70&&n<=79){

    point=4;
      printf("Grade=A, Point=4.00");
}
else if(n>=60&&n<=69){

  point=3;
  printf("Grade=B, Point=3.00");
}
else if(n>=50&&n<=59){
  printf("Grade=C, Point=2.00");
    point=2;
}
else if(n>=40&&n<=49){
  printf("Grade=D, Point=1.00");
     point=1;
}
else if(n>=0&&n<=39){
    printf("Grade=F, Point=0.00");
    point=0;
    failed=true;

}
else{
    printf("you enter inviled number\n");
}

gretat_point +=point;

//printf("Grade point = %d\n", point);
printf("\n\n");
}




//when 1 subject fille
if(failed){
    printf("you have failed.\nyour GPA=0.0\n");

}

//otherwais will calculate result
else{
 double gpa= (double)gretat_point/p;
printf("Term GPA:  GPA: %.2lf\n\n\n",gpa);
sum +=gpa;
gretat_point =0;
}
//double sum=TERm_gpa+=(double)gretat_point/p;


gpa2= sum/t;


}

printf("Overall CGPA:  GPA: %.2lf\n\n\n",gpa2);





}
