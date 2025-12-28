/*
 As estruturas de repetições são while, do while e for.
*/

#include<iostream>
#include<vector>
#include<string>
#include<cctype>   // std::tolower
#include<limits>   // std::numeric_limits


using namespace std;

vector<string> convidados;
string nomes;
char continuar;



int main (){
    // exemplo basico do uso de While
    // Esse auto e uso moderno do C++, quando uso ele. O compilador faz a atribuição do tipo, para a variavél, nesse caso foi um int.
    // Esse pequeno programa faz a contagem de 0 a 100, usando o while, quando a condição que é o numero menor ou igual a100
   // auto n {0};
   // while (n <= 100)
  //  {
   //     cout << "Contagem dos Numeros: " << n << "\n";
   //     n++;
   // }
    // Agora vamos fazer uso do Do while
    // O exemplo que vou usar ser uma lista de para adc pessoas

    cout << "--- Adicionando os nome a lista de convidados. --- " << "\n";

    do
    {
        cout << "Digite o nome do convidado: " << endl;
    
        getline(std::cin >> std::ws, nomes);

       if (nomes.empty())
       {
        cout << "Nenhum convidado foi adicionado a lista. \n";
       } else {
            convidados.push_back(nomes);
            cout << "Convidado adicionado! \n";
       }
        cout << "Deseja Adicionar outro convidado (S/n) ? " << endl; 
        cin >> continuar;

    
    } while (continuar == 'S' || continuar == 's');
        for (const string& nome : convidados)
        {
            cout << "-- " << nome << endl;
        }
        cout << "\n Lista completas dos convidados: " << convidados.size() << " -" << " convidado " << endl;
        
    return 0;
}