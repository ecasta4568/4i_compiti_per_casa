#include <iostream>
#include <cmath>

using namespace std;

void vertice(float a,float b,float c);
void fuoco(float a,float b,float c);
void intersezioni_xy(float a,float b,float c);
int main()
{
    cout << "Funsioni" << endl;
    float a,b,c;
    cout << "inserire a: ";
    cin >> a;
    cout << "inserire b: ";
    cin >> b;
    cout << "inserire c: ";
    cin >> c;
    vertice(a,b,c);
    fuoco(a,b,c);
    intersezioni_xy(a,b,c);
    return 0;
}
void vertice(float a,float b,float c){
    float x, y;
    x=-b/(2*a);
    y=a*x*x+b*x+c;
    cout << "Vertice = ( " << x << ", " << y << ")" << endl;
}
void fuoco(float a,float b,float c) {
    float x, y;
    x = -b/(2*a);
    y = (1-b*b+4*a*c)/(4*a);
    cout << "fuoco = ( " << x << ", " << y << ")" << endl;
}
void intersezioni_xy(float a,float b,float c){
    float x1,x2;
    cout << "intersezione con l'asse y = ( 0, " << c << ")" << endl;
    if (b*b-4*a*c >= 0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout << "intersezioni con l'asse x: I1(" << x1 << ", 0)\tI2(" << x2 << ", 0)" << endl;
    }

}



















