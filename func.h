#pragma once

#include <tuple>
#include <type_traits>

template <typename T> struct is_container {
private:
  template <typename C> static char test(typename C::iterator *);

  template <typename C> static int test(...);

public:
  enum { value = sizeof(test<T>(0)) == sizeof(char) };
};

/*
* @brief Фукнкция печати
*/
template <typename T>
decltype(std::cout << std::declval<T>(), void()) print_ip(T a) {
  uint8_t bytes[sizeof(T)];
  memcpy(bytes, &a, sizeof(T));
  for (int i = sizeof(T) - 1; i >= 0; i--) {
    std::cout << (int)bytes[i];
    if (i != 0) {
      std::cout << ".";
    }
  }
  std::cout << std::endl;
}

template <typename T>
decltype(std::declval<T>().begin(), void()) print_ip(const T &a) {
  for (const auto &val : a) {
    std::cout << val << ".";
  }
  std::cout << std::endl;
}

template <typename ...Args>
void print_ip(const std::tuple<Args ...> &a) {
  std::apply([](const auto &... args){
    ((std::cout<<args<<"."),...);
  },a);
  std::cout << std::endl;
}

void print_ip(const std::string &str){
    for(const auto &el : str){
        std::cout<<el;
    }
    std::cout<<std::endl;
}


