/*Aqui vamos colocar os prtotipos das funções que vamos usar.*/

class carro{
    private: 
    int ano;
    float valor;
    int km;

    public:
        // construtor
        carro(int a, float v, int k);

        // funçoes get e set
        void setano(int a);
        int getano();

        // valor
        void setvalor(float v);
        float getvalor();

        // kilimetragem
        void setkm(int k);
        int getkm();
};