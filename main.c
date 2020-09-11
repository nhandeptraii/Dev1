#include <stdio.h>

/* function main begins program execution*/
int main(void)
{
	
	int int1;
	int int2;
	int cong,tru,Nhan,Chia;
	
	printf(" Enter first integet\n");
	scanf("%d", &int1);
	
	printf(" Enter second integer\n");
	scanf("%d", &int2);
	
	cong = int1 + int2;
	tru = int1 - int2; 
	Nhan = int1 * int2;
	Chia = int1 / int2;
	
	printf("%d= %d + %d\n",cong,int1,int2);
	printf("%d= %d - %d\n",tru,int1,int2);
	printf("%d= %d * %d\n",Nhan,int1,int2);
	printf("%d= %d / %d\n",Chia,int1,int2);
	return 0;
}
