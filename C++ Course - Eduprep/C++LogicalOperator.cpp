#include <iostream>
using namespace std;
int main()
{
    int num1 = 30;
    int num2 = 40;
    if (num1 >= 40 || num2 >= 40)
    cout << "OR if block gets executed" << endl;
    if (num1 >= 20 && num2 >= 20)
    cout << "AND if block gets executed" << endl;
    if (!(num1 >= 40))
    cout << "Not if block gets executed" << endl;
    return 0;
}