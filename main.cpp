#include <iostream>
using namespace std;

int main() {
    char wybor;
    int x, y;

    do {
        cout << "Podaj wartość pierwszej liczby: ";
        cin >> x;

        cout << "Podaj wartość drugiej liczby: ";
        cin >> y;

        cout << "Wynik mnozenia x * y = " << x * y << endl;

        cout << "Czy chcesz kontynuowac? (Wcisnij 'e' aby wyjsc): ";
        cin >> wybor;
    } while (wybor != 'e');

    return 0;
}
