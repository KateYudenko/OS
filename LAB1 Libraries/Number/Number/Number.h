#pragma once

class Number {
public:
	double value;
	Number(double valueNum);
	Number();
	Number createNumber(double valueNum);

	static Number add(Number a, Number b);
	static Number subtract(Number a, Number b);
	static Number multiply(Number a, Number b);
	static Number divide(Number a, Number b);

	Number operator+(Number a);
	Number operator-(Number a);
	Number operator*(Number a);
	Number operator/(Number a);

	static Number sqrtNum(Number a);
	static Number asinNum(Number a);
};

const Number ZERO_NUMBER(0);
const Number ONE_NUMBER(1);