#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    void input(int riyal, int imaginary)
    {
        real = riyal;
        img = imaginary;
    }

    void display()
    {
        cout << "The complex number is: " << real << " + " << img << "i" << endl;
    }
    
    void findSum(complex a, complex b)
    {
        real = a.real + b.real;
        img = a.img + b.img;
    }
};

int main()
{
    complex a, b, c;

    a.input(1, 2);
    a.display();

    b.input(3, 4);
    b.display();

    c.findSum(a, b);
    c.display();

    return 0;
}