#include <iostream>
#include <cstdint>
#include"func.h"

#include <list>
#include <vector>
#include <string>
#include <tuple>

int main(int, char**){
    std::cout << "Hello, from Lesson4!\n";
    std::int8_t a = -1;
    std::vector<double> vect;
    int a1 = 1;
    std::cout<<is_container< int>::value<<std::endl;
    print_ip(vect);
    //print_ip(a1)
}
