// #include <iostream>
// using namespace std;
// void function1();
// void function2();
// int main()
// {
//     function1();
//     function2();
//     return 0;
// }
// void function()
// {
//     cout << "Programming Line";
// }
// void function2()
// {
//     cout << "Line";
// }

#include <iostream>
#include <string.h>
using namespace std;

void function1 (String, String);
String s1,s2,s3;
int main()
{
    cout << "String1 :" << endl;
    cin >> s1;

    cout << "String2 :" << endl;
    cin >> s2;
    function1(s1, s2);
    return 0;
}
void function1(String a, String b)
{
    s3 = s1 + s2;
    cout << s3 << endl;
}