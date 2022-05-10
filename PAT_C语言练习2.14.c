#include<stdio.h>
int main()
{
	int i=1, n;
	double sum;
	scanf("%d", &n);
	sum=0;
	for(i=1; i<=2*n; i=i+2){
		sum=sum+1.0/i;
	}
	printf("sum = %.6lf", sum);
	return 0;
}