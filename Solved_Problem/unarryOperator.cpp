#include <iostream>
using namespace std;

class unarry {
public:
    int x;

    unarry(int x) {
        this->x = x;
    }

    void operator++(){
        x++; 
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    unarry x(10);
    ++x;          
    x.display();  
}
