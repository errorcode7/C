#include <stdio.h>

void fun(double dTestNo, int iBase);

int main(void)
{  
 double dTestNo = 0.795;
 int iBase;

 for (iBase=2; iBase<=9; iBase++)
 {
  fun(dTestNo, iBase);
 }
 printf("\n");

 return 0;
}

void fun(double dTestNo, int iBase)
{
 int iT[8], iNo;

 printf("十进制正小数 %f 转换成 %d 进制数为:", dTestNo, iBase);
 for (iNo=0; iNo<8; iNo++)
 {
  dTestNo *= iBase;
  /*********Found************/
  //iT[iNo] = ______________;
  iT[iNo] = (int)dTestNo;


  /*********Found************/
  //dTestNo -= ______________;
	dTestNo -= iT[iNo];	

 }

 printf("0.");
 for (iNo=0; iNo<8; iNo++)
 {
  printf("%d", iT[iNo]);
 }
 printf("\n");
}
