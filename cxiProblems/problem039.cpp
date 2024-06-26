// CXI Problems :: 39 :: C++ Program to Print Sequence 2
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    const char EMPTY = ' ';
    const char BRICK = '*';
    const int SIZE = 5;
    for(int i = 1; i <= SIZE; ++i){
        for(int j = 1; j <= SIZE; ++j){
            if(j > SIZE - i){
                std::cout << BRICK;
            }
            else{
                std::cout << EMPTY;
            }
        }
        std::cout << '\n';
    }


    std::cout << "\n";
    system("pause");
    return 0;
}
