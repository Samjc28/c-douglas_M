
#include <iostream>
#include <string>
using namespace std;

string nome;
int idade;
char letra;

int main() {
    cout << "---Bem vindo ao sistema de cadastro.---- " << endl;
    cout << "Para iniciar informe seu nome e idade: " << endl;

    // PRIMEIRA PESSOA
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Ola " << nome << " sua idade e: " << idade << endl;

    if (idade >= 18) {
        cout << nome << " Voce pode tirar a licenca." << endl;
    } else {
        cout << nome << " Sua idade nao atender as regras do sistema." << endl;
    }

    // PERGUNTA SE QUER CADASTRAR OUTRA
    cout << "Deseja cadastro outra pessoa [S/n] ? " << endl;
    cin >> letra;

    // SEGUNDA PESSOA (APENAS SE S/s)
    if (letra == 'S' || letra == 's') {

        cout << "Informe os dados da nova pessoa. " << endl;

        cout << "Digite seu nome: ";
        cin >> nome;

        cout << "Digite sua idade: ";
        cin >> idade;

        cout << "Ola " << nome << " sua idade e: " << idade << endl;

        // >>> REFAZER O TESTE DA IDADE AQUI <<<
        if (idade >= 18) {
            cout << nome << " Voce pode tirar a licenca." << endl;
        } else {
            cout << nome << " Sua idade nao atender as regras do sistema." << endl;
        }

        // Se quiser perguntar de novo:
        cout << "Deseja cadastro outra pessoa [S/n] ? " << endl;
        cin >> letra;

        // (aqui você pode repetir esse mesmo bloco, ou usar um loop)
    } else {
        cout << "Encerrando..." << endl;
    }

    return 0;
}
