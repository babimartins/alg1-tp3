#include "loja.hpp"
#include <bits/stdc++.h>

int orderFabrics(std::vector<int> fabrics) {
    int result = 0;
    std::reverse(fabrics.begin(), fabrics.end());

    std::vector<int> lis(fabrics.size(), 1);
    std::vector<int> lds(fabrics.size(), 1);

    for (int i = 1; i < fabrics.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (fabrics[j] < fabrics[i] && lis[j] + 1 > lis[i]) {
                lis[i] = lis[j] + 1;
            } else if (fabrics[j] > fabrics[i] && lds[j] + 1 > lds[i]) {
                lds[i] = lds[j] + 1;
            }
        }
    }

    for (int i = 0; i < fabrics.size(); ++i) {
        result = std::max(result, lis[i] + lds[i] - 1);
    }

    return result;
}
