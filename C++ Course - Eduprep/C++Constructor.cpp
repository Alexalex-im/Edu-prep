#include <iostream>
using namespace std;

class DefaultConstructorExample {
    public:
    int x,y;
    DefaultConstructorExample()
    {
        x = 3;
        y = 6;
    }
};

int main()
{
    DefaultConstructorExample obj;
    cout << "Value of X : " << obj.x << endl;
    cout << "Value of Y : " << obj.y;
    return 0;
}



#include <iostream>
using namespace std;

class DefaultConstructorExample {
    public:
    DefaultConstructorExample()
    {
        cout << "Default - Constructor-Example";
    }
};

int main()
{
    DefaultConstructorExample obj;
    return 0;
}


#include <iostream>
using namespace std;

class DefaultConstructorExample {
    public:
    void fun()
    {
        cout << "Normal - function";
    }
};

int main()
{
    DefaultConstructorExample obj;
    obj.fun();
    return 0;
}


#include <iostream>
using namespace std;

class ParameterizedConstructorExample {
    private:
    int x, y;
    public:
    ParameterizedConstructorExample(int a, int b)
    {
        x = a;
        y = b;
    }
    int x()
    {
        return x;
    }
    int y()
    {
        return y;
    }
};

int main()
{
    ParameterizedConstructorExample obj(100, 200);
    cout << "Value of X : " << obj.x() << endl;
    cout << "Value of Y : " << obj.y();
    return 0;
}



#include <iostream>
using namespace std;

class CopyConstructorExample {
    public:
    int x;
    CopyConstructorExample(int a)
    {
        x = a;
    }
    CopyConstructorExample(CopyConstructorExample & b)
    {
        x = b.x;
    }
};

int main()
{
    CopyConstructorExample obj1(200);
    CopyConstructorExample obj1(obj1);
    cout << obj2.x;
    return 0;
}