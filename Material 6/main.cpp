#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> elemento;
    int numero;

    do{
        cout << "Digite um numero inteiro positivo ou (digite 0 para finalizar):" << endl;
        cin >> numero;

        if (numero != 0)
        {
            elemento.push(numero);
        }

    }

    while (numero != 0);
        while (!elemento.empty()){
            cout << elemento.top() << " ";
            elemento.pop();
        }

}
