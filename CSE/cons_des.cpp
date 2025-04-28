//constructor in inheritance
#include <iostream>
using namespace std;
class alpha
{
    int x;
    public:
    alpha(int i) //parameterized constructor
    {
        x = i;
        cout << "Alpha class Parameterized Constructor\n";
    }
    void show()
    {
        cout << "Alpha class x = " << x << endl;
    }

};
class beta
{
    float y;
    public:
    beta(float j) //parameterized constructor
    {
        y = j;
        cout << "Beta class Parameterized Constructor\n";
    }
    void show()
    {
        cout << "Beta class y = " << y << endl;
    }
};
class gamma : public alpha, public beta //multiple inheritance
{
    int z;
    public:
    gamma(int i, float j, int k) : alpha(i), beta(j) //Explicitly calling base class constructor
    {
        z = k;
        cout << "Gamma class Parameterized Constructor\n";
    }
    void show()
    {
        alpha::show(); //calling base class function
        beta::show(); //calling base class function
        cout << "Gamma class z = " << z << endl;
    }
};
int main()
{
    gamma g(10, 20.5, 30); //automatically executes both derived and base class constructors and destructors because of inheritance
    g.show(); //calling derived class function
    return 0;
}
