#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
        string name;
        string surname;
        int birtdayDate;
        string address;
        int phoneNumber;
        string faculty;
        string course;
        int arr[4] = {1, 3, 3, 7}; // objects?? kakix objectov??
};
class Faculty
{
    public:
        string name;
};
int main(int argc, char* argv[])
{
    Faculty math;
    Faculty russian;
    math.name = "Math";
    russian.name = "Russian";
    cout << "Enter faculty:" << endl;
    string p;
    getline(cin, p);
    Student jack;
    Student tom;
    jack.faculty = "Math";
    tom.faculty = "English";
    //nushno opredelit' datu imya familiyu no eto dolgo
    if (p == jack.faculty)
    {
        cout << "Jack is studying on " << p << "faculty";
    }
    if (p == tom.faculty)
    {
        cout << "Tom is studying on " << p << "faculty";
    }
    else
    {
        return 1;
    }

    if (jack.faculty == math.name)
    {
        cout << "Jack's Faculty " << jack.faculty;
    }
    if (tom.faculty == math.name)
    {
        cout << "Tom's Faculty " << tom.faculty;
    }
    if (jack.faculty == russian.name)
    {
        cout << "Jack's Faculty " << jack.faculty;
    }
    if (tom.faculty == russian.name)
    {
        cout << "Tom's Faculty " << tom.faculty;
    }
    return 0;
}
