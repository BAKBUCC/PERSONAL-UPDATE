#ifndef MEJORA_H
#define MEJORA_H
#include "Menu.h"


class Mejora
{
    public:
        short eleccion;
        char volver;
        Mejora(Menu menu);
        void elecciondada(Menu menu, short eleccion);
        void Fisica();

        void Regresa_Abdominales();
        void Regresa_Piernas();
        void Regresa_Brazos();
        void Regresa_Espalda();
        void Mostrar_mensaje();
        void Mostrar_opciones();
        void Abdominales();
        void Piernas();
        void Brazos();
        void Espalda();

        void Abdominales1();
        void Abdominales2();
        void Abdominales3();
        void Abdominales4();
        void Abdominales5();
        void Abdominales6();
        void Abdominales7();

        void Piernas1();
        void Piernas2();
        void Piernas3();
        void Piernas4();
        void Piernas5();

        void Brazos1();
        void Brazos2();
        void Brazos3();
        void Brazos4();
        void Brazos5();
        void Brazos6();
        void Brazos7();

        void Espalda1();
        void Espalda2();
        void Espalda3();
        void Espalda4();

        void Psicologia();
        void Inteligencia();

};

#endif // MEJORA_H
