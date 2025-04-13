#include <iostream>
using namespace std;
class sample 
{
    public:
    String name;
    int roll;
    int age;
    String dept;
    void displaynames();

    void displayid()
    {
        cout << " Id : " << roll << endl;
    }

    void displayage()
    {
        cout << " Age : " << age << endl;
    }

    void displayDept()
    {
        cout << " Department : " << dept << endl;
    }
};

void sample :: displayname()
{
    cout << "Name : " << name << endl;
}

int main()
{
    Sample obj1;
    obj1.name = " Vishal ";
    obj1.roll = 28;
    obj1.age = 21;
    obj1.dept = " Information Technology ";
    obj1.displayname();
    obj1.displayid();
    obj1.displayage();
    obj1.displaydept();
    return 0;
}