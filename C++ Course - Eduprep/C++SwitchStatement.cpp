// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     switch(num)
//     {
//         case 10:
//         {
//             cout << "It is 10";
//             break;
//         }
//         case 20:
//         {
//             cout << "It is 20";
//             break;
//         }
//         case 30:
//         {
//             cout << "It is 30";
//             break;
//         }
//         default:
//         {
//             cout << " The number is not 10, 20, 30";
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << " Enter a number : ";
    cin >> num;
    switch(num)
    {
        case 10: cout << " It is 10"; break;
        case 20: cout << " It is 20"; break;
        case 30: cout << " It is 30"; break;

        default : cout << " The number is not 10, 20, 30";
        break;
    }
    return 0;
}