/*
* @author yachkuch
*/
#include <iostream>
#include <cstdint>
#include"func.h"

#include <list>
#include <vector>
#include <string>
#include <tuple>
/**
 * @brief Entry point
 *
 * Execution of the program
 * starts here.
 *
 * @param argc Number of arguments
 * @param argv List of arguments
 *
 * @return Program exit status
 */
int main(int, char**){
    std::cout << "Hello, from Lesson4!\n";
    std::int8_t a = -1;
    std::int16_t a2 = 0;
    std::int32_t a3 = 2130706433;
    std::vector<double> vect = {100,200,300,400};
    std::list <short> list = {400,300,200,100};
    auto tuple = std::make_tuple(123,456,789,0);
    print_ip(a);
    print_ip(a2);
    print_ip(a3);
    print_ip(std::string{"Hello world \n"});
    print_ip(std::int64_t {8875824491850138409});
    print_ip(vect);
    print_ip(list);
    print_ip(tuple);
}
