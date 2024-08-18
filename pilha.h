//pilha = stack
typedef int tipoitem;
const int max_itens =100;

class pilha{
    private:
    int tamanho;
    tipoitem* estrutura;


    public:
    pilha();//construtora //stack
    ~pilha();//destrutora //~stack

    bool estacheia();//isfull
    bool estavazia();//isempty

    void inserir(tipoitem item);//push
    tipoitem remover();//pop

    void imprimir();//print
    int qualtamanho ();

};