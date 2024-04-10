
#include <array>
#include <iostream>

//we can usr rbegin and rend to iterate through the array in reverse
int main(){
    std::array<int, 5> my_array = {1,2,3,4,5};
    //without r is not reverse
    //skip values
    for(auto itr = my_array.rbegin()+1; itr < my_array.rend();itr+=1){
        std::cout << *itr << ' ';
    }
    std::cout << '\n';
    return 0;
}
