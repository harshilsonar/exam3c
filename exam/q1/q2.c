#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[6]={1,3,8,9,5,7};
	int max=1;
	int i;
	for(i=0;i<6;i++)
	{
		if (max<arr[i]){
			max=arr[i];
		}
	}
	printf("this is maximum no: %d");
}
