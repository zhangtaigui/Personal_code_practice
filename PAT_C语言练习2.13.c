#include<stdio.h>
int main(void)
{
	int i, n;
	double sum;
	scanf("%d", &n);
	sum=0;
	i=1;
	for(i=1; i<=n; i++){
		sum=sum+1.0/i;
	}
	printf("sum = %.6f", sum);
	
	return 0;
}
