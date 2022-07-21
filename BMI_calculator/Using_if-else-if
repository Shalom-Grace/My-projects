#include <stdio.h>

int main ()
{
	float height;
    	float weight;
   	float BMI;

	printf("Enter height in meter: \n");
    	scanf("%f", &height);
    	printf("Enter weight in kg: \n");
    	scanf("%f", &weight);

	BMI = weight/(height*height);
   	printf("You Body Mass Index (BMI) is %2f\n", BMI);
    	if (BMI < 15)
        	printf("Your BMI category is Underweight");
    	else if (BMI >= 18.5 && BMI <= 24.9)
        	printf("Your BMI category is Normal weight");
    	else if (BMI >= 25 && BMI <= 29.9)
        	printf("Your BMI category is Overweight");
   	else if (BMI > 30)
	{
		 printf("Your BMI category is Obesity");
      	  	 if (BMI >= 30 && BMI <= 34)
		 {
			printf("Your BMI category is Obesity I");
		 }
		if (BMI >= 35 && BMI <= 39)
		{
			printf("Your BMI category is Obesity II");
		}
		if (BMI > 40)
		{
			printf("Your BMI category is Obesity III");
		}
	}
	else
	printf("You have entered invalid values\n");
}
