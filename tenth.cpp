
#include <iostream>
#include <array>

void print_array(std::array<int, 5> my_array){
    for(int value: my_array){
        std::cout << value << '\n';
    }
    std::cout << '\n';
}

// int main(){
//     std::array<int, 5> my_array = {1,2,3,4,5};
//    for(int value: my_array){
//         std::cout << value << '\n';
//     }
//    std::cout << '\n';

//     std::array<int, 5> my_array2 = {6,7,8,9,10};
//     for(int value: my_array2){
//         std::cout << value << '\n';
//     }
// }

//instead of repeating the code, we can create a function

int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    print_array(my_array);
    std::array<int, 5> my_array2 = {6,7,8,9,10};
    print_array(my_array2);
    return 0;
}
