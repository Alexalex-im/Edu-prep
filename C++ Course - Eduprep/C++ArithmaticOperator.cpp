#include <iostream>
using namespace std;

int main() {
    int Var1 = 6;
    int Var2 = 12;
    int temp;

    temp = Var1 + Var2;
    cout << " Addition Result : " << temp << endl;

    temp = Var1 - Var2;
    cout << " Subtraction Result : " << temp << endl;

    temp = Var1 * Var2;
    cout << " Multiplication Result : " << temp << endl;

    temp = Var1 / Var2;
    cout << " Division Result : " << temp << endl;

    temp = Var1 % Var2;
    cout << " Mode Result : " << temp << endl;

    temp = Var1++;
    cout << " Increament Result :" << temp << endl;

    temp = Var1--;
    cout << " Decrement Result :" << temp << endl;

    return 0;



}