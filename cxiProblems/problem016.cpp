// CXI Problems :: 16 :: C++ Program to Check Whether a Number is Even or Odd.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <limits.h>

int main(){
    std::cout << "Hello, if you input integer number I will tell you it's even or odd!\n";
    std::cout << "But integer must be in range of [" << INT_MIN << " : " << INT_MAX << "].\n";
    
    int user_num;
    do{
        std::cout << ">You're number is ";
        std::cin >> user_num;

        if(std::cin.fail()){
            std::cout << "[ERROR]: Only integer numbers are allowed . . .\n";  
            std::cout << "\t Or your integer is out of range: [" << INT_MIN << " : " << INT_MAX << "])!\n\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        break;
    } while(true);

    if(user_num % 2 == 0){
        std::cout << ">>> '" << user_num << "' is Even number!\n";
    }
    else{
        std::cout << ">>> '" << user_num << "' is Odd number!\n";
    }


    // system("pause");
    return 0;
}
