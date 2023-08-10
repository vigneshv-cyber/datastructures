#include <stdio.h>

int main() {
    int n;
    
    printf("\n\tEnter the number of terms in the Fibonacci series: ");
    if(scanf("%d", &n))
    {
    	if(n>0){
    	int fib[n];
    	fib[0] = 0;
    	fib[1] = 1;
    
    	for (int i = 2; i < n; i++) {
        	fib[i] = fib[i - 1] + fib[i - 2];
    	}
    	printf("\n\t--Fibonacci series:--\n\n");
    	for (int i = 0; i < n; i++) {
    	    printf("\t%d ", fib[i]);
    	}
	}
	//Test case for Negative numbers
	else if(n<0)
	{
		printf("\n\tNegative numbers are invalid input ...!");
	}
	}
    
	//Test case for Characters
    else 
	{
		printf("\n\tCharacters are invalid input ...!");
	}
    
    return 0;
}

