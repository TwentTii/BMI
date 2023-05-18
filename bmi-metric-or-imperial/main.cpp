#include <iostream>
using namespace std;

int
main ()
{
/// variables for height, weight, and Body Mass Index
//Take in the two numbers
//Divide them and return the BMI
// int Metric
// int Imperial
  int weight;
  int height;
  int BMI;
  int Imperial;
  int Metric;
  char input;


  cout <<
    "Would you like to calculate for BMI in Imperial measurements? y for yes, n for Metric";
  cin >> input;
  if (input == 'y')
    {
      cout << "Give me your weight (in pounds)\n";	//asks for weight in pounds
      cin >> weight;
      cout << "Give me your height (in inches)\n";	//asks for height in inches
      cin >> height;

      BMI = (weight * 703) / (height * height);
      cout << "Your BMI is : " << BMI;
    }

  else
    {
      cout << "Give me your weight (in kilograms)\n";	//asks for weight in kilograms
      cin >> weight;
      cout << "Give me your height (in meters)\n";	//asks for height in meters
      cin >> height;
      BMI = (weight) / (height * height);
      cout << "Your BMI is : " << BMI;
    }
    
    
        printf(" \nIf your BMI is less than 18.5, it falls within the underweight range.If your BMI is 18.5 to 24.9, it falls within the normal or Healthy Weight range.If your BMI is 25.0 to 29.9, it falls within the overweight range.\nIf your BMI is 30.0 or higher, it falls within the obese range.");



}


