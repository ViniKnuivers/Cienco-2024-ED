#include <iostream>
#include <queue>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    queue <string> clientes;
    int opcao;
    string cliente;

    do{
        cout << "Bem vindo ao atendimento da nossa loja!" <<endl;

        cout << "Op��es Disponive�s" <<endl;
        cout << "1. Inserir cliente na fila" <<endl;
        cout << "2. Atender pr�ximo cliente" <<endl;
        cout << "3. Exibir fila de espera" <<endl;
        cout << "4. Encerrar Programa" <<endl;
        cin >> opcao;
        cin.ignore();

        cout << endl;

        switch(opcao)
        {
            case 1:
                cout << "Qual nome do cliente? " <<endl;
                getline(cin, cliente);
                clientes.push(cliente);

                break;


            case 2:
                if(clientes.empty())
                {
                    cout << "Fila est� vazia" <<endl;
                }
                else
                {
                    cout << "O cliente sendo atendido no momento �: " << clientes.front() <<endl;
                    clientes.pop();
                }
                break;

            case 3:
                if(!clientes.empty())
                {
                    queue<string> filaAux = clientes;
                    while(!filaAux.empty())
                    {
                        cout << filaAux.front() << " ";
                        filaAux.pop();
                    }
                    cout << endl;
                }
                else
                {
                    cout << "A fila de espera est� vazia\n";
                }
                break;

            case 4:
                cout << "Saindo!" <<endl;
                break;

            default:
                cout << "Inv�lido" <<endl;
        }
    }while( opcao != 4 );

    return 0;
}
