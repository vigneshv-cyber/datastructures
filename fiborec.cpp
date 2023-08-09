#include <stdio.h>
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int num;

    printf("\n\tEnter the number of terms: ");
    scanf("%d", &num);
    if(num>0){
    	printf("\n\tFibonacci Series: ");
    	for (int i = 0; i < num; i++) {
        	printf("%d ", fibonacci(i));
    	}
	}
    else if(num<0)
    {
    	printf("\n\tNegative numbers are invalid input ....!");
	}
	else
	{
		printf("\n\tCharacters are invalid input..!");
	}
    return 0;
}

