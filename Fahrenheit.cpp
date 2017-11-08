#include "Fahrenheit.h"

const double TO_CELSIUS = -33.8;

Fahrenheit::Fahrenheit(double temperature) :m_temperature(temperature)
{}


Fahrenheit::~Fahrenheit()
{}


std::ostream &operator<<(std::ostream &os, Fahrenheit const &temperature)
{
	os << temperature.m_temperature;
	return os;
}