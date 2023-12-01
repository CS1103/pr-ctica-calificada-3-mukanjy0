//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC3_TEO3_V2023_2_COUNT_EMPTY_CELLS_H
#define PROG3_PC3_TEO3_V2023_2_COUNT_EMPTY_CELLS_H

#include <unordered_map>
using namespace std;

template<size_t n, template<typename...> typename Container=initializer_list>
class count_empty_cells {
    unordered_map<size_t, bool> rows;
    unordered_map<size_t, bool> cols;
public:
    count_empty_cells() = default;
    explicit count_empty_cells(const Container<pair<size_t,size_t>>& c) {
        for (const auto& [row, col] : c) {
            rows[row] = true;
            cols[col] = true;
        }
    }
    void add(size_t row, size_t col) {
        rows[row] = true;
        cols[col] = true;
    }
    size_t operator() () {
        return (n - ssize(rows)) * (n - ssize(cols));
    }
};

#endif //PROG3_PC3_TEO3_V2023_2_COUNT_EMPTY_CELLS_H
