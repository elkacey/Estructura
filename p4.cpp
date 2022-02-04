#include <iostream>>
using namespace std;
struct Fecha{
    int dia,mes,year;
};
struct Persona{
    char nombre[20];
    int edad,peso;
    Fecha fecha;
} persona ={"Cindy",20, 60, 3,2,2022};
struct Empleado{
    Persona persona;
    int salario;
}trabajador={ "Cindy2",20,60,3,2,2022,15000};
int main(){
    cout<<"Persona: "<<persona.nombre<<endl;
    
    cout<<"Fecha: "<<persona.fecha.dia<<"/"<<persona.fecha.mes<<"/"<<persona.fecha.year<<endl;
    cout<<"Persona edad: "<<persona.edad<<endl;
    cout<<"Persona peso: "<<persona.peso<<endl;
    cout<<"Persona: "<<trabajador.persona.nombre<<endl;
    cout<<"Edad trabajador: "<<trabajador.persona.edad<<endl;
    cout<<"Peso trabajador: "<<trabajador.persona.peso<<endl;
    cout<<"Salario del trabajador: "<<trabajador.salario<<endl;
    cout<<"Fecha: "<<trabajador.persona.fecha.dia<<"/"<<trabajador.persona.fecha.mes<<"/"<<trabajador.persona.fecha.year<<endl;
return 0;}

