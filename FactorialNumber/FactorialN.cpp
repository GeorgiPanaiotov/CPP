#include <iostream>

int main() {
    int x;
    
    std::cin >> x;

    int result = 1;


    for(int i = 1; i <= x; i++){
        result *= i;
    }

    std::cout << result;
}


