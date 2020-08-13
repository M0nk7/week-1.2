#include <stdio.h>

int main()
{
	float n;
	int sell = 180;

	scanf_s("%f", &n);
	if (n >= sell)
	{
		printf("%.2f Baht", n - sell);
	}
	else printf("No");

	return 0;
}