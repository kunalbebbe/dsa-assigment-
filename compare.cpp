#include <iostream>
#include <array>

 
int main()
{
    std::array<int, 5> first {1, 2, 3, 4, 5};
    std::array<int, 5> second {1, 2, 3, 4, 5};
 
    if (first == second) {
        std::cout << "Both arrays are equal";
    } else {
        std::cout << "Both arrays are not equal";
    }
 
    return 0;
}