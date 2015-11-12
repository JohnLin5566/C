//Car parks & Charges
#include<stdio.h>		//scanf, printf
#include<math.h>		//ceil
float CalculateCharges(float hour);
int main()
{
	float hour;
	printf("How many hour did you park the car ? \n");

	while( scanf("%f", &hour) != EOF)
	{
		printf("you need to pay : %f doller\n", CalculateCharges(hour));
	}
}
float CalculateCharges(float hour)
{
	if	(hour <= 3.0)
	{
		return 2.0;
	}
	else if	(hour >= 3.0 && hour <= 19.0)
	{	
		return 2 + ceil((hour -3.0))*0.5;
	}
	else if	(hour >= 19.0)
	{
		return 10.0;
	}
}
