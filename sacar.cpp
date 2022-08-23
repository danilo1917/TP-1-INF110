#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double valor;
    cin >> valor;
    valor = round(valor*100);
    // Declaração do vetor de valores em reais.
    float vetor[] = {
        100.0*100, 50.0*100, 20.0*100, 10.0*100, 5.0*100, 2.0*100, 1.0*100, 0.5*100, 0.25*100, 0.10*100, 0.05*100, 0.01*100 
    };
    // Itera sobre o vetor de valores e verifica se o valor é maior ou igual ao elemento do vetor
    for (int i = 0; i<12; i++){
        while (valor>=vetor[i])
        {   //Se o valor for maior ou igual a 2 significa que é cédula
            if (valor>=2.0*100){
                cout << "C "<< vetor[i]/100 << endl; 
            }
            //Se o valor for menor que 2 então significa que é moeda
            else {
                cout <<"M "<< vetor[i] << endl;
            };
            // Atualiza a variável valor, tirando o que já foi calculado
            valor -= ceil(vetor[i]);

        };
    };
    
    return 0;
}