#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int base1, base2, altura1, altura2;
    float area1, area2;

    cout << "Base 1: ";
    cin >> base1;
    cout << "Altura 1: ";
    cin >> altura1;
    cout << "Base 2: ";
    cin >> base2;
    cout << "Altura 2: ";
    cin >> altura2;

    area1 = base1 * altura1;
    area2 = base2 * altura2;

    cout << fixed << setprecision(2) << endl;
    cout << "Area 1: " << area1 << endl;
    cout << "Area 2: " << area2 << endl;

    if(area1 > area2){
        cout << "Area 1 > Area 2";
    } else {
        cout << "Area 2 > Area 1";
    }
    
    return 0;
}