#include <iostream>
#include "loja.hpp"

int main() {
    int num, rolls;
    std::cin >> num;

    while (num > 0) {
        std::cin >> rolls;
        std::vector<int> fabrics(rolls);
        for (int i = 0; i < rolls; ++i) {
            std::cin >> fabrics[i];
        }
        std::cout << orderFabrics(fabrics) << std::endl;

        num--;
    }

    return(0);
}
