#include "MyFunctions.h"
#include <iostream>

int main() {
	int x = 5;
    sayHello();
    std::cout << "2 + 3 = " << addNumbers(2, 3) << std::endl;
	std::cout << "4 * 5 = " << multiplyNumbers(4, 5) << std::endl;
    x = 2;
    return 0;
}