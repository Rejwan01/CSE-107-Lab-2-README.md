/* A program to read three integer values from the keyboard and displays the output stating that they are the sides of right-angled triangle */


#include <stdio.h>

int main()

{
	int s1, s2, s3;
	
	printf("Enter three int values : ");
	
	scanf("%d %d %d", &s1, &s2, &s3);
	
	if(s1*s1 == s2*s2 + s3*s3 ||s2*s2 == s1*s1 + s3*s3 ||
     s3*s3 == s1*s1 + s2*s2 )
	
	{
		printf("\nThey are the sides of right-angled triangle ");
	}
	
	else
	
	{
		printf("\nThey are not the sides of right-angled triangle");
	}
	
	return 0;
	
	}