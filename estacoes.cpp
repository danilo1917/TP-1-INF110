#include <iostream>
using namespace std;

//Função principal
int main(){
    int dia, mes;
    // Matriz de caracteres representando os meses do ano
    char meses[12][10] = {"janeiro", "fevereiro","marco","abril", "maio","junho", "julho","agosto","setembro","outubro","novembro","dezembro"};
    cin >> dia >> mes;
    //Verifica se a data é válida
    if (dia<=31 && mes <=12){
        // Verificação de datas e estações 
        if (mes == 1 or mes == 2 or (mes == 12 && dia >=21) or (mes==3 && dia<20)){
            cout<< dia<< " de "<< meses[mes-1]<<endl;
            cout<< "Verao\n";
        }
        else if ((mes == 3 && dia >=20) or mes == 4 or mes == 5 or (mes == 6 && dia < 21)){
            cout<< dia<< " de "<< meses[mes-1]<<endl;
            cout<< "Outono\n";
        }
        else if((mes == 6 && dia>=21) or mes== 7 or mes == 8 or (mes==9 && dia<22)){
            cout<< dia<< " de "<< meses[mes-1]<<endl;
            cout<< "Inverno\n";
        }
        else {
            cout<< dia<< " de "<< meses[mes-1]<<endl;
            cout<< "Primavera\n";
        }
    }

    return 0;
}