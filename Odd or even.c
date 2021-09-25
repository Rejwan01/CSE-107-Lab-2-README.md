/*A program to determine whether a given number is “odd” or “even” */


#include <stdio.h>

int main()

 {
    int num;
    
    printf("Enter an integer: ");
    
    scanf("%d", &num);

    if(num % 2 != 0)
    
        printf("%d is odd.", num);
    
    else
    
        printf("%d is even.", num);
    
    return 0;
    
}