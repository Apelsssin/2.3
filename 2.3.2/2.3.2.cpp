#include <iostream>
#include <string>
class Counter {
public: 
    int i;
    Counter() {
        i = 1;
    }
    void change(int i){
        this->i = i;
    }
    int inc() {
        ++i;
        return i;
    }
    int dec() {
        --i;
        return i;
    }
    int get() {
        return i;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    bool work = true;
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string que;
    std::getline(std::cin, que);
    if (que == "да"){
        int j;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> j;
        counter.change(j);
    }
    while (work) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::string command;
        std::cin >> command;
        if (command == "-")
            std::cout << counter.dec() << std::endl;
        if (command == "+")
            std::cout << counter.inc() << std::endl;
        if (command == "=")
            std::cout << counter.get() << std::endl;
        if (command == "x")
            work = false;
    }
    std::cout << "До свидания!";
}