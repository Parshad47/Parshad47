#include <iostream>
#include <cmath>

int convert_other_base_to_decimal(int value, int base) {
while (value > 0) {
	int power = 0;
        double Remainder = value % base;
        value /= base;
        value += Remainder * std::pow(10, power);
        ++power;
    }
    return value;
    
}

int convert_decimal_to_other_base(int value, int base) {

    while (value > 0) {
	int power = 0;
        double Remainder = value % 10;
        value /= 10;
        value += Remainder * std::pow(base, power);
        ++power;
    }
    return value;
}

int math_in_other_base(int other_base_a, int other_base_b, int base, char math_operator) {

     
    std::cin >> other_base_a >> other_base_b;
    if (math_operator == '+') {
        return other_base_a + other_base_b;
    }
    else if (math_operator == '-') {
        return other_base_a - other_base_b;
    }
    else if (math_operator == '*') {
        return other_base_a * other_base_b;
    }
    else if (math_operator == '/') {
        return other_base_a/other_base_b;
    }
    else {
        return other_base_a%other_base_b;
  }
}

int main() {
    std::cin >> int num_1 >> int num_2 >> int base >> char operation;
    if (base != 10) {
        num_1 = convert_other_base_to_decimal(num_1,10);
        num_2 = convert_other_base_to_decimal(num_1,10);
    }
    return math_in_other_base(num_1, num_2, base, operation);
}
git status
git add project.cpp
git commit -m "Project 1 added"
git push
