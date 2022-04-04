#include<stdio.h>
#include<conio.h>
void f();
void g();
void h();
void i();
void j();
int main(){
	f();
	g();
	h();
	i();
	j();
	return 0;
}
void f(){
	int a;
	printf("finding odd and even \n");
	printf("Enter a Number = ");
	scanf("%d",&a);
	if(a%2==0){
	printf("%d is even",a);
	}else{
	printf("%d is odd",a);
	}	
}
void g(){
	float s,p,t,r;
	printf("\n");
	printf("\n");
	printf("find simple intrest \n");
	printf("Enter a principle = ");
	scanf("%f",&p);		
	printf("Enter a Time = ");
	scanf("%f",&t);
	printf("Enter a Rate = ");
	scanf("%f",&r);
	s=(p*t*r)/100;
	printf("You have simple intrest of only Nrs.%f/- ",s);
	printf("\n");
	printf("\n");	
}
void h(){
	int z;
	printf("C PROGRAM TO FIND POWER OF POSITIVITY!? ");
	printf("\n");
	printf("Enter a number = ");
	scanf("%d",&z);
	if(z<1){
		printf("%d is negative",z);
	}else{
		printf("%d is positive",z);	
	}
	printf("\n");
	printf("\n");	
}
void i(){	
int n,i,c=0;
printf("Enter any number n = ");
  scanf("%d",&n);
  for (i=1;i<=n;i++) {
      if (n%i==0) {
         c++;
      }}if(c==2){
	   printf("%d is a Prime number",n);
  }else {
         printf("%d is not a Prime number",n);
  }   
}
void j(){
	int a,r;
	printf("\n");
	printf("\n");
	printf("Area of circle \n");
	printf("enter radius = ");
	scanf("%d",&r);
	a=(22/7)*r*r;
	printf("area of circle is %dunit^2",a);
}
			

	
	
	
	
