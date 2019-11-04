#include <iostream>
#include "Menu.h"
#include "Mejora.h"
#include <string>

using namespace std;

Menu::Menu(string name, string apellido, string contrasenia)
{
    this->name=name;
    this->apellido=apellido;
    this->contrasenia=contrasenia;
}
void Menu::saludo(Menu menu)
{
    cout<<"Hola "<< name<<endl;
    subclases(menu);
}
void Menu::subclases(Menu menu)
{
    cout<<"¿Qué quieres mejorar? "<<endl;
    cout<<"(1)mejorar todo"<<endl;
    cout<<"(2)enamorar a alguien"<<endl;
    cout<<"(3)libros recomendados"<<endl;
    cout<<"(4)estadisticas de mejora"<<endl;
    cout<<"¿Cual eliges campion?: "<<endl;
    cin>>xeleccion;
    if (xeleccion == 1)
    {
        Mejora mejora(menu);
    }
}
