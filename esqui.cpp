#include <iostream>
#include <iomanip>
using namespace std;

int main(){     
    double dist, notas[5], aux, soma = 0.0, nota_dist;
    cin >> dist;
    //Calcula a nota da distância
    nota_dist = 60 + (dist - 120)*1.8;

    //Lê as notas do estilo dos 5 juízes
    for(int i =0; i<5; i++){
        cin >> notas[i];
    }
    //Ordena o vetor de notas
    for(int j =0; j<5; j++){
        for(int k =0; k<5; k++){
            aux = 0;
            if (notas[j]>notas[k]){
                aux = notas[j];
                notas[j] = notas[k];
                notas[k] = aux;
            }
    }
    }
    // Soma os valores que não são extremos(maior e menor) do vetor de notas
    for (int i = 1; i<4; i++){
        soma+=notas[i];
    }
    //Soma a nota do estilo com a nota da distância
    soma+=nota_dist;

    cout << fixed<< setprecision(1) << soma<< endl;

    
    return 0;
}