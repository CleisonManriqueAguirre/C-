
#include <iostream>
#include <array>

void print_array(auto array){
    for(auto value: array){
        std::cout << value << '\n';
    }
    std::cout << '\n';
}

template<> 
void print_array(std::array<int,3> array){  
    std::cout << "Printing from our specialization!\n";
}

int main(){
    std::array<int, 3> my_array = {1,4,5};
    print_array(my_array);

    std::array<float, 3> my_array2 = {6.5f,7.1f,10.2f};
    print_array(my_array2);
    return 0;
}
