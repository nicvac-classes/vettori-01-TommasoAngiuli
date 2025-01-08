#include <iostream>
using namespace std;
int main() 
{
    string v[5], w[5];
    int x[10];
    int y[10];
    int i;
    v[0] = "Ed";
    v[1] = "Mark";
    v[2] = "Kurt";
    v[3] = "Bono";
    v[4] = "Brian";
    for (i = 0; i <= 4; i=i+1) 
    {
        cout << "inserisci il nome di un cantante" << endl;
        cin >> w[i];
    }
    for (i = 0; i <= 9; i=i+1) 
    {
        x[i] = i + 1;
        y[i] = (i + 1) * 2;
    }
    cout << v[0] << "," << v[1] << "," << v[2] << endl;
    for (i = 0; i <= 4; i=i+1) 
    {
        cout << "Il nome del " << i + 1 << "° cantante del vettore V  è: " << v[i] << endl;
        cout << "Il nome del " << i + 1 << "° cantante del vettore W è: " << w[i] << endl;
    }
    for (i = 0; i <= 9; i=i+1) 
    {
        cout << "Il " << i + 1 << "° numero del vettore X è: " << x[i] << endl;
        cout << "Il " << i + 1 << "° numero del vettore Y è: " << y[i] << endl;
    }
    cout << "i valori con indice pari sono: " << endl;
    for (i = 0; i <= 9; i=i+2) 
    {
        cout << x[i] << endl;
    }
    cout << "i valori con indice dispari sono: " << endl;
    for (i = 1; i <= 9; i=i+2) 
    {
        cout << x[i] << endl;
    }
    cout << "gli elementi con valore pari del vettore X sono: " << endl;
    for (i = 0; i <= 9; i=i+1) 
    {
        if (x[i] % 2 == 0) 
        {
            cout << x[i] << endl;
        }
    }
}