#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;

int main(){
    cout<< "a) Wczytywanie liter \n";
    cout<< "b) Wczytywanie kodow znakow \n";
    cout<< "c) Losowanie kodow \n";
    char wybor;
    cin >> wybor;
    char tablica [9];
    char litera;
    int kod;
    srand(time(0));
    if (wybor == 'a') {
        for (int i = 0; i < 10; ++i) {
            cout << "Podaj letere: " ;
            while (true) {
                cin >> litera;
                if (litera >= 'A' && litera <= 'Z'){
                    tablica[i] = litera;
                    break;
                } else {
                    cout << "NIE TO.\n";
                }
            }
        }
        cout << tablica;
    }
    else if (wybor == 'b'){
        for(int i = 0; i < 10; ++i){
            cout << "Podaj kod: ";
            while (true) {
                cin >> kod;
                if (kod >= 65 && kod <= 90){
                    tablica[i] = kod;
                    break;
                } else {
                    cout << "NIE TO.\n";
                }
            }

        }
        cout << tablica;
    }
    else{
        for(int i = 0; i < 10; ++i){
            tablica[i] = rand() % (90-65 +1) + 65;
        }

        cout << tablica;
    }
    cout << endl;
    char *min_ptr = tablica;
    for(int i = 1; i < 10; ++i){
        if(*min_ptr > tablica[i]){
            min_ptr = &tablica[i];
        }
    }
    cout << "Najmniejsza litera: " << *min_ptr << " na pozycji: " << (min_ptr - tablica) << endl;



    char *max_ptr = tablica;
    for(int i = 1; i < 10; ++i){
        if(*max_ptr < tablica[i]){
            max_ptr = &tablica[i];
        }
    }
    cout << "Najwieksza litera: " << *max_ptr << " na pozycji: " << (max_ptr - tablica) << endl;

}