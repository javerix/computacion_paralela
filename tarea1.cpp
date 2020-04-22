#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int contar_letras(string x){
    int y, i, cont;// definir variables
    char b;
    y=x.length();//obtenemos el largo de la palabra
    cont=0;
    /*recorremos la palabra desde la posicion 0,y luego se comprueba si son iguales las 2 letras adyacentes.
    En el caso de que si, se aumenta el contador, si no se realiza la union de la letra y la cantidad de
    veces que se repite*/
    for(i=0; i< y ; i++){ 
        b=x[i];
        if(x[i+1]==b){
            cont++;
        }
        else{
            /*la union de la letra y la cantidad de veces que se repetia fue lo que mas que costo, por lo que 
            tuve que revisar en internet como lograrlo, gracias a eso logre que funcionara*/
          ostringstream prueba;
          prueba << b << cont+1;
          cout<< prueba.str();
          cont=0;//se reinicia el contador para la siguiente letra
        }
    }
}

int main(){//se le pide al usuario ingresar ua palabre para luego llamar a la funcion 
    string palabra;
    cout<< "ingrese una palabra \n";
    cin >> palabra;
    cout<< "\n";
    contar_letras(palabra);
}