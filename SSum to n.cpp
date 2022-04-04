#include<stdio.h>
#include<math.h>
void f();
int main(){
	f();
	return 0;
}
void f(){
	int u,v,s,n;
	printf("find the sum of nth term (Sn)!");
	printf("\n");
	printf("Enter the number to find sum upto = ");
	scanf("%d",&n);
	u=n/2;
	v=2+(n-1);
	s=u*v;
	printf ("%d is sum upto %d term",s,n);
	
}