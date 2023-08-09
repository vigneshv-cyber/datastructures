#include <stdio.h>  
int linearSearch(int a[], int n, int val) {  
   
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
	int n,i,val;
	printf("\n\tEnter the size of array --> ");
	scanf("%d",&n);	
	if(n>0)
	{
		int a[n];
	printf("\n\tEnter the array elements --> ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}   
    printf("\n\tEnter the value to be searched --> ");
	scanf("%d",&val);   
	int res = linearSearch(a, n, val);   
  printf("\n\tThe elements of the array are - { ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf(" }");
  printf("\n\tElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\n\tElement is not present in the array");  
  else  
  printf("\n\tElement is present at %d position of array", res);  
	
	
	}
	else if(n<0)// test case for Negative values
	{
		printf("\n\tNegative inputs are invalid..!");
	}
	else // test case for characters
	{
		printf("\n\tCharacter inputs are invalid..!");
	}
	
  return 0;  
}  





//{70, 40, 30, 11, 57, 41, 25, 14, 52};
