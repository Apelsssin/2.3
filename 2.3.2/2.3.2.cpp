#include <iostream>
#include <string>
class Counter {
private:
    int i;
public: 
    Counter() {
        i = 1;
    }
    Counter(int i){
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
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string que;
    std::getline(std::cin, que);
    int j = 1;
    Counter counter;
    if (que == "да"){
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> j;
        Counter counter1(j);
        counter = counter1;
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