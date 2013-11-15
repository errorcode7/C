#include<stdio.h>
#define N 16

char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void put(int num)
{	
	int m;
	
	m=num%N;
	num=num/N;
	
	if(num>0)
	{	
		put(num);
	}
	printf("%c",hex[m]);
  //printf("%d",m);     
}

int main()
{

	int num;
	printf("input:"); 
	scanf("%d",&num);
	printf("output:"); 
	put(num);
	printf("\n");
	system("pause");     
	return 0;
}
