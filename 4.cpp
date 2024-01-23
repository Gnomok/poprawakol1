#include <iostream>
#include <cmath>
#include <time.h> 
using namespace std;

int main(){
    int x1 = 1;
    int x2 = 1;
    int y1 = 1;
    int y2 =1;
    cout << "sasi \n";
    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
    double d = sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
    cout << d;


    char array [x1][y1] = {};
    
    
    char element;
    int r;
    srand (time(0));
    for(int i = 0; i < x1; i++){   
        for(int j = 0; j < y1; j++){
            r = rand() % 6;
        switch (r)
        {
        case 0:
        element = '*';
        break;
        case 1:
        element = '&';
        break;
        case 2:
        element = '$';
        break;
        case 3:
        element = '#';
        break;
        case 4:
        element = '@';
        break;
        case 5:
        element = '!';
        break;
    
    }
            array[x1][y1] = element;
        }
        cout << "\n";
    }
    for(int i = 0; i < x1; i++){
        for(int j = 0; j < y1; j++){
           cout << array[x1][y1];
         
        }
        cout << "\n";
    }

    cout << "xj" << '\n';
    for(int i = 0; i < x1; i+=2){
        for(int j = 0; j < y1; j++){
           char *sasi = &array[x1][y1];
           cout << *sasi;
         
        }
        cout << "\n";
    }
    
}