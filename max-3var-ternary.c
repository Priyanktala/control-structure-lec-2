#include<stdio.h>
main()
/*
5 WAP to Find max from 3 using ternary operator

*/

{
	int a,b,c;
	
	printf("Enter Value of A=");
	scanf("%d",&a);
	
	printf("Enter Value of B=");
	scanf("%d",&b);
	
	printf("Enter Value of C=");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("A is max"):printf("C is max")
													:(b>c)?printf("B is max"):printf("C is max");
	
	
		
}