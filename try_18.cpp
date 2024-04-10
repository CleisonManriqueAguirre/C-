
#include <algorithm>
#include <iostream>
#include <array>

void print(auto array){
    for(auto value: array){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main(){
    std::array<int ,5> my_array = {53,21,2,85,5};
    print(my_array);

    std::sort(my_array.begin(), my_array.end());

    print(my_array);
    return 0;
}

