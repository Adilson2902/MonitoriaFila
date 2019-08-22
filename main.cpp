#include <iostream>
#include <string>
#include "Fila.h"
using  namespace std;


int main() {
    int Escolha  = 0 ;
    fila *Fila = NULL;
    fila *primeiro = NULL;
    fila *ultimo = NULL;


    do{ cout<<"\n";
        cout<<"  Menu              \n";
        cout<<"  1 Adicionar       \n ";
        cout<<" 2 Remover da Fila   \n ";
        cout<<" 3 Ver a Fila \n ";
        cout<<" 4 Esvaziar a fila \n ";
        cout<<" 5 Sair            \n ";
        cout<<" Escolha : ";
        cin>>Escolha;
        switch (Escolha){
            case 1: cout<<" Adiciona na Fila  \n";
            if(primeiro == NULL){
                cadastroinicial(Fila, primeiro, ultimo);
            }else{
                Enfileirar(Fila, primeiro);
            }

            break;

            case 2:cout<<" Remove Na Fila \n";
            if(primeiro == NULL){
                cout<<"   Fila Vazia !!";
            } else{
                desenfileiras(Fila);
            }

                break;
            case 3:cout<<" Exibi quem ta na Fila \n";
           if (primeiro == NULL){
           cout<<" Fila Vazia ";
           } else{
               ExibiaFila(Fila);
           }
                break;

            case 4: cout<<" Esvaziar a fila \n";
            if(primeiro == NULL){
                cout<<" Fila Vazia ";

            } else{
               esvaziarFila(Fila,primeiro);
            }
        }




    }while (Escolha != 5);
}
