/* A program to select and print the largest/smallest of the three numbers */



#include <stdio.h>

int main()
{
    int num1,num2,num3;//variable declaration
    
    printf("Enter three numbers\n");
    
    scanf("%d %d %d",&num1,&num2,&num3);
    //Takes three input num1,num2,num3 from user

//check smallest
    if(num1<num2 && num1<num3){
            //check whether num1 is smallest than num2 and num3
            
        printf("\n%d is the smallest",num1);
    }//if it is true then this statement is displayed
    
    else if(num2<num3){
        //when it is false then check num2 or num 3 to small
        
        printf("\n%d is the smallest",num2);//when it is true this statements is displayed
    }
    
    else{
    	
        printf("\n%d is the smallest",num3);
        
    }//all statements are false this statement is displayed
    
//check largest
    if(num1>num2 && num1>num3)
    
    {
         //check whether num1 is largest than num2 and num3
        printf("\n%d is largest",num1);
        
    }//if it is true this statement is displayed
    
    else if(num2>num3){
        //when it is false then check num2 or num 3 to large
        
        printf("\n%d is largest",num2);//when it is true this statements is displayed
    }
    
    else{
    	
        printf("\n%d is largest",num3);
    }//all conditions are false this statement is displayed
   
    return 0;
}