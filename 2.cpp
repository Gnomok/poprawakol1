#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;

int main(){
    // double waga, wzrost, bmi;
    // do{
    //     cout << "waga: \n";
    //     cin >> waga;
    // }while(waga<0);
    // do{
    //     cout << "wzrost: \n";
    //     cin >> wzrost;
    // }while(wzrost<0);
    // bmi = waga/pow(wzrost, 2);
    // cout << bmi;
    srand(time(0));
    int a = 0;
    cout << "Wpisz a: ";
    cin >> a;
    int array [5][6] = {};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            array[i][j] = rand() % a+1;
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    int x1, y1, x2, y2;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    int* prikol1 = &array[y1][x1];
    int* prikol2 =  &array[y2][x2];
    cout << prikol1 << endl;
    cout << prikol2 << endl;
    cout << prikol2 - prikol1;
}