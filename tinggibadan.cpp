#include <iostream>

using namespace std;

int main() 
{
    float bb;
    int tb;
    
    cout << "Silahkan masukkan tinggi badan(cm) : "; cin >>tb;
    cout << "Silahkan masukkan berat badan(kg) : " ;
    cin >> bb;
    
    if (bb<tb/2.5)
       cout << "Underweight" << endl;
    else if (tb/2.5 <= bb <= tb/2.3)
       cout << "Normal" << endl;
    else if (tb/2.3 < bb)
                 cout << "" << endl;

                 
                 
                 return 0;
    }
