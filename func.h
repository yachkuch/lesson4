#pragma once 

#include <vector>
#include <type_traits>




template<typename T>
struct is_container  {
    private:
        template<typename C>
        static char test(typename C::iterator*);
        
         template<typename C>
         static int test(...);
        
    public:
        enum { value = sizeof(test<T>(0)) == sizeof(char) };
};



// template <typename T>
// void print_ip(T a){
//     std::cout<<a<<std::endl;
// }

template <typename T> 
typename  std::enable_if<is_container<T>::value>::type 
void print_ip(T a){
    std::cout<<"Cont"<<std::endl;
}

// template <typename T>
// decltype(begin(std::declval<T>()), end(std::declval<T>()), void())
// print(T container)
// {
//     std::cout << "Values:{ ";
//     for(auto value : container)
//         std::cout << value << " ";
//     std::cout << "}\n";
// }
 
// template <typename T>
// decltype(std::cout << std::declval<T>(), void())
// print(T value)
// {
//     std::cout << "Value: " << value << "\n";
// }