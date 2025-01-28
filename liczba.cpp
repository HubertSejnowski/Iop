 #include <iostream>

using namespace std;

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
    cin >> liczba;
    cout << liczba << (czy_doskonala(liczba) ? " jest doskonała" : " nie jest doskonała") << endl;
    return 0;
}