#include<stdio.h>
int main()
{

    char ar[5]="abcd";
    printf("%s\n",ar);

    char ar2[19]="kazi ashikur rahmn";
    printf("%s\n\n",ar2);
    // if i want to get string from user
//    char ar3[19];
//    scanf("%s",&ar3);
//    printf("%s",ar3);

    ////if i write like this out put wil show only kazi because scanf



    char ar4[19];
   // gets(ar4);  /// to get full line of input//

   fgets(ar4 , 5,stdin);
    printf("%s",ar4);
}
