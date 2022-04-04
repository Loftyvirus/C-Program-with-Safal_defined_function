#include<stdio.h>
void f();
int main(){
	f();
	return 0;
}void f(){
	int a;
	printf("Show the factorial");
	printf("\n");
	printf("Which number you want to get a factorial = ");
	scanf("%d",&a);
	for (a;a>=1;a=a-1){
		printf("%d *",a);	
        		}}
