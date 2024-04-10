
#include <iostream>
#include <vector>

void print(std::vector<int> array){
    for(auto value: array){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main(){
    std::vector<int> my_vect={1,2,3,4,5};
    print(my_vect);
    my_vect.push_back(6);
    print(my_vect);
    my_vect.pop_back();
    print(my_vect);
    return 0;
}
