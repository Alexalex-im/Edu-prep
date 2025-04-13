#include <iostream>
using namespace std;

main()
{
    int a = 21;
    int c;

    c = a;
    cout << "= Operator, Value of c = :" << c << endl;

    c += a;
    cout << "+= Operator, value of c=:" << c << endl;

    c -= a;
    cout << "-= Operator, value of c=:" << c << endl;

    c *= a;
    cout << "*= Operator, value of c=:" << c << endl;

    c /= a;
    cout << "/= Operator, value of c=:" << c << endl;

    c = 200;
    c %= a;
    cout << "%= Operator, value of c=:" << c << endl;

    c <<= 2;
    cout << "<< Operator, value of c=:" << c << endl;

    c >>= 2;
    cout << ">>= Operator, value of c=:" << c << endl;

    c &= 2;
    cout << "&= Operator, value of c=:" << c << endl;

    c ^= 2;
    cout << "^= Operator, value of c=:" << c << endl;

    c |= 2;
    cout << "|= Operator, value of c=:" << c << endl;


}