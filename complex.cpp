#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex& c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    Complex operator/(const Complex& c) {
        double denominator = c.real * c.real + c.imag * c.imag;

        return Complex(
            (real * c.real + imag * c.imag) / denominator,
            (imag * c.real - real * c.imag) / denominator
        );
    }

    Complex conjugate() {
        return Complex(real, -imag);
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";

        cout << endl;
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;
    Complex conjugate1 = c1.conjugate();

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    cout << "Multiplication: ";
    product.display();

    cout << "Division: ";
    quotient.display();

    cout << "Conjugate of First Number: ";
    conjugate1.display();

    return 0;
}