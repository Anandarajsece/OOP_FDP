//pure virtual functions
// pure virtual function is a virtual function that has no definition in the base class
#include <iostream>
using namespace std;
class Faculty
{
    public:
    virtual void calculateSalary() = 0; // pure virtual function
};
class RegularFaculty : public Faculty
{
    public:
    void calculateSalary()
    {
        cout << "Regular Faculty Salary" << endl;
    }
};
class VisitingFaculty : public Faculty
{
    public:
    void calculateSalary()
    {
        cout << "Visiting Faculty Salary" << endl;
    }
};
/*class AdjunctFaculty : public Faculty
{
    public:
    void calculateSalary1()
    {
        cout << "Adjunct Faculty Salary" << endl;
    }
};*/
int main()
{
    Faculty *f1;
    RegularFaculty r1;
    VisitingFaculty v1;
    //AdjunctFaculty a1;
    f1 = &r1;
    f1->calculateSalary(); // Regular Faculty Salary
    f1 = &v1;
    f1->calculateSalary(); // Visiting Faculty Salary
    return 0;
}