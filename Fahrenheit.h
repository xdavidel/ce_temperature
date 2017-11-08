#pragma once
#include <iostream>

class Celsius;

class Fahrenheit
{
private:
	double m_temperature;

public:
	Fahrenheit(double);
	~Fahrenheit();

	friend std::ostream& operator<<(std::ostream&, const Fahrenheit&);
};

