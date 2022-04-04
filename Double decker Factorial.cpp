#include<stdio.h>
void f();
void g();
int main(){
	f();
	g();
	return 0;
}void f(){
	int a;
	printf("Show the factorial");
	printf("\n");
	printf("Which number you want to get a factorial = ");
	scanf("%d",&a);
	for (a;a>=1;a=a-1){
		printf("%d *",a);	
		
}
}void g(){
	int f=1,k;
	printf("\n");
	printf("Show the factorial value");
	printf("\n");
	printf("Which number you want to get a factorial = ");
	scanf("%d",&k);
	for(k;k>=1;k=k-1){
        f=f*k;
} printf("Factoz is %d",f);
        
}
