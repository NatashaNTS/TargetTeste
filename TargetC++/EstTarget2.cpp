#include <iostream>
#include <algorithm>
#include <string>

bool isA(char c) {
    return c == 'a' || c == 'A';
}

int countAInString(const std::string& s) {
    return std::count_if(s.begin(), s.end(), isA);
}

int main() {
    std::string texto;
    std::cout << "Informe uma string: ";
    std::getline(std::cin, texto);

    int count = countAInString(texto);
    if (count > 0) {
        std::cout << "A letra 'a' aparece " << count << " vezes na string." << std::endl;
    } else {
        std::cout << "A letra 'a' não aparece na string." << std::endl;
    }

    return 0;
}

