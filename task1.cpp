#include <iostream>
using namespace std;
class Employee
{
    public:
        int a;
        float b;
        void enter()
        {
            cin >> a >> b;
        }
        void show()
        {
            cout << a << endl << b << endl;
        }
};
int main(int argc, char* argv[])
{
    Employee root;
    root.enter();
    root.show();
    return 0;
}
