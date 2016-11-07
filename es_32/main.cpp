#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    unsigned int lato, area, perimetro;
    cout << "inserire il lato: ";
    cin >> lato;
    area = lato*lato;
    perimetro = lato * 4;
    cout << "l'area del quadrato e': " << area << endl << "il perimetro del quadrato e': " << perimetro << endl;
    return 0;
}
