#include "Fraction.h"
#include <string>
#include <sstream>

Fraction::Fraction() {

}

Fraction::Fraction(int n, int d)
{
	_numerateur = n;
	_denominateur = d;
}

const int Fraction::getNumerateur() const
{
	return _numerateur;
}

const int Fraction::getDenominateur() const
{
	return _denominateur;
}

void Fraction::setNumerateur(const int iNumerateur)
{
	_numerateur=iNumerateur;
}

void Fraction::setDenominateur(const int iDenominateur)
{
	_denominateur=iDenominateur;
}

string Fraction::Afficher()
{
	string var = "" + toString(this->_numerateur) + "/" + toString(this->_denominateur);

	return var;
}


string Fraction::toString(const int nb)
{
	std::ostringstream oss;
	oss << nb;
	return oss.str();
}
