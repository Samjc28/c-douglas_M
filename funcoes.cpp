/*Uma função é um bloco de código que só é executado quando é chamado. Você pode passar dados, conhecidos como parâmetros, para uma função. As funções são usadas para executar determinadas ações e são importantes para a reutilização de código: defina o código uma vez e use-o várias vezes.*/

/*C++ fornece algumas funções predefinidas, como main()`execute`, que é usada para executar código. Mas você também pode criar suas próprias funções para realizar determinadas ações.
Para criar (geralmente chamado de declarar ) uma função, especifique o nome da função, seguido por parênteses () */

/*As funções declaradas não são executadas imediatamente. Elas são "salvas para uso posterior" e serão executadas mais tarde, quando forem chamadas. Para chamar uma função, escreva o nome da função seguido por dois parênteses () e um ponto e vírgula.;*/

/*No entanto, é possível separar a declaração da definição da função — para otimização do código.
É comum encontrar programas em C++ com a declaração da função acima main()e a definição da função abaixo main(). Isso torna o código mais organizado e fácil de ler.*/

#include<iostream>

using namespace std;

// Vamos declarar nossas funções antes da main, o prototipo dela, e a sua estrutura depois da main.
//Uma função que vai mostra um texto na tela, retorno vazio.
// Aqui a função não recebe paranmetro, masi fazer com ela recebar.
void msg();
void msg1( string texto);

// funçao para somar numeros.
int somar(int a, int b);

int main (){

    // Para fazer uso da função msg, eu chamo ela aqui na main
   msg();
   cout << "\n";

    // função que usar parametro.
    // a variavél tetxto vai recebe o que o usuario digita e a função vai mostra essa mesagem ,pois o paramentro dela vai recber essa mensagem.
   msg1("mensagem do usuario. ");

   cout << "\n";

    // chamando a função somar.
    int x = 4, y = 6;
    int r;
    r = somar(x,y);
    cout << "Valro da soma: " << r << endl;
    
    return 0; 

}

//aqui sim, a função fui contruida.
void msg(){
  cout << "Funcao que nao precisa de paramento";
}
//Aqui essa função recebr uma paramentro uma string que o usuario vai digitar.
void msg1(string texto){
  cout << texto;
}

// construção da função somar
int somar(int a, int b){
    int soma;
    soma = a + b;
    return soma;
}
