#include <iostream>

//This is an excerise from codecademy

int main() {
    
  //my dogs age is 3
  int dog_age = 5;

  int early_years, later_years, human_years;

//The first two years
  early_years = 21;
 
  //dog age minus 2 times 4
  later_years = (dog_age - 2) * 4;

  human_years = early_years + later_years;

  std::cout << "My name is Brett! Ruff ruff, I am " << dog_age << " years old in "<< human_years << " human years \n";

};