#include <iostream>


std::string bmi(double w, double h) 
{
  int val = w / (h*h);
  if (val > 30){
    return "Obese";
    }
  else if (val < 30){
   if (val < 25.0){
     if (val < 18.5){
        return "Underweight";
      }
     return "Normal";
    }
  return "Overweight";
}
}