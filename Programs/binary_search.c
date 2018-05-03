#include<stdlib.h>
#include<stdio.h>

void printarr(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Elements in the array index [ %d ] : [ %d ]\n", i, arr[i]);
	}
}

int search(int arr[],int x,int n)
{
	int start,end,mid;
	start = 0;
	end = n-1;

	while(start <= end)
	{
		mid = (start + end)/2;
		printf("Start : %d , End : %d , Mid : %d \n", start, end, mid);
		if(arr[mid] == x)
		{
			return mid;
		}
		
		if(arr[mid] < x)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[5]={2,4,6,8,10};
	int ret  = 0;
	
	int n;
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Enter element to be searched : ");
	scanf("%d", &n);	
	ret = search(arr,n,size);
	printf("Element Searched at index : %d\n",ret);
	printarr(arr,size);
	return 0;
}
