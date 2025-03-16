#include <iostream>
#include "Math.h"

int main() {
    std::cout << "Add(5, 3): " << Math::Add(5, 3) << std::endl;
    std::cout << "Add(2, 4, 6): " << Math::Add(2, 4, 6) << std::endl;
    std::cout << "Add(3.5, 2.5): " << Math::Add(3.5, 2.5) << std::endl;
    std::cout << "Add(1.1, 2.2, 3.3): " << Math::Add(1.1, 2.2, 3.3) << std::endl;

    std::cout << "Mul(4, 5): " << Math::Mul(4, 5) << std::endl;
    std::cout << "Mul(2, 3, 4): " << Math::Mul(2, 3, 4) << std::endl;
    std::cout << "Mul(3.2, 2.5): " << Math::Mul(3.2, 2.5) << std::endl;
    std::cout << "Mul(1.5, 2.0, 3.0): " << Math::Mul(1.5, 2.0, 3.0) << std::endl;

    std::cout << "Add(5, 1, 2, 3, 4, 5): " << Math::Add(5, 1, 2, 3, 4, 5) << std::endl;

    const char* result = Math::Add("Hello", " World!");
    std::cout << "Add(\"Hello\", \" World!\"): " << result << std::endl;

    const char* result2 = Math::Add(nullptr, "Test");
    if (result2 == nullptr) std::cout << "Add(nullptr, \"Test\") returned nullptr" << std::endl;

    delete[] result;

    return 0;
}
