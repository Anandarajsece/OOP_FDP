//copy constructor
#include <iostream>
using namespace std;
class Employee
{
    int id;
    string name;
    public:
    Employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    Employee(const Employee &e)
    {
        id = e.id;
        name = e.name;
    }
    void display()
    {
        cout << id << " " << name << endl;
    }
};
int main()
{
    Employee e1(101, "Sonoo");
    Employee e2 = e1; //copy constructor is called
    e1.display();
    e2.display();
    return 0;
}