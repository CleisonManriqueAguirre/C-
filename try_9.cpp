#include <iostream>
//do while loop is usufull when you want to execute the loop at least once
int main(){
    int work_items = 0;
    do{
        std::cout << work_items << '\n';
        work_items++;
    } 
    while(work_items < 10);
    return 0;
}
