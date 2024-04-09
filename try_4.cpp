
#include <iostream>

int main(){
    int var; //doesnt have the context of a variable
    auto var1 = 10.2; //initialization of a variable
    auto var2 = 20.3;
    auto sum = var1 + var2;

    std::cout << sum << '\n';
    return 0;
}
