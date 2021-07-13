#include<stdio.h>

int main()
{
	 int n,result;
	printf("enter the  value of n ........");
	scanf("%d",&n);
	result = ((n << 3) -n) >> 3;     // right  shift multiplication 
                                    //  left shift  division .
	printf("%d", result);
	return 0;
}