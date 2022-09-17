#include<stdio.h>
int main()

 {
     int c=0;
	for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("*");
        	c++;
    	}
	}
	printf("%d",c);


    return 0;
}

