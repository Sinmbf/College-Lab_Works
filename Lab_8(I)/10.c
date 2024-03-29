// 10. Write three 1-D arrays called A, B and C of size n. Now accept the content of A
// and B. Perform C=A-B and display the result.

#include<stdio.h>
#include<stdlib.h>

void main() {
	int *ptr1,*ptr2,*ptr3,i,n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	ptr1=(int *)malloc(n*sizeof(int));
	ptr2=(int *)malloc(n*sizeof(int));
	ptr3=(int *)malloc(n*sizeof(int));
	if(ptr1==NULL || ptr2==NULL || ptr3==NULL){
		printf("Memory Allocation Failed");
		exit(0);
	}
	printf("Enter %d values for array A: ",n);
	for(i=0; i<n; i++) {
		scanf("%d",ptr1+i);
	}
	printf("Enter %d values for array B: ",n);
	for(i=0; i<n; i++) {
		scanf("%d",ptr2+i);
		*(ptr3+i)=*(ptr1+i)-*(ptr2+i);
	}
	printf("C = A - B:\n");
	for(i=0; i<n; i++) {
		printf("%d\n",*(ptr3+i));
	}
	free(ptr1);
	free(ptr2);
	free(ptr3);
}
