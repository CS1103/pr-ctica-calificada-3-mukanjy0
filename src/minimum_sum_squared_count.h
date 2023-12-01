//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC3_TEO3_V2023_2_MINIMUM_SUM_SQUARED_COUNT_H
#define PROG3_PC3_TEO3_V2023_2_MINIMUM_SUM_SQUARED_COUNT_H

#include <unordered_map>
#include <queue>
using namespace std;

template<typename T>
int minimum_sum_squared_count (const T& text, int n) {
    unordered_map<char, int> um;
    for (const auto& chr : text) {
        char c = tolower(chr);
        if (um.contains(c)) {
            um[c] += 1;
        }
        else um[c] = 1;
    }

    priority_queue<int> pq;
    for (const auto& [c, cnt] : um) {
        pq.push(cnt);
    }

    while (n-- && !pq.empty()) {
        int maxi = pq.top();
        if (maxi == 0) break;
        pq.pop();
        pq.push(maxi - 1);
    }

    int aux, result = 0;
    while (!pq.empty()) {
        aux = pq.top();
        result += (aux) * (aux);
        pq.pop();
    }

    return result;
}

#endif //PROG3_PC3_TEO3_V2023_2_MINIMUM_SUM_SQUARED_COUNT_H
