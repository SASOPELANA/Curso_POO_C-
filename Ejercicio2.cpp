/*  Ejercicio 2
    Contruya una clase Tiempo que contenga los siguientes atributos enteros: horas, minutos, y segundos.
    Haga que la clase tenga un contructor, con tres parametros Tiempo(in,int,int).
*/

#include <iostream>
using namespace std;

class Tiempo{
    private: // Atributos
        int horas, minutos, segundos;
    public: // Metodos
        Tiempo(int,int,int); // Constructor
        void mostra_hora();
};

// Contructor para inciar los atributos
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas;
    minutos = _minutos;
    segundos = _segundos;
}

// Metodo para mostrar la hora o atributos
void Tiempo::mostra_hora(){ 
    cout << "La hora es: " << horas << " con minutos " << minutos << " y segundos " << segundos << endl;
}   

int main(){

    // Crear objecto
    Tiempo hora1(02,30,60);

    hora1.mostra_hora();

    return 0;
}