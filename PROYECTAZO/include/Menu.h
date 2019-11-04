#ifndef MENU_H
#define MENU_H
#include <string>

using namespace std;

class Menu
{
    private:
    string name,apellido,contrasenia;
    public:
        short xeleccion;
        Menu(string name, string apellido, string contrasenia);
        void saludo(Menu menu);
        void subclases(Menu menu);
};


#endif // PUNTO_H
