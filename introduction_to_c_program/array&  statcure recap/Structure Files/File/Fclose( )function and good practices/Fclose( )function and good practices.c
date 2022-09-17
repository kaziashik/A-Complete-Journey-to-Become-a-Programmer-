#include<stdio.h>
int main()
{

    FILE * inputFile = fopen("input.txt","r");

    ///good practise always check input file have or don't have.

    if(inputFile==NULL)
    {

        return 0;
    }
    FILE *outputFile =fopen("output.txt","w");


    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d\n",n);

    //file close  have to close because good practise

    fclose(inputFile);
    fclose(outputFile);
    return 0;

}
