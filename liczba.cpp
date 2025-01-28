#include <iostream>

bool czy_doskonala(int liczba) {
    if (liczba <= 1) return false;
    int suma = 0;
    for (int i = 1; i < liczba; ++i) {
        if (liczba % i == 0) {
            suma += i;
        }
    }
    return suma == liczba;
}

int main() {
    int liczba;
    std::cin >> liczba;
    if (liczba <= 0) {
        std::cout << "Liczba musi być dodatnią liczbą naturalną!" << std::endl;
        return 1;
    }
    std::cout << liczba << (czy_doskonala(liczba) ? " jest doskonała" : " nie jest doskonała") << std::endl;
    return 0;
}
