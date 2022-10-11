#include<stdio.h>
void main()
{
	int h, w, d;
	float  p_dvp, p_dsp, p_wood, weight;
	p_dsp = 0.6;
	p_dvp = 0.8;
	p_wood = 0.5;
	printf("Density of dsp - %f g/cm cubed, density of dvp - %f g/cm cubed, density of wood - %f g/cm cubed \n", p_dsp, p_dvp, p_wood);
	printf("Write height from 180 cm to 220 cm:");
	scanf_s("%i", &h);
	printf("Write height from 80 cm to 120 cm:");
	scanf_s("%i", &w);
	printf("Write height from 50 cm to 90 cm:");
	scanf_s("%i", &d);
	if ((180 <= h && h <= 220) && (80 <= w && w <= 120) && (50 <= d && d <= 90))
	{
		if (h < 200)
		{
			weight = ((h * w * 0.5 * p_dvp) + (h * d * 1.5 * p_dsp * 2) + (w * d * 1.5 * p_dsp * 2) + (h * w * p_wood * 2) + (w * d * 1.5 * p_dsp * 4)) / 1000;
			printf("Weight of wardrobe - %.2f kg", weight);
		}
		else
		{
			weight = ((h * w * 0.5 * p_dvp) + (h * d * 1.5 * p_dsp * 2) + (w * d * 1.5 * p_dsp * 2) + (h * w * p_wood * 2) + (w * d * 1.5 * p_dsp * 5)) / 1000;
			printf("Weight of wardrobe - %.2f kg", weight);
		}
	}
	else
	{
		printf("Wrong data");
	}
}