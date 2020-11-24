#include<stdio.h>
main()
{
	printf("Enter the marks: ");
	int m;
	scanf("%d",&m);
	if(m>=85 && m<=100)
	{
		printf("Grade A");
	}
	else if(m>=70 && m<=85)
	{
		printf("Grade B");
	}
	else if(m>=55 && m<=69)
	{
		printf("Grade C");
	}
	else if(m>=40 && m<=54)
	{
		printf("Grade D");
	}
	else if(m<40)
	{
		printf("Grade F");
	}
	else
	{
		printf("Wrong Input!");
	}
	return 0;
}
