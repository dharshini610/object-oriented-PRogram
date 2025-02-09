#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    friend Complex addComplex(const Complex&, const Complex&);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex sum(c1.real + c2.real, c1.imag + c2.imag);
    return sum;
}

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    Complex sum = addComplex(c1, c2);

    cout << "Sum: ";
    sum.display();

    return 0;
}