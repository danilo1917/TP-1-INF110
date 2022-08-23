#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double x;
    double soma = 0;
    x=1;
    //Lê e soma os valores à variável soma, responsável por guardar o valor total em reais
    while (x!=0)
    {   
        cin>> x;
        soma+=x/100.0;
    };

    cout<<fixed<<setprecision(2)<<"R$"<<soma<<endl;
    
    return 0;
}