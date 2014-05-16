#ifndef FRACTION_HPP_
#define FRACTION_HPP_
#include <vector>
#include <string>


using namespace std;


class Fraction {

public:
Fraction();
Fraction(int n, int d);

string Afficher();
void addition(const int add);
void addition(const Fraction& ma_fraction);

string toString(const int nb);

const int getNumerateur() const;
const int getDenominateur() const;
void setNumerateur(const int iNumerateur);
void setDenominateur(const int iDenominateur);


private:
    int _numerateur;
    int _denominateur;
};


#endif /* FRACTION_HPP_ */
