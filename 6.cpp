#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;

int main(){
    int a, b;
    int licznik = 0;
    do{
        cout << "Wpisz b: ";
        cin >> b;
        licznik++;
    }while((b < 10 || b > 20) && licznik != 3);
    licznik = 0;
    do{
        cout << "Wpisz a: ";
        cin >> a;
        licznik++;
    }while(a>b && licznik != 3);
    if(b < 10 || b > 20){
        b = 15;
    }
    if(a>b){
        a = 10;
    }

    cout << a << "   " << b << endl;

    char array [40] = {};
    srand(time(0));
    int r;
    for(int i =0; i< 40; i++){
        array[i] = rand()%((b-a+98)-98)+97;
    }
    for(int i =0; i< 40; i++){
        cout << array[i];
    }

}