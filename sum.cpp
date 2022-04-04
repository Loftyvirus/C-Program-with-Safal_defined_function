#include<stdio.h>
void f();
int main(){
   f();
return 0;
        }
void f(){
int a,b,c;
printf("Enter A = ");
scanf("%d",&a);
printf("Enter B = ");
scanf("%d",&b);
c=a+b;
printf("%d + %d = %d",a,b,c);	
}