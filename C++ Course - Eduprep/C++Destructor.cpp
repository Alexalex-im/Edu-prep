#include <iostream>
using namespace std;
class DestructorExample {
    private:
    int a,b;
    public:
    DestructorExample (int x, int y)
    {
        cout << "\" Constructor \"" << endl;
        a = x;
        b = y;
    }

    void output()
    {
        cout << " A = " << a << endl;
        cout << " B = " << b << endl;
    }
    DestructorExample()
    {
        cout << "\" Destructor \"";
    }
};

int main(){
        DestructorExample obj(100, 200);
        obj.output();
        return 0;
}