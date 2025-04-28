//without virtual function
#include <iostream>
using namespace std;
class Faculty
{
    public:
    virtual void calculateSalary()=0; // pure virtual function
   
    
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
class PartTimeFaculty : public Faculty
{
    
};

int main()
{
    //Faculty t1;
    Faculty *f1;
    RegularFaculty r1;
    VisitingFaculty v1;
    PartTimeFaculty p1;
     f1 = &r1;
    f1->calculateSalary(); // Regular Faculty Salary
    f1 = &v1;
    f1->calculateSalary(); // Visiting Faculty Salary
    return 0;

}

