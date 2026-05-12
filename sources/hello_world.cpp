#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Введите имя: "; //! Вот тут вводим имя
    std::getline(std::cin, name);

    std::cout << "Hello world from " << name << std::endl; //? А это что такое

    return 0;
}