#include<stdio.h>
int main()
{
    int num;
 	printf("\n\tEnter the number --> ");
    scanf("%d",&num);
    if(num>0 || num<0)
    {
    	if(num % 2 == 0)
    	{
    		printf("\n\tEven ");
		}
        
    	else
    	{
    		printf("\n\tOdd ");	
		}
	}
	//Test case for characters !
	else{
		printf("\n\tCharacters are not allowed...!");
		printf("\n\tEnter the valid input !");
	}
    
     
    return 0;
}
