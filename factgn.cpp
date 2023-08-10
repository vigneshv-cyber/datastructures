#include <stdio.h>
int main() {
    int num,result=1;
    printf("\n\tEnter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\n\tNegative numbers are not allowed for factorial..!");
    } 
	else if(num>0) {
        //int result = factorial(number);
        for(int i=1;i<=num;i++){
        	result*=i;
		}
        printf("\n\tFactorial of %d is: %d\n", num, result);
    }
    else
    {
    	printf("\n\tCharacters are not valid for factorial..!");
	}

    return 0;
}



