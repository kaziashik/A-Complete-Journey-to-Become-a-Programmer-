#include<stdio.h>

int main()

{

   char a[10000], b[10000],jogfol[10001];

   scanf("%s %s",&a,&b);

   strrev(a);
   strrev(b);

 int i=0,j=0,k=0,hate=0;
 while(i<strlen(a)&&j<strlen(b))
 {

     int sum=(a[i]-'0')+(b[j]-'0')+hate;
     jogfol[k]=(sum%10+'0');
     hate=sum/10;
     i++;
     j++;
     k++;
 }
 while(i<strlen(a))
    {
    int sum=(a[i]-'0')+hate;
     jogfol[k]=(sum%10+'0');
     hate=sum/10;
     i++;

     k++;

 }

 while(j<strlen(b))
  {
         int sum=(b[j]-'0')+hate;
     jogfol[k]=(sum%10+'0');
     hate=sum/10;

     j++;
     k++;

}

 strrev(jogfol);
 printf("%s",jogfol);


}
