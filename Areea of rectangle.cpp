#include<stdio.h>
void f();
int main(){
	f();
	return 0;
}void f(){
	int l,b,a;
	printf("C PROGRAM TO FIND AREA OF RECTANGLE!");
	printf("\n");
	printf("Enter Length (L) = ");
	scanf("%d",&l);
	printf("Enter Breadth (B) = ");
	scanf("%d",&b);
	if(l>b){
	a=l*b;
	printf("The area of the rectangle is %d unit^2",a);}
else{
	printf("Noobie breadth of rectangle can't be greater than area");
}}
