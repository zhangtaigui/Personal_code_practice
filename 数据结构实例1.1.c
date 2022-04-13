#include <stdio.h>
int main()
{
	int n, num, max = 0, sum = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		sum += num;
		if (sum < 0)
			sum = 0;
		if (max < sum)
			max = sum;
	}
	printf("%d", max);

	return 0;
}
