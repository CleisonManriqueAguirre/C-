#include <iostream>
#include <array>

void sum_array(std::array<int, 5> my_array){
    int sum = 0;
    for(int value: my_array){
        sum += value;
    }
    std::cout << sum << '\n';
}

int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    sum_array(my_array);
    std::array<int, 5> my_array2 = {6,7,8,9,10};
    sum_array(my_array2);
    return 0;
}   
