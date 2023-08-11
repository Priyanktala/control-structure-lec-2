#include<stdio.h>
main()
/*
4 WAP to Find min from given 5 no using nested
if else

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
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is minimum");
				}
				else
				{
					printf("E is minimum");
				}
			}
		}
	}	
}