#include<stdio.h>
#include<stdlib.h>
int n,a[50];

void display()
{	int i;
	if (n == 0) {
	printf("Array is empty.\n");
	return;
	}
	printf("Array Elements are : \n\t");
    for(i=0;i<n;i++){
        printf("%d\n\t",a[i]);
    }
}
void insert()
{
    	int item,k,i;
    printf("Enter the element to be inserted : ");
    scanf("%d",&item);
    printf("Enter the position to be inserted : ");
    scanf("%d",&k);
    n=n+1;
    for(i=n;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k]=item;
    display();
}
void delete()
{
	int i,k;
    printf("Enter the position to be Deleted : ");
    scanf("%d",&k);
    n=n-1;
    for(i=k;i<n;i++){
        a[i]=a[i+1];
    }
    display();
}
void main()
{
int ch,i;
printf("\nEnter the number of elements : \n");
scanf("%d", &n);
printf("\nEnter %d array elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
while(1)
{
printf("\n---MENU---\n");
printf("\n 1.INSERTION\n");
printf("\n 2.DELETION\n");
printf("\n 3. DISPLAY\n");
printf("\n 4. EXIT\n");
printf("\nEnter your Choice :");
scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
		        delete();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("\nInvalid Choice");
		
	}
}
}

