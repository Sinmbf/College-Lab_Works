// WAP to find the GCD of two numbers using Euclidean Algorith

#include<stdio.h>
void main(){
	int a,b,x,y,z;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(y!=0){
		z=x%y;
		x=y;
		y=z;
	}
}