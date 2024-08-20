#include <iostream>
#include "fila.h"

using namespace std;

  fila::fila(){
    primeiro =0;
    ultimo =0;
    estrutura = new TipoItem[max_itens];
  }
  fila::~fila(){
    delete [] estrutura;
  }
    bool fila::estavazio(){
            return (primeiro ==ultimo);
    }
    bool fila::estacheio(){
        return (ultimo - primeiro == max_itens);
    }
    void fila::inserir(TipoItem item)//push//empurrar //enqueue infilerar
    {

        if(estacheio()){
            cout << "A fila está cheia";
            cout << "Este elemento não pode ser inserido";
        }else{
            estrutura[ultimo % max_itens]= item;
            ultimo++;
        }
        
    }
    TipoItem fila::remover() //pop//estouro //dequeueq  // Retire da fila
    {
        if(estavazio()){
            cout << "A fila está vazia";
            cout << "Este elemento não pode ser removido";
        }else{
            primeiro++;
            return estrutura[ (primeiro-1) % max_itens];
        }
    }
    void fila::imprimir(){
        cout << "Fila: [ ";
        for (int i = primeiro; i < ultimo; i++ ){
            cout << estrutura[i % max_itens] << " ";
        }
        cout << " ]\n";
    }