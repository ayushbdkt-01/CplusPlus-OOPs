#include <iostream>
using namespace std;
class easy
{
    int a, b, c;

public:
    easy(int x, int y, int z = 100)
    {
        a = x, b = y, c = z;
    }
    void print()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};
int main()
{
    easy a(12, 13);
    easy b(12, 13, 14);
    a.print();
    b.print();
    return 0;
}