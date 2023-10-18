#include <iostream>
#include "Funciones.h"

int g = 20;
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"La suma da "<< suma(3,8)<< std::endl;
    std::cout<<"El valor de g antes de la suma "<< g << std::endl;
    std::cout<<"La suma da: "<< suma(5, g) << std::endl;
    std::cout<<"Valor de g después de la suma "<< g << std::endl;
    std::cout<<"El área de un círculo de 12 cm es "<< AREA_CIRCULO(12)<<std::endl;
    /*int a = 4;
    int b = 7;
    int c = a + b ;
    std::cout<<c<< std::endl;*/
    return 0;
}

