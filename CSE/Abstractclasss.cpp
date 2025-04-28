//abstract class 
//abstract class is a class that contains at least one pure virtual function
//abstract class cannot be instantiated
//abstract class can be used as a base class for other classes
//abstract class can be used to define a common interface for derived classes


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
int main()
{
    Faculty *f1;
    RegularFaculty r1;
    VisitingFaculty v1;
    f1 = &r1;
    f1->calculateSalary(); // Regular Faculty Salary
    f1 = &v1;
    f1->calculateSalary(); // Visiting Faculty Salary
    return 0;
}
