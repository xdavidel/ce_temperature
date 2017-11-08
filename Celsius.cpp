#include "Celsius.h"

#define TO_FAHRENHEIT(x) x * 9/5 + 32

Celsius::Celsius(double temperature):m_temperature(temperature)
{}


Celsius::~Celsius()
{}

Celsius::operator Fahrenheit() const
{
	return Fahrenheit(TO_FAHRENHEIT(m_temperature));
}

std::ostream &operator<<(std::ostream &os, Celsius const &temperature)
{
	os << temperature.m_temperature;
	return os;
}

