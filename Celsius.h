#pragma once
#include <iostream>
#include "Fahrenheit.h"
#include "Celsius.h"

class Celsius
{
private:
	double m_temperature;

public:
	Celsius(double);
	~Celsius();
	
	operator Fahrenheit() const;

	friend std::ostream& operator<<(std::ostream&, const Celsius&);
};

