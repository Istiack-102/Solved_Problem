#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    
    long testCases;
    std::cin >> testCases;
    
    while (testCases--) {
        long strLength;
        char targetChar;
        std::cin >> strLength >> targetChar;
        
        std::string inputString;
        std::cin >> inputString;

        if (targetChar == 'g') {
            std::cout << "0" << std::endl;
            continue;
        }

        long nextGIndex = 0;
        for (long i = 0; (!nextGIndex) && i < inputString.size(); i++) {
            if (inputString[i] == 'g') {
                nextGIndex = strLength + i;
                break;
            }
        }

        long maxDistance = 0;
        for (long i = strLength - 1; i >= 0; i--) {
            if (inputString[i] == 'g') {
                nextGIndex = i;
            } else if (inputString[i] == targetChar) {
                long currentDistance = nextGIndex - i;
                if (currentDistance > maxDistance) {
                    maxDistance = currentDistance;
                }
            }
        }

        std::cout << maxDistance << std::endl;
    }
}
