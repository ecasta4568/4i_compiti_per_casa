#include <iostream>

using namespace std;

int main()
{
    float m;
    float q;
    int xp, yp, y;
    cout << "inserire m";
    cin >> m;
    cout << "inserire q";
    cin >> q;
    cout << "inserire coordinate punto";
    cin >> xp;
    cin >> yp;
    y=m*xp + q;
    if (y==yp){
        cout << "il punto appartiene alla retta" << endl;
    }
    else cout << "il punto non appartiene alla retta";
    return 0;
}
