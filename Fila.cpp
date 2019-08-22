#include <iostream>
#include "Fila.h"
#include <new>
using namespace std;
struct  fila{
    int NumeroNaFila;
    fila *prox;

};

void cadastroinicial(fila *&Fila,fila *&primeiro , fila *&ultimo){
    fila *Novo = new fila ;
    cout<<" Digite um Novo numero para a fila ";
    cin >> Novo->NumeroNaFila;
    Novo->prox = NULL;
    Fila = Novo;

    primeiro = Novo;
    ultimo = Novo;

}



void Enfileirar(fila *&Fila,fila *&primeiro){
    fila *Novo = new fila;


        cout << " Digite um Novo numero para a fila ";
        cin >> Novo->NumeroNaFila;
    Novo->prox = Fila;
    primeiro = Novo;
        Fila = Novo;



}

void ExibiaFila(fila *Fila){

    fila *cursor = Fila;
    cout<<" Fila : ";
 while (cursor != NULL){
     cout<<" - "<<cursor->NumeroNaFila;
     cursor = cursor->prox;
 }


}
void desenfileiras(fila *&Fila){

    Fila = Fila->prox;

}

void esvaziarFila(fila *&Fila,fila *&primeiro){
    fila *aux = NULL;

    Fila = aux;
    primeiro = aux;
    cout<<"\n Fila Esvaziada ! ";
}
