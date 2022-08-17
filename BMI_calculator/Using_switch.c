#include <stdio.h>

int main() {
  float height;
  float weight;
  int BMI;

  printf("Enter height in meter: \n");
  scanf("%f", &height);
  printf("Enter weight in kg: \n");
  scanf("%f", &weight);

  BMI = weight / (height * height);
  printf("You Body Mass Index (BMI) is %d\n", BMI);

  switch (BMI) {
  case 0 ... 15:
    printf("Your BMI category is Underweight\n");
    break;
  case 18 ... 25:
    printf("Your BMI category is Normal weight'n");
    break;
  case 26 ... 30:
    printf("Your BMI category is Overweight\n");
    break;
  case 31 ... 35:
    printf("Your BMI category is Obesity I");
    break;
  case 36 ... 40:
    printf("Your BMI category is Obesity II");
    break;
  case 41 ... 100:
    printf("Your BMI category is Obesity III");
    break;
  default:
    printf("You have entered invalid values\n");
    break;
  }
}