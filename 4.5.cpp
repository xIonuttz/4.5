#include <iostream>
using namespace std;
class MyClass {
private:
    int* data; // Member as a pointer

public:
    // Pseudo-constructor
    void initialize(int value) {
        data = new int(value);
    }

    // Destructor to release allocated memory
    ~MyClass() {
        delete data;
    }

    // Member function to access data
    int getData() const {
        return *data;
    }
};

int main() {
    MyClass obj;

    // Initialize using pseudo-constructor
    obj.initialize(42);

    // Use the object
    cout << "Data: " << obj.getData() << endl;

    // Destructor is automatically called when the object goes out of scope, releasing the allocated memory

    return 0;
}
