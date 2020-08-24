#include<stdio.h>

int main()
{
	int kor, eng, math;
	int sum = 0;

	math = 70;
	eng = 90;
	kor = 70;
	sum = 86 + 100 + 90;

	printf("added test header.\n");
	printf("This program print report card.\n");
	printf("added test line\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Sum : %d\n", sum);
	printf("Average : %d\n", sum/3);
	return 0;
}
