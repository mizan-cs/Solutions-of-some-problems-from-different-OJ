#include <iostream>
#include <iomanip>
#include <math.h>

int main(){

	unsigned long long inputstream;
	unsigned long long array[4] = {}; //I used magic numbers to debug
	int arrayPlace = 0;

	while (std::cin >> inputstream ){
			array[arrayPlace] = sqrt(inputstream);
			arrayPlace++;
	}
	std::cout << std::fixed;
	std::cout << std::setprecision(4);
	for ( size_t i = arrayPlace - 1; i >= 0; i--)////<---Loop goes into random arrays

		std::cout << array[i] << " ";

}
