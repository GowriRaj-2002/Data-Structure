#include<stdio.h>
void main()
{
	int i,mid,n,k,a[20],low,high;
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter a sorted array :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the Element to be searched :");
	scanf("%d",&k);
	low = 0;
	high = n - 1;
	mid = (low+high)/2;
	while (low <= high) {
		if (a[mid] < k)
			low = mid + 1;
		else if (a[mid] == k) {
			printf("%d found at location %d \n", k, mid);
			break;
			}
		else
			high = mid - 1;
			mid = (low + high)/2;
			}
		if (low > high)
			printf("%d Not found \n", k);
}

