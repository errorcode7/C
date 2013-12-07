#include<stdio.h>
#include<string.h>
int main()
{
	return 0;
}

//字符串反转
void revstr(const char *str)
{
//	char *p= "12345";
	int len;
	len=strlen(str);
	while(len>0)
	{
		printf("%c",*(str+len-1));
		len--;
	}
	printf("\n");
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

//strcpy的实现
char *strcp(char *des,const char *src)
{
	char *ret=des;
	while((*des++=*src++));//返回左操作数
	return ret;
}
