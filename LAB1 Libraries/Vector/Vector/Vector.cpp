#include "pch.h"
#include "Vector.h"

Number Vector::radius() {
	return Number::sqrtNum(x * x + y * y);
}

Number Vector::angle() {
	Number r = Vector::radius();
	if (r.value != 0)
		return Number::asinNum(x / r);
	else
		return ZERO_NUMBER;
}

Vector Vector::add(Vector v1, Vector v2) {
	return Vector(v1.x + v2.x, v1.y + v2.y);
}

Vector Vector::subtract(Vector v1, Vector v2) {
	return Vector(v1.x - v2.x, v1.y - v2.y);
}