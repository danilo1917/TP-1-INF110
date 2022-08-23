#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    char tipo;
    double x;
    double soma = 0;
    x=1;
    //Lê os tipos e valores e soma os valores à variável soma, responsável por guardar o valor total em reais
    while (x!=0)
    {   
        cin>> tipo>> x;
        if (tipo=='C')
            soma+=x;
        else if(tipo=='M')
            soma+=x/100.0;

    };
    // Imprime o valor total na tela
    cout<<fixed<<setprecision(2)<<"R$"<<soma<<endl;
    
    return 0;
}