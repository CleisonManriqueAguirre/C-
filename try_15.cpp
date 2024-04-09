
#include <iostream>
#include <array>

//template <typename T> //template declaration
void print_array(auto array){
    for(auto value: array){
        std::cout << value << '\n';
    }
    std::cout << '\n';
}

int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    print_array(my_array);

    std::array<float, 5> my_array2 = {6.5f,7.3f,8.1f,9.2f,10.2f};
    print_array(my_array2);
    return 0;
}
