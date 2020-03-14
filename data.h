//
// Created by justagod on 3/14/20.
//

#ifndef LAB3_PROG_DATA_H
#define LAB3_PROG_DATA_H

class Triangle {
private:
    float x1,y1;
    float x2,y2;
    float x3,y3;

    float area();
public:
    Triangle(float x1, float y1, float x2, float y2, float x3, float y3);

    bool operator ==(Triangle& other);
    bool operator !=(Triangle& other);
    bool operator >(Triangle& other);
    bool operator <(Triangle& other);

    void shift(float x, float y);
};

class Tuple {
private:
    int data[100] = { 0 };
    int len;
public:
    explicit Tuple(const int *data, int len);
    Tuple operator +(Tuple &other);

    bool operator ==(Tuple& other);
    bool operator !=(Tuple& other);
    bool operator >(Tuple& other);
    bool operator <(Tuple& other);
};


#endif //LAB3_PROG_DATA_H
