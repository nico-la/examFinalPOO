#include "Fraction.hpp"
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

void Fraction::addition(const int add)
{
	int n_fraction = add;
	int d_fraction = 1;
	int n_result = this->_numerateur*this->_denominateur+n_fraction*d_fraction;
	int d_result = this->_denominateur*d_fraction;
	setNumerateur(n_result);
	setDenominateur(d_result);
}
void Fraction::addition(const Fraction& ma_fraction)
{
    int n_fraction = ma_fraction.getNumerateur();
    int d_fraction = ma_fraction.getDenominateur();
    int n_result = this->_numerateur*this->_denominateur+n_fraction*d_fraction;
    int d_result = this->_denominateur*d_fraction;
    setNumerateur(n_result);
    setDenominateur(d_result);

}

void Fraction::operator+(const Fraction& ma_fraction)
{
	addition(ma_fraction);
}

void Fraction::operator+(int ope)
{
	addition(ope);
}

string Fraction::toString(const int nb)
{
   std::ostringstream oss;
   oss << nb;
   return oss.str();
}
