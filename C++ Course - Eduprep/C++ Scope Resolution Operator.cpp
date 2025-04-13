#include <iostream>
#include <String>
using namespace std;
String var1 = "Programming";
static int var2 = 10;
int main()
{
    String var1 = "Line";
    cout << "Value of global Integer Variable : " << :: var2 << endl;
    cout << "Value of global String Variable : " << :: var1 << endl;
    cout << "Value of stored in Local variable : " << :: var1 << endl;
    return 0;

}



#include <string>
using namespace std;

class Sample 
{
    public:
    String name;
    int id;

    void first();
    void second();
    {
        cout << " Example Id : " << id;
    }
};

void sample :: first()
{
    cout << "Example Name : " << name << endl;
}

int main()
{
    sample obj1;
    obj1.name = "Vishal";
    obj1.id = 10;
    obj1.first();
    obj1.second();
    return 0;
}