/*COMO SABER O TIPO DE UMA VARIAVÉL, SE É INT, DOUBLE, STRING ...*/

#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
    int s {5}; // {} É A FORMA MODERNA DO C++ PARA INICIALIZA UMA VARIAVÉL

    cout << "tido de s " << typeid(s).name() << endl; // Para saber o tipo da variavel.


    return 0;
}