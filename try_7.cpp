 
#include <iostream>
#include <array>

int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    for(int value: my_array){
        std::cout << "simiilar " << value << '\n';
    }
    for(int i = 0; i < 5; i++){
        std::cout << my_array[i] << '\n';
    }
    for(int i = 0; i < 10; i++){
        std::cout << "Iteration " << i << '\n';
    }
    return 0;
}
