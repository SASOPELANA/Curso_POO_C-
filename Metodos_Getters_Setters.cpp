// Metodos Constructores y Modificadores (Getters y Setters)

#include <iostream>
#include <string>
using namespace std;

class Punto{
    private:
        int x, y; // Atributos
    public: // Metodos
        Punto(); // Constructor
        void set_punto(int,int); // Damos valor al atributo. set
        int get_puntox(); // Mostramos el valor del atributo. get
        int get_puntoy();
};

Punto::Punto(){
}

// Establecemos o damos valores a los atributos. set
void Punto::set_punto(int _x, int _y){
    x = _x;
    y = _y;
}

// get muestra el valor de atributo
int Punto::get_puntox(){
    return x;
}

int Punto::get_puntoy(){
    return y;
}

int main(){

    Punto punto1;

    punto1.set_punto(10,20);
    cout << punto1.get_puntox() << endl;
    cout << punto1.get_puntoy() << endl;

    return 0;
}