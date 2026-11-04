#include <iostream>
using namespace std;

class Complex
{
private:
    float real, img;

public:
    void accept(float r, float i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex x)
    {
        Complex sum;
        sum.real = real + x.real;
        sum.img = img + x.img;
        return sum;
    }

    Complex operator-(Complex x)
    {
        Complex diff;
        diff.real = real - x.real;
        diff.img = img - x.img;
        return diff;
    }

    Complex operator*(Complex x)
    {
        Complex product;
        product.real = (real * x.real) - (img * x.img);
        product.img = (real * x.img) + (img * x.real);
        return product;
    }

    Complex operator/(Complex x)
    {
        Complex quotient;
        float denominator = (x.real * x.real) + (x.img * x.img);

        quotient.real = ((real * x.real) + (img * x.img)) / denominator;
        quotient.img = ((img * x.real) - (real * x.img)) / denominator;

        return quotient;
    }

    void display()
    {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " " << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    float r, i;

    cout << "Enter real first complex number: ";
    cin >> r;
    cout << "Enter imaginary part of first complex number: ";
    cin >> i;
    c1.accept(r, i);

    cout << "Enter real part of second complex number: ";
    cin >> r;
    cout << "Enter imaginary part of second complex number: ";
    cin >> i;
    c2.accept(r, i);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Difference: ";
    c3.display();

    c3 = c1 * c2;
    cout << "Product: ";
    c3.display();

    c3 = c1 / c2;
    cout << "Quotient: ";
    c3.display();

    return 0;
}
