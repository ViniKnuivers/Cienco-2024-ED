#include <iostream>

//Crie uma estrutura chamada pessoa que seja capaz de
//armazenar o nome, o endereço, o CPF e a idade de 5
//pessoas.


using namespace std;
#define TAMANHO 2

typedef struct bicho
{
        string animal;
        string especie;
        float peso;
        int idade;

} Bicho;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    Bicho dados;
    Bicho vet[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {



    cout << "Informe o nome do animal: " << endl;
    getline(cin, vet[i].animal);

    cout << "Informe a especie do animal: " << endl;
    getline(cin, vet[i].especie);

    cout << "Informe o peso: " << endl;
    cin >> vet[i].peso;

    cout << "Informe  a idade do animal: " << endl;
    cin >> vet[i].idade;

    cin.ignore();
    }

        for(int i = 0; i < TAMANHO;i++)
            {
                cout << vet[i].animal << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].especie << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].peso << " " << endl;
                cout << "===========================" << endl;
                cout << vet[i].idade << " " << endl;
                cout << "===========================" << endl;
                cout << "===========================" << endl;
            }
}
