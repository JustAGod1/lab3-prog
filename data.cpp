//
// Created by justagod on 3/14/20.
//

#include <cmath>
#include <exception>
#include "data.h"

bool Triangle::operator==(Triangle &other) {
    return this->area() == other.area();
}

bool Triangle::operator!=(Triangle &other) {
    return !(*this == other);
}

float Triangle::area() {
    float a = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
    float b = pow(pow(x2 - x3, 2) + pow(y2 - y3, 2), 0.5);
    float c = pow(pow(x3 - x1, 2) + pow(y3 - y1, 2), 0.5);
    float p = (a + b + c) / 2;
    return pow(p*(p-a)*(p-b)*(p-c), 0.5);
}

bool Triangle::operator>(Triangle &other) {
    return this->area() > other.area();
}

bool Triangle::operator<(Triangle &other) {
    return this->area() < other.area();
}



Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3) : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3),
                                                                                 y3(y3) {}

void Triangle::shift(float x, float y) {
    x1 += x;
    x2 += x;
    x3 += x;

    y1 += y;
    y2 += y;
    y3 += y;
}

Tuple::Tuple(const int *data, int len) {
    for (int i = 0; i< len; i++) {
        this->data[i] = data[i];
    }
    this->len = len;
}

Tuple Tuple::operator+(Tuple &other) {
    if (other.len + this->len > 100) throw std::exception();

    Tuple result(data, len);
    for (int i = 0; i < other.len; ++i) {
        result.data[i + len] = other.data[i];
    }

    return result;
}

bool Tuple::operator==(Tuple &other) {
    return this->len == other.len;
}

bool Tuple::operator!=(Tuple &other) {
    return !(*this == other);
}

bool Tuple::operator>(Tuple &other) {
    return len > other.len;
}

bool Tuple::operator<(Tuple &other) {
    return len < other.len;
}


