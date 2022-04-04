#include<stdio.h>
int f(int n){
	if (n==1){
	return 1;
	}else{
	return n*f(n-1);
	}
}
int main(){
	int n;
	printf("Factorial ussing recursion!");
	printf("\n");
	printf("ENTER A NUMBER = ");
	scanf("%d",&n);
	printf("Facatorial is %d",f(n));
}
