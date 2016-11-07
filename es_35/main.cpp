#include <iostream>

using namespace std;


void sommavalori_e_media(int valore[1000], int n);

int main()
{
    cout << "inserire il numero dei valori da inserire" << endl;
    int n;
    int valore[1000];
    for (int i=0;i<n;i++) {
        cout << "inserire un valore";
        cin >> valore[i];
    }

    return 0;

}

void sommavalori(int valore[1000], int n){
    int x =0;
    for (int i=0;i<n;i++) {
        x=x+valore[i];
    }
    cout << "la somma è" << x << endl;
    x = x/n;
    cout << "la media è" << x << endl;
}
