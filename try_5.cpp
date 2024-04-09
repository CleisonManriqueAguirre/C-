#include <iostream>

int main(){
    float v_1 = 80;
    int v_2 = 80;
    if (v_2 < v_1) {
        std::cout << "youre getting weight\n";
    } 
    else if(v_1 < v_2){
        std::cout << "skinny \n";
    }
    else{
        std::cout << "good\n";
    }

    return 0;
}
