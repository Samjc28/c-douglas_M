/*Agora vamos inicia os estudos sobre classes e objetos POO*/

/*
C++ O que é Programação Orientada a Objetos?
OOP significa Programação Orientada a Objetos.
A programação orientada a objetos consiste em criar "objetos" que podem armazenar dados e funções que operam sobre esses dados.
Vantagens da Programação Orientada a Objetos (POO)
A Programação Orientada a Objetos (POO) fornece uma estrutura clara para os programas.
Facilita a manutenção, a reutilização e a depuração do código.
Ajuda a manter seu código DRY ( Don't Repeat Yourself - Não se Repita ).
Permite criar aplicações totalmente reutilizáveis ​​com menos código e em menor tempo de desenvolvimento.
Dica: O princípio DRY significa que você deve evitar escrever o mesmo código mais de uma vez. Mova o código repetido para funções ou classes e reutilize-o .

O que são classes e objetos?
Classes e objetos são os dois principais aspectos da programação orientada a objetos.
Uma classe define a aparência que um objeto deve ter, e um objeto é criado com base nessa classe. Por exemplo:
Classe |  Objetos
Fruta  |  Maçã, banana, manga
Carro  |  Volvo, Audi, Toyota

Em C++, tudo está associado a classes e objetos, juntamente com seus atributos e métodos. Por exemplo: na vida real, um carro é um objeto . O carro tem atributos , como peso e cor, e métodos , como dirigir e frear.
Atributos e métodos são basicamente variáveis ​​e funções que pertencem à classe. Eles são frequentemente chamados de "membros da classe". Uma classe é um tipo de dado definido pelo usuário que podemos usar em nosso programa, e funciona como um construtor de objetos ou um "modelo" para a criação de objetos.
Quando variáveis ​​são declaradas dentro de uma classe, elas são chamadas de atributos.

*/

#include<iostream>

using namespace std;

 char adiciona{'s'};

// Exemplo de criaçaõ de uma classe para criar um usuario
class usuario{
    
    private:

    public:
    string nome{};
    /// criando uma função para receber um nome de usuario.
    void CriarUsuario(){
        cout << "Digite um nome de usuario: " << endl;
        cin >> nome;
    }
    // Agora uma função para mostra o usuario.
    void mostraUsuario(){
        cout << "Nome de usuario: " << nome << endl;
    }

};

int main(){

    // Aqui dentro do main vou chama a classe e criar os objetos
    usuario User; // chamei a classe usuario e criei um objeto do tipo usuario.
    User.CriarUsuario(); // fazendo da funçãop para criar um usuario
    User.CriarUsuario(); // aqui para mostra o usurio criado
    // algo bem basico para ininciar o conceito POO em c++. não fiz o tratamento da string caso o usuario der um espaço, isso vai gerar um error.

    return 0;
}