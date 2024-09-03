#include <iostream>

bool pertence_fibonacci(int num) {
    int a = 0, b = 1;
    while (b < num) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return b == num;
}

int main() {
    int numero;
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (pertence_fibonacci(numero)) {
        std::cout << numero << " pertence a sequencia de Fibonacci." << std::endl;
    } else {
        std::cout << numero << " nao pertence a sequencia de Fibonacci." << std::endl;
    }
    return 0;
}
