#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#pragma once
#include "Number.h"

#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

class Vector {
public:
    Number x, y;
    Vector(Number a, Number b) : x(a), y(b) {}
    Vector() : x(ZERO_NUMBER), y(ONE_NUMBER) {}

    Number radius();
    Number angle();

    static Vector add(Vector v1, Vector v2);
    static Vector subtract(Vector v1, Vector v2);
};

const Vector ZERO_VECTOR(ZERO_NUMBER, ZERO_NUMBER);
const Vector ONE_VECTOR(ONE_NUMBER, ONE_NUMBER);

#endif //VECTOR_VECTOR_H
