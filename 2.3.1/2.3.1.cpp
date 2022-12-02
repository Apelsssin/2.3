#include <iostream>
class Calculator {
private:
    double num1;
    double num2;
public:
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num2 - num1;
    }
    double subtract_2_1() {
        return num1 - num2;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num) {
        if (num != 0) {
            num1 = num;
            return true;
        }
        else return false;
    }
    bool set_num2(double num) {
        if (num != 0) {
            num2 = num;
            return true;
        }
        else return false;
    }
};
int main()
{
    setlocale(LC_ALL, "Rus");
    int num1;
    int num2;
    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;
        Calculator calc;
        bool i = calc.set_num1(num1);
        bool  j = calc.set_num2(num2);
        if (i && j) {
            std::cout << "num1 + num2 = " << calc.add() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_2_1() << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_1_2() << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        }
        else
            std::cout << "Неверный ввод!" << std::endl;
    }
}