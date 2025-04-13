#include <iostream>
using namespace std;
int main()
{
    for (int num = 100; num <= 1000; num += 100)
    {
        if (num == 500)
        {
            break;
        }
        cout << "Number : " << num << "\n";
    }
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    do
    {
        {
            if (num > 500)
            {
                break;
            }
        }
        cout << "Number : " << num << endl;
        num = num += 100;
    } while(num < 100);
    return 0;
}