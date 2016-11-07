#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "mani in alto questo e' un esercizio inserite una parola " << endl;
    string parola;
    cin >> parola;
    for (int i=0; i<3; i++) {
        cout << "la parola e' " << parola << endl;
    }
    return 0;
}
