/* As estruturas de repetições são while, do while e for.*/

#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
    int s {5};

    cout << "tido de s " << typeid(s).name() << endl; // Para saber o tipo da variavel.


    return 0;
}