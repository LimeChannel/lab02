#include <iostream>
#include <string>

int
main()
{
  std::string name;

<<<<<<< HEAD
  std::cout << "Введите имя: ";
  std::getline(std::cin, name);

  std::cout << "Hello world from " << name << std::endl;
=======
    std::cout << "Введите имя: "; //! Вот тут вводим имя
    std::getline(std::cin, name);

    std::cout << "Hello world from " << name << std::endl; //? А это что такое
>>>>>>> 1b1fbda (added comments to hello_world)

  return 0;
}