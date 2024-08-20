//queue = fila
typedef int TipoItem;
const int max_itens =100;


class fila
{
private:
    /* data */
    int primeiro, ultimo;
    TipoItem* estrutura;
public:
    fila(/* args */);
    ~fila();
    bool estavazio();
    bool estacheio();
    void inserir(TipoItem item);//push//empurrar //enqueue infilerar
    TipoItem remover(); //pop//estouro //dequeueq  // Retire da fila
    void imprimir();
};

