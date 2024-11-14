#include<stdio.h>
void main(){
    int i,j,k,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
    printf("Enter row and column first matrix :\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter first matrix elements : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first matrix is :\n");
    for(i=0;i<r1;i++){
    	for(j=0;j<c1;j++){
    		printf("%d\t",a[i][j]);
       	}
       	printf("\n");
    }
    
    printf("Enter row and column of second matrix :\n");
    scanf("%d %d",&r2,&c2);
    printf("Enter second matrix elements : \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
     printf("The second matrix is :\n");
    for(i=0;i<r2;i++){
    	for(j=0;j<c2;j++){
    		printf("%d\t",b[i][j]);
       	}
       	printf("\n");
    }
    c[i][j]=0;
    for (int i = 0; i < r1; ++i) {
       for (int j = 0; j < c2; ++j) {
          for (int k = 0; k < c1; ++k) {
             c[i][j] += a[i][k] * b[k][j];
          }
       }
    }
    printf("The final matrix is : \n");
    for(i=0;i<r1;i++){
    	for(j=0;j<c2;j++){
    		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
    }
}



