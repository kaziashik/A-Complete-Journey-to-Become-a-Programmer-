#include<stdio.h>
int main()
{


    FILE *inputFile;
     inputFile =fopen("input.text","r");
     if(inputFile == NULL)
     {

         printf("No File Fount\n");
         return 0;
     }

     FILE *outputFile;
     outputFile=fopen("output.tex","w");

    while(1)
    {


        char  ch=fgetc(inputFile);
        if(ch==EOF)
        {

            break;
        }
        fputc(ch,outputFile);
    }
}
