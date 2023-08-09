#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);  
if(r>0){
	printf("enter the number of column=");    
	scanf("%d",&c);
	if(c>0){
		printf("enter the first matrix element=\n");    
		for(i=0;i<r;i++)    
			{    
				for(j=0;j<c;j++)    
				{    
					scanf("%d",&a[i][j]);    
				}    
			}  
		printf("enter the second matrix element=\n");    
		for(i=0;i<r;i++)    
			{    
				for(j=0;j<c;j++)    
				{    
					scanf("%d",&b[i][j]);    
				}    
			}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
			{    
				mul[i][j]=0;    
				for(k=0;k<c;k++)    
					{    
						mul[i][j]+=a[i][k]*b[k][j];    
					}    
			}    
	}    
   
for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			printf("%d\t",mul[i][j]);    
		}    
		printf("\n");    
	}   
}
//Test case for columns(Negative values)!
else if(c<0){
	printf("\n\tNegative inputs are invalid for columns...");
}
//(Character values)!
else
{
	printf("\n\tCharacter inputs are invalid for columns...");
}
	
}  
//Test case for rows(Negative values) !
else if(r<0)
{
	printf("\n\tNegative inputs are invalid for rows...");
	} 
//(Character values)!	 
else
{
	printf("\n\tCharacter inputs are invalid for rows...");
	  }  
 
return 0;  
}  
