//字符反转显示
#include<stdio.h>
#include<string.h>
int main()
{
	char *p= "abcdefg";
	int len;
	len=strlen(p);
	while(len>=0)
	{
		printf("%c",*(p+len));
		len--;
	}
	printf("\n");
	return 0;
}
