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

    //