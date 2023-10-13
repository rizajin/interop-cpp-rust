#include <iostream>

extern "C"
{
    void hello();
}

int main()
{
    std::cout << "C++ calling for Rust ->" << std::endl;
    hello();

    return 0;
}