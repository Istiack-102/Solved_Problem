#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int Y, W;
    
   
    cin >> Y >> W;
    
    
    int max_roll = max(Y, W);
    
    
    int favorable_outcomes = 7 - max_roll; 
    
    
    int total_outcomes = 6;
    
    
    int gcd_value = gcd(favorable_outcomes, total_outcomes);
    
    
    cout << favorable_outcomes / gcd_value << "/" << total_outcomes / gcd_value << endl;

    return 0;
}
