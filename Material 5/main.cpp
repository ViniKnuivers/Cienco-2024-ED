#include <iostream>
#include <stdlib.h>
#include <string>




using namespace std;


void imprimeVetor(int x[])
{
    for (int i = 0; i <= 4; i++)
    {
        cout << i + 1 << " numero :" << x[i] << endl;
    }
}

void bubblesort2(int x[])
{
    int aux = 0;
    for (int j = 1; j <= 4; j++)
    {
        for (int i = 4; i >= j; i--)
        {
            if (x[i] < x[i - 1])
            {
                aux = x[i];
                x[i] = x[i - 1];
                x[i - 1] = aux;
            }
        }
    }
}

int main(int argc, char** argv)
{
    int x[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Digite o numero" << endl;
        cin >> x[i];
    }
    bubblesort2(x);
    imprimeVetor(x);

    return 0;
}
//void imprimeVetor(int vetor[])
//{
//    int i;
//    cout << endl;
//    for (i = 0; i < TAM; i++)
//    {
//        cout << " |" << vetor [i] << "| ";
//    }
//}
//void bubbleSort (int vetor[TAM])
//{
//    int x, y, aux;
//
//    for ( x = 0; x < TAM; x++)
//    {
//        for (y = x + 1; y <TAM; y++)
//        {
//            if ( vetor[x] > vetor [y])
//            {
//                aux = vetor[x];
//                vetor[x] = vetor[y];
//                vetor[y] = aux;
//            }
//        }
//    }
//}
//int main()
//{
//    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
//    imprimeVetor(vetor);
//    cout << endl;
//
//    bubbleSort(vetor);
//    imprimeVetor(vetor);
//}


