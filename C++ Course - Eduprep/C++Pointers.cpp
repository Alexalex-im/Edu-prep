#include <iostream>
using namespace std;
int main()
{
    int *Pointer;
    int num = 50;
    Pointer = & num;
    cout << "Variable address : " << & num << endl;
    cout << "Address stored in pointer : " << pointer << endl;
    cout << "Value stored in variable : " << *pointer << endl;
    return 0;
}




#include <iostream>
using namespace std;
int main()
{
    int var, *pointer;
    var = 5;
    cout << "Variable Address : " << & var << endl;
    cout << "Variable Value : " << var << end1;
    pointer =& var; 
    cout << "Address in pointer : " << pointer << endl;
    cout << "value in pointer : " << *pointer << endl;
    var = 55;
    cout << "Address in pointer : " << pointer << endl;
    cout << "Value in pointer : " << pointer << endl;
    *pointer = 10;
    cout << "Variable Address : " << &bar << endl;
    cout << "Variable value : " << var << endl;
    return 0;

}