#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, arr[100];
printf("\n\tEnter size of elements --> ");
if(scanf("%d",&n))		//test case for characters and negative numbers !!
{
	if(n>0)
	{
		printf("\n\tEnter the elements --> ", n);
for(i = 0; i < n; i++){
	scanf("%d",&arr[i]);
	
}

printf("\n\tEnter the value to be searched --> ");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(arr[mid] < key)
low = mid + 1;
else if (arr[mid] == key) {
printf("\n\t%d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("\n\tNot found! %d isn't present in the list..!", key);
	}
	else if(n<0)//test case for Negative numbers
	{
		printf("\n\tNegative numbers are invalid input...!");
	}
	


}
else //test case for characters
{
	printf("\n\tCharacters are Invalid input");
}

return 0;
}
