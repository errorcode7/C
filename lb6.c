///////////////////////////////////////////lb6101
#include <stdio.h>

/******start******/
void fun(int *x,int *y);
/******end******/
int main()
{
	int a,b;
	printf("Input a, b:");
	scanf("%d,%d",&a,&b);
	printf("Output:\n");
	fun(&a,&b);

	return 0;
}

/******start******/
void fun(int *x,int *y)
{
	if(*x<*y)
	{
		(*x)^=(*y);
		(*y)^=(*x);
 		(*x)^=(*y);
 		/*
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    */
	}
	printf("\nmax=%d,min=%d\n", *x, *y);
}

/******end******/
