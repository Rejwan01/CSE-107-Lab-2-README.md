/* A program to find out the grading of the student based on the given average marks */


#include <stdio.h>

int main()
{
	int grade;
	
	printf("Enter your mark : ");
	
	scanf("%d",&grade);
	
	if(grade<=100)
	
	{
		if(grade>0)
		
		{
			if(grade>=80)
			
			printf("Your grade is : A+");
			
			else
			
			{
				if(grade>=70)
				
				printf("Your grade is : A");
				
				else
				
				{
					
					if(grade>=60)
					
					printf("Your grade is : B+");
					
					else
					
					{
						if(grade>=50)
						
						printf("Your grade is : B");
						
						else
						
						{
							if(grade>=40)
							
							printf("Your grade is : C");
							
					else
					
					{
							if(
							grade>=0	)
							
							printf("Your grade is : F");
					
							}
							return 0;
							
							}
                       }
                 }
            }
        }
    }
}
