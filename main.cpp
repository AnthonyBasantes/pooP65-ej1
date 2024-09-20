#include <iostream>
using namespace std;
//Funciones
string analizar(double promedio){
    if(promedio>=7){
    return "Aprobado";
    }else if (promedio>=5 and promedio<7){
    return "Suspendido";
    }else if (promedio>=1 and promedio<5){
    return "Reprobado";
    }else {
        return "Nota invalida";
    }
}

int main(){
    double nota1,nota2,nota3,nota4, promedio;
    cout<<"Ingrese la primera nota: ";
    cin>>nota1;
    cout<<"Ingrese la segunda nota: ";
    cin>>nota2;
    cout<<"Ingrese la tercera nota: ";
    cin>>nota3;
    cout<<"Ingrese la cuarta nota: ";
    cin>>nota4;
    promedio=(nota1+nota2+nota3+nota4)/4;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"Resultado: "<<analizar(promedio)<<endl;



    return 0;
}
