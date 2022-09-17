#include <stdio.h>
 int main()
 {

     int number_of_users;
     scanf("%d",&number_of_users);

     int rating[number_of_users];

     for(int i=0; i<number_of_users; i++){
        scanf("%d",&rating[i]);
     }

     int sum=0;
     for(int i=0;i<number_of_users; i++){
            sum +=rating[i];

     }
     double average= (double)(sum)/number_of_users;
      printf("average %lf",average);
      int count[6]={0};

      for(int val=1; val<=5; val++){

            count[rating[val]]++;


      }

      for(int i=1; i<=5; i++){
         printf("\n val= %d -> %d",i,count[i]);
      }

     return 0;
 }

