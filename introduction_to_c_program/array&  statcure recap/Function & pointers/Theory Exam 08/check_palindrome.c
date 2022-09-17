#include<stdio.h>
    char a[100],ar[100],ar2[100];
    int j=0,m=0,count=0;

int check_palindrome(char *arr)
{

    for(int i=0; i<strlen(arr); i++)
    {
   ar[j]=arr[i];
   j++;
    }
   int l=strlen(arr);

    for(int i=l-1; i>=0; i--)
    {
       ar2[m]=arr[i];
       m++;
    }

    printf("\nTo make palindrome minimum number char need to change\n");
    for(int i=0; i<strlen(arr); i++)
    {
          if(ar[i]!=ar2[i]){
            count++;
          }

}

return count/2;

}
int main()
{





    scanf("%s",&a);


int xx= check_palindrome(a);




    printf("\n%d",xx);
}
