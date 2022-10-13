//
// Created by Marco Galliani on 12/10/22.
//

#ifndef LECT6_COMPLEX_H
#define LECT6_COMPLEX_H


class Complex {

public:
    Complex(double mReal, double mImg);

    double getMReal() const;

    void setMReal(double mReal);

    double getMImg() const;

    void setMImg(double mImg);

    //print
    void print() const;

    void print_polar() const;

    //modulus and phase
    double getModulus() const;
    double getPhase() const;

    void setModulus(double mMod);
    void setPhase(double mPhase);

private:

    double m_mod;

    double m_phase;

};

//operators
Complex operator+(const Complex& lhs, const Complex& rhs);
Complex operator-(const Complex& lhs, const Complex& rhs);
Complex operator*(const Complex& lhs, const Complex& rhs);
Complex operator/(const Complex& lhs, const Complex& rhs);

#endif //LECT6_COMPLEX_H
