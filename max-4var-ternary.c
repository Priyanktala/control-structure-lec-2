#include<stdio.h>
main()
/*
6. WAP to Find max from 4 using ternary operator
*/

{
	int a,b,c,d;
	
	printf("Enter Value of A=");
	scanf("%d",&a);
	
	printf("Enter Value of B=");
	scanf("%d",&b);
	
	printf("Enter Value of C=");
	scanf("%d",&c);
	
	printf("Enter Value of D=");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("A is max"):printf("D is max"):(c>d)?printf("C is max"):printf("D is max")
													:(b>c)?(b>d)?printf("B is max"):printf("D is max"):(c>d)?printf("C is max"):printf("D is max");
	
	
		
}