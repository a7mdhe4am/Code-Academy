#include <iostream>

int main() {
  // Add your code below  
  // declaring variables
double weightearth;
double weightmars;
double dismiles;
double diskilos;
// weight
std::cout << "What is the weight? \n";
std::cin >> weightearth;
weightmars = weightearth / 9.81 * 3.711;
printf ("Weight on mars is = %f \n", weightmars);
// distance
std::cout << "What is the distance in miles?\n";
std::cin >> dismiles;
diskilos = 1.609344 * dismiles;
printf ("Kilos = %f \n", diskilos);

}