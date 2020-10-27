#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo a;
    a.insertar_final("H");
    a.insertar_final("A");
    a.insertar_final("K");
    a.insertar_final("E");
    a.insertar_final("I");
    a.insertar_final("A");
    a.insertar_final("M");
    a.insertar_final("F");
    cout<<endl;
    for(size_t i =0; i<a.size(); i++){
        cout << a[i]<<" ";
    }
    a.insertar_inicio("P");
    a.insertar_inicio("Z");
    cout<<endl;
    cout<<endl;
    for(size_t i =0; i<a.size(); i++){
        cout << a[i]<<" ";
    }


    return 0;
}