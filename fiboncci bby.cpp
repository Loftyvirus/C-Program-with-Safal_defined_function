#include<stdio.h>
#include<conio.h>
int f(int);
int main(){ 
	int n, i; 
	printf("FIBONACCI!");
	printf("\n");
	printf("Enter the nth term for fibonacci series = "); 
	scanf("%d",&n); 
	printf("fibonacci series is =  ");
	for(i=0;i<n;i++) { 
		printf("%d ",f(i));
	}
}
 
int f(int i){ 
	if(i==0){
	return 0;
	}else if(i==1){
	return 1;
	}else{
	return (f(i-1)+f(i-2));
	}
} 