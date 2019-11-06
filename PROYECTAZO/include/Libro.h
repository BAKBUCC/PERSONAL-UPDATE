#ifndef LIBRO_H
#define LIBRO_H
#include "Menu.h"
#include <stdlib.h>

class Libro
{
    public:
        char volver;
        Libro(Menu menu);
        void mostrar_estilos(Menu menu);
        void romance(Menu menu);
        void terror(Menu menu);
        void gotico(Menu menu);
        void fantasia(Menu menu);
        void drama(Menu menu);
        void drama1(Menu menu);
        void drama2(Menu menu);
        void drama3(Menu menu);
        void drama4(Menu menu);
        void fantasia1(Menu menu);
        void fantasia2(Menu menu);
        void fantasia3(Menu menu);
        void romance1(Menu menu);
        void romance2(Menu menu);
        void romance3(Menu menu);
        void romance4(Menu menu);
        void romance5(Menu menu);
        void romance6(Menu menu);
        void romance7(Menu menu);
        void gotico1(Menu menu);
        void gotico2(Menu menu);
        void gotico3(Menu menu);
        void gotico4(Menu menu);
        void gotico5(Menu menu);
        void gotico6(Menu menu);
        void literatura_medieval(Menu menu);
        void mostrar_libros();
        void pedir_libro();
};

#endif // LIBRO_H
