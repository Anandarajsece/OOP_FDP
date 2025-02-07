#include <iostream>
#include <memory>
using namespace std;

class Hello {
public:
    char name[20] = "Hello";
};

int main() 
{
    shared_ptr<Hello> ptr(new Hello);
    weak_ptr<Hello> weakPtr = ptr;

    std::cout << ptr.use_count() << std::endl; // Output: 1
    if (auto sharedPtr = weakPtr.lock()) { // Convert weak_ptr to shared_ptr
        std::cout << "Object is still alive" << std::endl;
    } else {
        std::cout << "Object has been destroyed" << std::endl;
    }

    return 0;
}