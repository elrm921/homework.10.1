#include <iostream>

int main(int argc, char** argv) {
    std::string name;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            name += argv[i];
        }
    }
    else {
        std::cout << "Введите имя: ";
        std::cin >> name;
    }
    std::cout << "Здравствуйте, " << name << "!";
    std::cout << std::endl;
}