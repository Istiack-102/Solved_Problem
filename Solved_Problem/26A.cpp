#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> primeDivisors(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (primeDivisors[i] == 0) { 
            for (int j = i; j <= n; j += i) {
                primeDivisors[j]++;
            }
        }
    }
    int almostPrimeCount = 0;
    for (int i = 2; i <= n; ++i) {
        if (primeDivisors[i] == 2) {
            almostPrimeCount++;
        }
    }
    cout << almostPrimeCount << endl;
    return 0;
}
/*amra akta n+1 er akta vector nilam 0 diye initial kora oikhan a prime 
numbers r jonno increase korlam
**kivabe korlam- jodi akta vector r man 0 hoy tar mane oita prime pore amra
oi prime number r gonitor r ghor gula ++ kore dibo eivabe n porjonto jbo then 
amra check korbo kar kar man 2 hoise jar man 2 hobe sheita i amr ans r modde 
jog hoye jbe.*/
