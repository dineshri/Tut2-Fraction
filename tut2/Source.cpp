#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
	int numerator;
	int denominator;
	void simplify(int &numer_lcm, int denom_lcm);

public:
	Fraction();
	void add(Fraction B);
	void subtract(Fraction B);
	void multiply(Fraction B);
	void divide(Fraction B);
	void print();
	void getNumDenom(int,int);
	void setNumDenom(int,int);
	~Fraction();

};
#endif
