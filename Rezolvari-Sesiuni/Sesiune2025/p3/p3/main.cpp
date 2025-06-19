#include "Function.h"

int main()
{
    std::vector<Function> functions = {
        Function("5"),
        Function("3 + 2 - 6 +    15"),
        Function("a + 2"),
        Function("3 * 2"),
        Function("3 +"),
    };
    /*for (auto function : functions)
    {
        try {
            function.validate();
            std::cout << function.eval() << std::endl;
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    try {
        std::cout << "4th value of f1 is " << functions[0].value(4) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << "4th value of f2 is " << functions[1].value(4) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    auto count = 0;
    auto func = ... {
        if (val > 5) count++; 
    };
    functions[1].iterate_values(func);
    std::cout << "Found " << count << " values over 5";*/
}
