#include<stdio.h>
int main()
{
	int num[5], min, max;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number :");
		scanf_s("%d", &num[i]);
	}
	min = num[0];
	max = num[0];
	for (int i = 0; i < 5; i++)
	{
		if (num[i] <= min)
		{
			min = num[i];
		}
		else if (num[i] >= max)
		{
			max = num[i];
		}
	}
	printf("Min :");
	printf("%d ", min);
	printf("Max :");
	printf("%d", max);

return 0;
}