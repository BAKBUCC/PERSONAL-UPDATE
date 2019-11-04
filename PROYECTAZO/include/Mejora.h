#ifndef MEJORA_H
#define MEJORA_H
#include "Menu.h"


class Mejora
{
    public:
        short eleccion;
        Mejora(Menu menu);
        void elecciondada(Menu menu, short eleccion);
        void Fisica();
        void Psicologia();
        void Inteligencia();

};

#endif // MEJORA_H
