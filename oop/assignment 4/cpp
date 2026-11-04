#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        if(img>0)
        cout << real << " + i" << img;
        else
        cout<<"\n"<<real<<"-i"<< - img;
    }

   
    Complex add(Complex X)
    {
        Complex sum;
        sum.real = real + X.real;
        sum.img = img + X.img;
        return sum;
    }

   
   
     
    Complex subtract(Complex);
    Complex multiply(Complex);
    Complex divide(Complex);
   
};
Complex Complex::subtract(Complex X)
   
    {
        Complex diff;
        diff.real = real - X.real;
        diff.img = img - X.img;
        return diff;
    }
Complex Complex:: multiply(Complex X)
    {
        Complex mul;
        mul.real = (real * X.real) - (img * X.img);
        mul.img = (real * X.img) + (img * X.real);
        return mul;
    }
Complex Complex:: divide(Complex X)
    {
        Complex div;
        int den = (X.real * X.real) + (X.img * X.img);

        div.real = ((real * X.real) + (img * X.img)) / den;
        div.img = ((img * X.real) - (real * X.img)) / den;

        return div;
    }


int main()
{
    Complex C1, C2, C3;

    cout << "C1 object is created\n";
    C1.accept(3, 5);
    C1.display();

    cout << "\nC2 object is created\n";
    C2.accept(7, 5);
    C2.display();

    cout << "\nAddition of Complex Numbers\n";
    C3 = C1.add(C2);
    C3.display();

    cout << "\nSubtraction of Complex Numbers\n";
    C3 = C1.subtract(C2);
    C3.display();
   
   
     cout << "\nmultiplication of Complex Numbers\n";
    C3 = C1.multiply(C2);
    C3.display();
   
   
     cout << "\nDivision of Complex Numbers\n";
    C3 = C1.divide(C2);
    C3.display();
   
   

    return 0;
}
