// Sobrecarga de Contructores

#include <iostream>
#include <string>
using namespace std;

class Fecha{
    private: // Atributos
        int dia, mes, annio;
    public:
        Fecha(int, int, int); // Constructor1
        Fecha(long); // Constructor2
        void mostrar_fecha();
};

Fecha::Fecha(int _dia, int _mes, int _annio){ // Constructor1
    dia = _dia;
    mes = _mes;
    annio = _annio;
}

Fecha::Fecha(long fecha){ // Constructor2
    annio = int(fecha/10000); // Extraer el año
    mes = int((fecha-annio * 10000) / 100); // Extarer el mes
    dia = int(fecha - annio * 10000 - mes * 100); // Extarer el dia
}

void Fecha::mostrar_fecha(){ // Metodo para mostar fecha
    cout << "La fecha de hoy es: " << dia << "/" << mes << "/" << annio << endl;
}

int main(){

    Fecha f1(29,04,2024);
    Fecha fayer(20240428);

    f1.mostrar_fecha();
    fayer.mostrar_fecha();

    return 0;
}