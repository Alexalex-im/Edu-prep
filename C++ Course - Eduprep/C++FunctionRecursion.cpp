#include <iostream>
using namespace std;
int function1 (int Number)
{
    if (Number <= 1)
    return 1;
else
{
    return Number * function1 (Number - 1);
}

int main()
{
    int num;
    cout << "Number : ";
    cin >> num;
    cout << "Factorial : " << function1 (num);
    return 0;
 }
}



#include <iostream>
using namespace std;

int (number <= 1)
{
    if (number <= 1)
    return 1;
    else 
    return number * function New (number - 1);
}

int functionNew (int Number)
{
    if (number <= 1)
    return 1;
    else 
    return number * functionOld(number - 1);
}

int main()
{
    int num = 5;
    cout << functionOld (num);
    return 0;
}
