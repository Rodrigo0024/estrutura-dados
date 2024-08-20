#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;

    int opcao;
    TipoItem item;
    cout << "Programa gerador de filas: \n";
    do{
        cout << "Digíte 0 para parar o programa...\n";
        cout << "Digíte 1 inserir um elemento...\n";
         cout << "Digíte 2  para remover um elemento...\n";
         cout << "Digíte 3 para imprimir a fila...\n";
         cin >> opcao;

         if(opcao ==1){
            cout << "Digite o elemento a ser inserido na fila";
            cin >> item;
            fila1.inserir(item);
         }else  if(opcao ==2){
            item = fila1.remover();
            cout << "O elemento removido é o item";
         }else if (opcao ==3){
            fila1.imprimir();
         }
    }while (opcao!= 0);
   

    return 0;
}