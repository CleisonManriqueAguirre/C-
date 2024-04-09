
#include <iostream>
#include <array>

//print int array
void print_int_array(std::array<int, 5> my_array){
    for(auto value: my_array){
        std::cout << value << '\n';
    }
    std::cout << '\n';
}

//print float array
void print_float_array(std::array<float, 5> my_array){
    for(auto value: my_array){
        std::cout << value << '\n';
    }
    std::cout << '\n';
}

int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    print_int_array(my_array);

    std::array<float, 5> my_array2 = {6.5f,7.3f,8.1f,9.2f,10.2f};
    print_float_array(my_array2);
    return 0;
}
