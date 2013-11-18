int main()
{

	int num;
	printf("input:"); 
	scanf("%d",&num);
	printf("output:"); 
	put(num);
	printf("\n");     
	return 0;
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
  double a,b;
  printf("please input two numbers:");
  scanf("%lf,%lf",&a,&b);
  printf("Output");  
  printf("\na=%.6lf,b=%.6lf\n",a,b);
}
/////////////////////////////////////////////////////////////////////
#include<stdio.h>

void main()
{
	char a;
	printf("Input a lowercase letter: ");
	scanf("%c",&a);
        printf("Output:");
	printf("%c(%d)\n",a,a);
	a=a-32;
	printf("%c(%d)\n",a,a);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>

void  main()
{
	int l,C;
	double p,S;
	printf("Input a side of triangle: ");
	scanf("%d",&l);
	C=l*3;
	p=C/2.0;
	S=sqrt(p*(p-l)*(p-l)*(p-l));
        printf("Output: ");
	printf("The area of triangle is %.2lf, the circle of triangle is %d.\n",S,C);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	char ch;
	printf("Input a character: ");
	ch=getchar();
        printf("Output: ");
	printf("%x\n",ch);

}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	int l,S,V;
	printf("Input a side of cube: ");
	scanf("%d",&l);
	S=(l*l)*6;
	V=l*l*l;
        printf("Output: ");
	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n",V,S);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	double x,y,R;
	int z ;
	printf("please input x,y,z: ");
	scanf("%lf,%lf,%d",&x,&y,&z);
	R=x+z%3*(int)(x+y)%2/4;
	printf("\nOutput:%.6lf\n",R);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	int y,m,d;
	printf("\nplease input a date: ");
	scanf("%d-%d-%d",&y,&m,&d);
        printf("Output: ");
	printf("\nthe date is: %d/%d/%d\n",y,m,d);
}

/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	unsigned int n;
	int a,b,c,d,m;
	printf("Input a number with 4-digit: ");
	scanf("%d",&n);
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	d=n%10;
	m=a+b+c+d;
	printf("Output:\nsum=%d\n",m);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define PRICE 30

void  main()
{
	int num,total;
	printf("please input num: ");
	scanf("%d",&num);
	total=PRICE*num;
        printf("Output:");
	printf("\ntotal=%d\n",total);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void  main()
{
	int a,b,s;
	printf("please input data: ");
	scanf("%d %d",&a,&b);
	s=a+b;
        printf("Output: "); 
	printf("\n %d+ %d= %d\n",a,b,s);
}
/////////////////////////////////////////////////////////////////////
#include <stdio.h>

void main()
{
        double r,h;
        double C1,S,V;
	printf("Input: ");
	scanf("r=%lf,h=%lf",&r,&h);
	C1=2*3.14*r;
	S=3.14*r*r;
	V=3.14*r*r*h;
        printf("Output:");
	printf("\nC1=%.2lf\nS=%.2lf\nV=%.2lf\n",C1,S,V);
}
/////////////////////////////////////////////////////////////////////
#include<stdio.h>

void main()
{
 float F,c;
 printf("Input the degree:");
 scanf("%f",&F);
 c=5*(F-32)/9;
 printf("Output:");
 printf("\nF(%.2f)=C(%.2f)\n",F,c);
}
