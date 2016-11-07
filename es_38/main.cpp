#include <iostream>

using namespace std;

int main()
{
  float prezzo_vendita, prezzo_iniziale, sconto;
  cout << "inserire il prezzo del prodotto" << endl;
  cin >> prezzo_iniziale;
  cout << "inserire lo sconto" << endl;
  cin >> sconto;
  prezzo_vendita = prezzo_iniziale - (prezzo_iniziale*sconto/100);
  cout << "il prezzo fuinale e' : " << prezzo_vendita;
}
