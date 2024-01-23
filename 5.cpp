#include <iostream>
#include <cmath>
#include <ctime> 
using namespace std;

int main() {
    cout << "Wpisz n" << '\n';
    int n;
    do {
        cin >> n;
    } while (n > 15);

    int array[20] = {};

    for (int i = 0; i < 20; i++) {
        array[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int licznik = 0;
        cout << "Wpisz ta sama liczbe" << '\n';
        do {
            cin >> array[i];
            licznik++;
        } while ((array[i] < 0 || array[i] > 100 || array[i] % 2 != 0) && licznik != 3);
    }

    cout << "Wprowadzone liczby:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << '\n';

    srand(time(0));
    int r;

    for (int i = 0; i < 20; i++) {
        if (array[i] == 0) {
            do {
                r = rand() % 100 + 10;
                array[i] = r;
            } while (array[i] % 2 != 0);
        }
    }

    cout << "Liczby po uzupełnieniu:\n";
    for (int i = 0; i < 20; i++) {
        cout << array[i] << ", ";
    }

    int* startPtr = array;
    int* endPtr = array + 20 - 1;
    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }

    cout << '\n' << "Liczby po odwróceniu:\n";
    for (int i = 0; i < 20; i++) {
        cout << array[i] << ", ";
    }



}