#include <iostream>
#include <locale>
#include <cmath> // math.h

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    double num, raiz;

    //{entrada de dados}
    do
    {
        cout << "Digite um n�mero positivo: ";
        cin >> num;
        
        // Exibe mensagem informando valor invalido ou pula uma linha, dependendo da verifica��o
        cout << ((num < 0)? "Valor Inv�lido" : "\n") << endl;

    } while (num < 0);

    //{Processamento: Tenta extrair a raiz quadrada do n�mero lido}
    raiz = sqrt(num);

    cout << "Raiz quadrada de " << num << ": " << raiz << endl;

    return 0;
}