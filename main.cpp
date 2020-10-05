#include <iostream>

using namespace std;

int main() {
    int Base;
    int Altura;
    int Res;
    
    cout<<"Ingrese La base del triangulo: "<<endl;
    cin>>Base;
    cout<<"Ingrese el area del triangulo: "<<endl;
    cin>>Altura;
    Res=Base*Altura/2;
    cout<<"El resultado es: "<<Res<<endl;

    return 0;
}
