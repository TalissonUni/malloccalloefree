// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 2
//
// OBJETIVO DESTA PARTE:
//Adcionar a funcionalidade de emprestimo e introduzir a alocação dinâmica.
// - Os arrays de livros e empréstimos são alcoados com mallc/calloc.
// - Nova struct para emprestimo.
// - Liberação de memória com free.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//constantes globais

#define MAX_LIVROS 50
#define MAX_EMPRESTIMOS 100
#define TAM_STRING 100

// definir as estruturas

struct livro{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
    int disponivel;

    //nova struct para armazena as informações de emprestimos

struct emprestimo{
    int indicelivro;// qual livro foi emprestado do array 'biblioteca' foi emprestad
    char nomeusuario [TAM_STRING];
}

// limpar o buffer de entraga:

    void limparBufferEntrada() {
        int c;
        while ((c = getchar()) ! = '\n' && c != EOF);
    }

    //Função Principal (main)
int main(){
    //alocação dinâmica de memória
    //agora, em vez de arrays estáticos, usamos pronteiros
    struct Livro *biblioteca;
    struct Emprestimo *emprestimo;

    //Usamos calloc para o array de livros. calloc(num_elementos, tamanho_de_cada_elemento)
    //VAntagem: incializavtoda a memória com zeros.vIsso significa que 'disponível' já começa com valor armazenado
    biblioteca = (struct Livro *) malloc(MAX_EMPRESTIMOS * sizeof(struct  lIvro));
    //Usamos malloc para o array de empréstimos. malloc(tamanho_total_em_bytes)
    emprestimo = (struct Emprestimo *) malloc(MAX_EMPRESTIMOS * sizeof(struct Emprestimo));

    //VERIFICAÇÃO: É crucial verifcar se a alocação de memoria deu certo
    
    if(biblioteca == NULL || emprestimos == NULL){
        printf("Erro: Falha ao alocar memoria.\n");
        return 1; // Retorna 1 para indicar um erro.
    }

    int totalLivros = 0;
    int totalEmpresimtos = 0;
    int opcao;

    do {
        printf("+++++++++++++++++++++++++++++/n");
        printf(" BIBLIOTECA - PARTE 2\n");
        printf("++++++++++++++++++++++++++++\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livro\n");
        printf("3 - Realizar emprestimo\n");
        printf("4 - Listar emprestimos\n");
        printf("0 - Sair\n");
        printf("+++++++++++++++++++++++++++++");
        printf("Escolha uma opção:");
        scanf("%d", &opcao);
        limparBufferEntrada();

        switch (opcao) {
        case 1: // cadastro do livro
            printf("___ CADASTRO DO NOVO LIVRO___\n\n");
            if (totalLivros < MAX_LIVROS) {
                //o acesso aos campos é igual ao do array estático.
                printf("Digite o nome do Livro:");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                //... (as dmeais leituras são iguais à parte 1) ...
                 printf("Digite o nome do autor:");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);
                printf("Digite a editora:");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = 
                biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = 
                biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = 
                
                printf("Digite a edcao:");
                scanf("%d", &biblioteca[totalLivros].edicao);
                limparBufferEntrada();

                //Ao contra
            }
        }
    }
}