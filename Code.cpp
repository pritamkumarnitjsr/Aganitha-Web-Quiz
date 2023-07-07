#include <iostream>


int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "amazon ";
        } else if (i % 3 == 0) {
            std::cout << "google ";
        } else if (i % 5 == 0) {
            std::cout << "facebook ";
        } else {
            std::cout << i << " ";
        }
    }
    
    return 0;
}
