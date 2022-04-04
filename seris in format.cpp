#include<stdio.h>
void f();
int main()
{
	f();
	return 0;
}
void f(){
	int n,m=2;
	printf("Showing number to nth term given format ass [ 2,5,8,1,.....,n ]! \n");
	printf("enter nth term = ");
	scanf("%d",&n);
	printf("The series is = ");
	for (m;m<=n;m=m+3){
	printf("%d ,",m);
	}
}