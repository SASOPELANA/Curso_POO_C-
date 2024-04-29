/*  Ejercicio 1
    Construya una clase llamada Rectagulo que tenga los siguientes atributos:
    largo y ancho, y los siguientes metodos: perimetro() y area().
*/

#include <iostream>
#include <string>
using namespace std;

// Clase Reactagulo
class Rectangulo{
    private: // Atributos
        float largo;
        float ancho;
    
    public: // Metodos
        Rectangulo(float, float); // Constructor de la Clase
        void perimetro();
        void area();
};

// Constructor, sirve para inicializar los atributos de la clase
Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
}

// Metodo para calcular el perimetro del ractangulo
void Rectangulo::perimetro(){
    float peri = 2 * (largo + ancho);
    cout << "El perimetreo del rectángulo es: " << peri << endl;
}

// Metodo para calcular el area del rectangulo
void Rectangulo::area(){
    float are = largo * ancho;
    cout << "El área del rectángulo es: " << are << endl;
}

int main(){

    Rectangulo rec1 = Rectangulo(10,25); // forma de crear un objecto
    Rectangulo rec2(15,3); // otra fomra de crear el objecto, llamando al constructor directamente.

    rec1.area();
    rec1.perimetro();

    rec2.area();
    rec2.perimetro();

    return 0;
}