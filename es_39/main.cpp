#include <iostream>

using namespace std;

int main()
{
    int eta[3];
    int x=0,k;
    cout << "inserire l'eta di tre persone" << endl;
    for (int i=0; i<3 ; i++) {
        cin >> eta[i];
    }
    for (int i=0;i<3; i++){
        for (int k=i+1;k<3; k++){
            if (eta[i]>eta[k]) {
                x=eta[i];
                eta[i]=eta[k];
                eta[k]=x
            }
        }
    }

    return 0;
}
