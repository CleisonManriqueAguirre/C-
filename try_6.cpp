
#include <iostream> 
#include <array> //template class that encapsulates fixed size arrays

int main(){
    std::array<int,3>my_array = {12,2,3};
    std::cout << my_array.front() << '\n';
    std::cout << my_array[1] << '\n';
    std::cout << my_array.back() << '\n';
    std::cout << my_array.size() << '\n';
    return 0;
}
