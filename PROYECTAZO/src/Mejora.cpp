#include "Mejora.h"
#include "Menu.h"
#include <iostream>
using namespace std;

Mejora::Mejora(Menu menu)
{
    cout<<"¿Qué parte de tí quieres mejorar?"<<endl;
    cout<<"(1)Fisica"<<endl;
    cout<<"(2)Psicologica"<<endl;
    cout<<"(3)Inteligencia"<<endl;
    cout<<"(4)¿quieres volver atrás?"<<endl;
    cin>>eleccion;
    elecciondada(menu, eleccion);
}
void Mejora::elecciondada(Menu menu, short eleccion)
{
    if  (eleccion == 1)
    {
        Fisica();
    }
    else if (eleccion == 2)
    {
        Psicologia();
    }
    else if(eleccion == 3)
    {
        Inteligencia();
    }
    else if(eleccion == 4)
    {
        menu.saludo(menu);
    }
}
void Mejora::Fisica()
{
    cout<<"FISICA"<<endl;
}
void Mejora::Psicologia()
{
    cout<<"PSICOLOGÍA"<<endl;
}
void Mejora::Inteligencia()
{
    cout<<"INTELIGENCIA"<<endl;
}
