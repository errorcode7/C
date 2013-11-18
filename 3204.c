#include<stdio.h>
int main()
{

	double score;
	int temp;
	char grade;
	/*
	do
	{   
		printf("please input the score(0-100):");
		scanf("%lf",&score);
		printf("Output:\n");
	}while(score>100||score<0);
	*/
	printf("please input the score(0-100):");
	scanf("%lf",&score);
	while(1)
	{
		if(score>100||score<0)
		{
			printf("Output:\n");
			printf("please input the score(0-100):");
			scanf("%lf",&score);
		}
		else
		{
			break;
		}
	}	
	temp=(int)score/10;
	switch(temp)
	{ 
		case 10:
		case  9: grade='A';break;
		case  8: grade='B';break;
		case  7: grade='C';break;
		case  6: grade='D';break;
		default:  grade='E';
	}
		printf("score=%.1lf,grade=%c\n",score,grade);
		return 0;
	}
