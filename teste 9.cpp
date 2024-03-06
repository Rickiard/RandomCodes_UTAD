#include<stdio.h>

int main()
{
	float nums[10], media, desvios[10], soma = 0.0;
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("\n\nnums[%d] = ", i);
		scanf("%f", &nums[i]);
		
		soma += nums[i];
	}
	
	media = soma / 10;
	printf("\n\nMedia = %.2f\n", media);
	
	for(i = 0; i < 10; i++)
	{
		desvios[i] = nums[i] - media;
		
		printf("\n\nDesvio %d = %.2f\n", i, desvios[i]);
	}
	
	return 1;
}
