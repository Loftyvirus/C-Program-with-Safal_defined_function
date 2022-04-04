#include<stdio.h>
void f();
int main(){
	f();
	return 0;
}void f(){
	int n,s;
   printf("FIND DTHE SSUM OF NTH EVEN NUMBER!");
   printf("\n");
   printf("Enter Nth term = ");
   scanf("%d",&n);
   s=n*(n+1);
   printf("%d is sum of %d th even number",s,n);
   
}