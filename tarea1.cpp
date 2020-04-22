#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int contar_letras(string x){
    int y, i, cont, k,j=0;
    char b;
    string c;
    y=x.length();
    k=0;
    cont=0;
    for(i=0; i< y ; i++){
        b=x[i];
        if(x[i+1]==b){
            cont++;
        }
        else{
          ostringstream prueba;
          prueba << b << cont+1;
          cout<< prueba.str();
          cont=0;
        }
    }
}

main(){
    string palabra;
    cout<< "ingrese una palabra \n";
    cin >> palabra;
    cout<< "\n";
    contar_letras(palabra);
}