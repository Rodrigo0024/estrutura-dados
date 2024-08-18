#include <iostream>>
#include "pilha.h"

using namespace std;


 pilha::pilha()
    //construtora //stack
    {

        tamanho =0;
        estrutura =new tipoitem[max_itens];
    }
    pilha::~pilha()//destrutora //~stack
      {
        delete [] estrutura;
    }
    bool pilha::estacheia()//isfull
      {
        return(tamanho ==max_itens);
    }
    bool pilha::estavazia()//isempty
      {
        return(tamanho ==0);
        
    }

    void pilha::inserir(tipoitem item)//push
      {
        if(estacheia()){
            cout << "a pilha está cheia";
       
        }else{
            estrutura[tamanho] =  item;
            tamanho++;
        }
    }
    tipoitem pilha::remover()//pop
      {

if(estavazia()){
    cout << "A pilha está vazia";
    return 0;
}else{
    return estrutura[tamanho-1];
    tamanho--;
}
    }

    void pilha::imprimir()//print
      {
        cout << "pilha :";
        for (int i=0; i<tamanho; i++ ){
            cout << estrutura[i] << "";
        }
    }
    int pilha::qualtamanho ()  {
         return tamanho;
    }