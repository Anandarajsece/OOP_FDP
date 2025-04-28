#include<iostream>
using namespace std;
class Employee
{
    private:
     string name;
     int age;
    public:
        void set_name(string n)
        {
            name=n;
        }
        void set_age(int a)
        {
            age=a;
        }
        string get_name()
        {
            return name;
        }
        int get_age()
        {
            return age;
        }
        void get_info()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main()
{
    Employee e1;
    e1.set_name("John");
    e1.set_age(25);
    e1.get_info();
    cout<<"Name: "<<e1.get_name()<<endl;
    cout<<"Age: "<<e1.get_age()<<endl;
    e1.display();
    return 0;
}