#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex();
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
complex::complex()
{
    real = 10;
    img = 20;
}
int main()
{
    complex a, b;
    a.display();
    b.display();
    return 0;
}