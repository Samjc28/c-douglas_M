/*nesse aqui vamos desenvolver as funções que foram feita no carr.h*/
// aqui vou  incluir o arquivo carro.h
// como não tem saido para o monitor nem entrada via teclado, não vou colocar o <iostream>
// Quando formos incluir uma biblioteca que nos mesmo crianmos usamos as (" ") " nome-da-biblioteca"
#include <iostream>
#include "carro.h"

using namespace std;

    //construtor
    carro::carro(int a, float v, int k){
        ano = a;
        valor = v;
        km = k;
    }

    //get e set
    //ano
    void carro::setano(int a){
        ano = a;
        //this->ano = ano;
    }
    int carro::getano(){
        return ano;
    }
    //valor
    void carro::setvalor(float v){
        valor = v;
    }
    float carro::getvalor(){
        return valor;
    }
    //km
    void carro::setkm(int k){
        km = k;
    }
    int carro::getkm(){
        return km;
    }