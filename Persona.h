//
// Created by magol on 17/10/2023.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H

#include <string>

class Persona {
    std::string nombre;
    int edad;
    std::string genero;

public:
    void setNombre(const std::string &nombre);
    std::string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGenero(const std::string &genero);
    std::string getGenero();
};



#endif //UNTITLED_PERSONA_H
