#include <iostream>
#include <string>
#include "Menu.h"
#include "Mejora.h"

using namespace std;

int main()
{
    cout<<"�Cual es tu nombre, apellido y que contrase�a quieres?: "<<endl;
    string xname, xapellido,xcontrasenia;
    cin>>xname>>xapellido>>xcontrasenia;
    Menu menu(xname,xapellido,xcontrasenia);
    menu.saludo(menu);
    return 0;
}
