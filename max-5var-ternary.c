#include<stdio.h>
main()
/*
7 WAP to Find max from 5 using ternary operator
*/

{
	int a,b,c,d,e;
	
	printf("Enter Value of A=");
	scanf("%d",&a);
	
	printf("Enter Value of B=");
	scanf("%d",&b);
	
	printf("Enter Value of C=");
	scanf("%d",&c);
	
	printf("Enter Value of D=");
	scanf("%d",&d);
	
	printf("Enter Value of E=");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max") : (c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max")
													:(b>c)?(b>d)?(b>e)?printf("B is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max") : (c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max");
	
	
		
}