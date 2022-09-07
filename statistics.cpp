#include <iostream>
#include <limits>
#include <math.h>

#include "istatistics.h"
#include "min.h"
#include "max.h"
#include "mean.h"
#include "meandev.h"
#include "percent90.h"
#include "percent95.h"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//main_function
int main() {

	const size_t statistics_count = 6;
	IStatistics* statistics[statistics_count];
	 
	statistics[0] = new Min{};
	statistics[1] = new Max{};
	statistics[2] = new Mean{};
	statistics[3] = new MeanDev{};
	statistics[4] = new Percent90{};
	statistics[5] = new Percent95{};

	// Enter elements
	double val = 0;
    std::cout<< "Please, enter elements \n";
	while (std::cin >> val) {
		for (size_t i = 0; i < statistics_count; ++i) {
			statistics[i]->update(val);
		}
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "\n Invalid input data\n";
		return 1;
	}
		
	// Print results if any
    std::cout << "print results \n";
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << statistics[i]->name() << " = " << statistics[i]->eval() << std::endl;
	}

	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete statistics[i];
	}

	return 0;
}
