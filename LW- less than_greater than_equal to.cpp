#include<stdio.h>
main()
{
	int a,b=18;
	
	printf("Enter your age ->");
	scanf("%d",&a);
	
	printf("                                  \n");
	
	if(a<b)
	{
	printf("you are Not eligible for Vote");
	}
    else if(a==b)
    {
	 printf("you are also eligible for Vote");
	}
	else if(a>b)
	{
		printf("you are eligible for Vote");
	}
}
