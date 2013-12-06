//字符反转显示
#include<stdio.h>
#include<string.h>
int main()
{
	char *p= "12345";
	int len;
	len=strlen(p);
	while(len>0)
	{
		printf("%c",*(p+len-1));
		len--;
	}
	printf("\n");
	return 0;
}
//String To Int
int strtoint(char *str)
{

	int n=0;
	int neg=0;
	if(*str=='-')//is negative number?
	{
		str=str+1;
		neg=1;
	}
	while(*str!=0)//12345
	{
		if('9'<*str||*str<'0')
		{
			printf("string error!\n");
			exit(-1);
		}
		n=n*10+*str-'0';
		str++;
	}
	if(neg)
		return -n;
	else
		return n;
}
//strlen函数的实现
int strlen(const char *str)//unsigned
{
	int n=0;
	while(*str++!=0)//'\0'
	{
		n++;	
	}
	return n;
}
