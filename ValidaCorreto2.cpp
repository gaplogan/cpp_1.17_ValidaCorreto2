#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    double num, raiz;

    //{entrada de dados}
    do
    {
        cout << "Digite um número positivo: ";
        cin >> num;
        
        // Exibe mensagem informando valor invalido ou pula uma linha, dependendo da verificação
        cout << ((num < 0)? "Valor Inválido" : "\n") << endl;

    } while (num < 0);

    //{Processamento: Tenta extrair a raiz quadrada do número lido}
    raiz = sqrt(num);

    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}