
#include <iostream>
#include <vector>

void print(std::vector<int> vector){
    for(auto value: vector){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main(){
    std::vector<int> my_vect;
    my_vect.reserve(10);//reseve 10 elements in the vector
    for(int i = 0; i < 10; i+=1){
        std::cout << "Size: " << my_vect.size() << '\n';
        std::cout << "Capacity: " << my_vect.capacity() << '\n';
        my_vect.push_back(i);
    }
    return 0;
}
