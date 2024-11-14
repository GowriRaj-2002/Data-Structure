#include<stdio.h>
void main(){
	int a[20],i,n,j,temp;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("Enter the array elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j] > a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is : \n");
	for(i=1;i<=n;i++){
		printf("%d",a[i]);
		printf("\n");
	}
}

