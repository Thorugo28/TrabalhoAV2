#include <iostream>

using namespace std;

int main(){
    
    //Declaração e leitura da variavel que servirá como indice dos vetores
    int func;
    cout<<"Quantos salarios deseja calcular?  \n";
    cin>>func;


    //Declaração de variavéis
    float s[func], vh[func], sal;
    int mat[func], i=0, cont=0, h[func];


    //Estrutura de repetição para inserção de multiplos dados
    do{
        cout<<"Insira a matricula: ";
        cin>>mat[i];
        if(mat[i]>0){
            cout<<"Insira a quantidade de horas que voce trabalha: ";
            cin>>h[i];
            cout<<"Insira o valor da sua hora: ";
            cin>>vh[i];
            i++;
        }else{
            cout<<"Matricula invalida";
        }
    }while(i>0 && i<func);
    //Estrutura de repetição para calculo de exibição de cada salário
    for(cont=0;cont<i;cont++){
        s[cont] = vh[cont]*h[cont];
        sal = s[cont]*0.81;;

        cout<<"Matriula: " << mat[cont] << endl;
        cout<<"Seu salario com os descontos e de: " << sal << endl;
    }


    system("pause");
    return 0;
}
