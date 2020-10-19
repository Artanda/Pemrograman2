#include <iostream>
using namespace std;

int main()
{
    bool a, b, c;
    a = true;
    b = false;
    c = a && b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    bool d, e, f;
    d = true;
    e = false;
    f = a || b;

    cout << "\nd = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f;
}