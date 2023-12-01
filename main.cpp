#include <iostream>
#include "minimum_sum_squared_count.h"
#include "count_empty_cells.h"

using namespace std;

void test_1() {
    std::cout << minimum_sum_squared_count("aabaaacc"s, 3) << std::endl;

    std::wstring text = L"universidad de ingenieria y tecnologia";
    std::cout << minimum_sum_squared_count(text, 4) << endl;

    auto text2 = L"Universidad de Ingenieria y tecnologia"s;
    std::cout << minimum_sum_squared_count(text2, 8) << endl;

    auto text3 = ""s;
    std::cout << minimum_sum_squared_count(text3, 20) << endl;
}

void test_21() {
    count_empty_cells<20> counter;
    counter.add(0,0);
    counter.add(19,19);
    std::cout << counter() << std::endl;
}

void test_22() {
    count_empty_cells<15> counter;
    counter.add(0,0);
    counter.add(1,0);
    counter.add(0,3);
    counter.add(4,3);
    counter.add(19,19);
    std::cout << counter() << std::endl;
}

void test_23() {
    count_empty_cells<15> counter{
            {0, 0},
            {1, 0},
            {0, 3},
            {4, 3},
            {11, 2},
            {5, 11},
            {19, 19},
    };
    std::cout << counter() << std::endl;
}

void test_24() {
    std::vector<pair<size_t, size_t>> v = {
     {0, 0},
     {1, 0},
     {0, 3},
     {4, 3},
     {11, 2},
     {5, 11},
     {19, 19},
     };
     count_empty_cells<45, std::vector> counter(v);
     std::cout << counter() << std::endl;
}

int main() {
//    test_1();
    return 0;
}
