#include<stdio.h>
int main()
{

 FILE *logFile=fopen("log.txt","a"); // a mode will be sore all story .  w for sinngle systorey
 FILE *inputFile = fopen("if_progrmam_bag.txt","r");

 if(inputFile==NULL)
 {
   fprintf(logFile,"\n input file not found at 12220.00am");
   return 0;

 }



}
