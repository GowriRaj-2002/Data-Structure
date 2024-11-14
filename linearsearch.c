#include<stdio.h>
void main()
{
	int i,n,item,a[20];
	int flag=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter element to be Searched : ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(a[i]==item){
			printf("\n%d found at position %d\n",item,i);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Item not found");
	}
}

