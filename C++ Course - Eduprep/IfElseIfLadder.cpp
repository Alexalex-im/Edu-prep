#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to check grade :";
    cin >> num;
    if (num < 0 || num > 100) {
        cout << "wrong number";
    }
    else if (num >= 0 && num < 50)
    {
        cout << "D grade";
    }
    else if (num >= 50 && num < 60)
    {
        cout << "D grade";
    }
    else if (num >= 60 && num < 70)
    {
        cout << "C grade";
    }
    else if (num >= 70 && num < 80)
    {
        cout << "B grade";
    }
    else if (num >= 80 && num < 80)
    {
        cout << "A grade";
    }
    else if (num >= 90 && num <= 100)
    {
        cout << "A+ grade";
    }
    return 0;
    
}