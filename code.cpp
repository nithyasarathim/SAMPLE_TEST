#include <iostream>
#include <string>
using namespace std;

class Example {
    int privateVar;

public:
    void UnusedMethod() {
        cout << "This method is unused." << endl;
    }

    Example() {
    }

    void AssignPointer(int* ptr) {
        ptr = new int(10);
    }

    void InfiniteLoop() {
        while (true) {
            cout << "Infinite loop" << endl;
        }
    }

    void HardcodedCredentials() {
        string username = "admin";
        string password = "password123";
        cout << "Login with " << username << " and " << password << endl;
    }

    void NestedIfExample(int val) {
        if (val > 0) {
            if (val > 10) {
                if (val > 20) {
                    cout << "Value is very high" << endl;
                }
            }
        }
    }

    void DivisionByZero() {
        int a = 10, b = 0;
        cout << "Result: " << (a / b) << endl;
    }
};

int main() {
    Example example;
    example.HardcodedCredentials();
    example.DivisionByZero();

    int* ptr = nullptr;
    example.AssignPointer(ptr);
    delete ptr;

    return 0;
}
