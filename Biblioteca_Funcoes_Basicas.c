#include"Biblioteca_Funcoes_Basicas.h"

/* INICIALIZA UMA LISTA ENCADEADA (BARALHO) */
TipoLista* InicializaBaralho(){
    TipoLista* baralho=(TipoLista*)malloc(sizeof(TipoLista));
    baralho->Primeiro=NULL;
    baralho->Ultimo=NULL;
    return baralho;
}

/* CHECA SE UMA LISTA ENCADEADA (BARALHO) ESTA VAZIA */
int ChecaBaralhoVazio(TipoLista* baralho){
    return (baralho->Primeiro==NULL);
}

/* RETORNA O TAMANHO DE UMA LISTA ENCADEADA (BARALHO) */
int Quantidade(TipoLista* baralho){
    TipoCelula* aux=baralho->Primeiro;
    int cont=0;
    while(aux!=NULL){
        cont++;
        aux=aux->Prox;
    }
    return cont;
}

/* CHECA SE DUAS ESTRUTURAS TIPOCARTA POSSUEM O MESMO ELEMENTO 'NAIPE' */
int MesmoNaipe(TipoCarta *carta1, TipoCarta* carta2){
    return(carta1->naipe==carta2->naipe);
}

/* CHECA SE DUAS ESTRUTURAS TIPOCARTA POSSUEM O MESMO ELEMENTO 'VALOR' */
int MesmoValor(TipoCarta *carta1, TipoCarta* carta2){
    return(carta1->valor==carta2->valor);
}

/* CHECA SE DUAS ESTRUTURAS TIPOCARTA SAO IGUAIS */
int MesmaCarta(TipoCarta *carta1, TipoCarta* carta2){
    return(MesmoNaipe(carta1,carta2) && MesmoValor(carta1,carta2));
}
