#include<stdio.h>

int main() {
	int marks_english;
	int marks_math;

	printf("Enter marks in English: ");
	scanf("%d", &marks_english);

	printf("Enter marks n Math: ");
	scanf("%d",marks_math);

	int total_marks;
	total_marks=marks_english+marks_math;
	printf("Total marks= %d", total_marks);

	return 0;
}
