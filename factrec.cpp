#include <stdio.h>
//recursion function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main() {
    int num;
    printf("\n\tEnter the input: ");
    if(scanf("%d", &num))
    {
    	if(num > 0) {
        int result = factorial(num);
        printf("\n\tFactorial of %d is %d", num, result);
    }
    else if(num < 0) { // test case for negative number
        printf("\n\tNegative numbers are invalid input...!");
    } 
	}
	
    //test case for characters
    else 
    {
    	printf("\n\tCharacters are invalid input...!");
	}
    return 0;
}

