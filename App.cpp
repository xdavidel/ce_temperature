#include <iostream>
#include <iomanip>

#include "Celsius.h"
#include "Fahrenheit.h"

#define LOG(x) std::cout<<x<<std::endl;

#define TABLE_ROW(l,c,f) std::cout<<std::left<<std::setw(20)<<l<<std::setw(10)<<c<<std::setw(10)<<f<<std::endl
#define PRINT_LINE(length) std::cout << std::setfill('-') << std::setw(length) << "-" << std::endl<<std::setfill(' ')

int main()
{
	Celsius cBoilingTemperature(100);
	Celsius cFreezingTemperature(0);
	Celsius cAbsoluteZeroTemperature(-273.15);
	
	TABLE_ROW("Temperature", "Celsius", "Fahrenheit");
	PRINT_LINE(50);
	TABLE_ROW("Boiling",cBoilingTemperature, static_cast<Fahrenheit>(cBoilingTemperature));
	TABLE_ROW("Freezing",cFreezingTemperature, static_cast<Fahrenheit>(cFreezingTemperature));
	TABLE_ROW("AbsoluteZero",cAbsoluteZeroTemperature, static_cast<Fahrenheit>(cAbsoluteZeroTemperature));

	system("pause");

	return 0;
}