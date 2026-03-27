
typedef struct no No;
struct no {
    int valor;
    No *prox;
};

typedef struct {
    No *inicio;
} Lista;

void criarLista(Lista *lista);
void inserirLista(Lista *lista, int valor);
