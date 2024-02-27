// DNTestSoftwareAnalyst.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Q1Primo.h";
#include "Q2Palindromo.h";
#include "Q3Soma.h"
#include "Q4ListaPrimos.h"
#include "Q5InverteString.h"
#include "Q6CodeRun.h"

using namespace std;

void header();
void menu();

int main()
{
    int answer;
    int* number = new int;

    // 3o question
    int number_0[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                  2, 2, 2, 2, 2, 2, 2, 2, 2, 2 }; // Sum = 28
    int number_1[] = { 1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
                      11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                      21, 22, 23, 24, 25, 26, 27, 28, 29, 30 }; // Sum = 196

    // 4o question
    int nInit, nEnd;

    // 5o question
    string str;

    header();
    menu();

    cin >> answer;

    switch (answer)
    {
    case 1:

        Primo::header();
        Primo::menu(*number);

        if (Primo::primo(*number, *number)) {
            cout << *number << " is prime number." << endl;
        } 
        else cout << *number << " is not prime number." << endl;

        break;
    case 2:
        Palindrome::header();
        Palindrome::menu(*number);

        if (Palindrome::palindrome(*number)) {
            cout << *number << " is palindrome number." << endl;
        }
        else cout << *number << " is not palindrome number." << endl;

        break;
    case 3:

        SomaPP::header();

        cout << "Sum of number_0[] is " << SomaPP::sumPP(number_0, 20) << endl;
        cout << "Sum of number_1[] is " << SomaPP::sumPP(number_1, 30) << endl;

        break;
    case 4:
        
        PrimeList::header();

        std::cout << std::endl;
        std::cout << "Enter the 1o number of range:" << std::endl;
        std::cin >> nInit;
        std::cout << std::endl;
        std::cout << "Enter the 2o number of range:" << std::endl;
        std::cin >> nEnd;

        PrimeList::showPrimeList(PrimeList::primeList(nInit, nEnd));

        break;
    case 5:

        ReverseString::header();
        std::cout << std::endl;
        std::cout << "Enter a string:" << std::endl;
        cin >> str;
        std::cout << ReverseString::reverseString(str) << std::endl;

        break;
    case 6:

        std::cout << std::endl;
        std::cout << "RUN CODE" << std::endl;
        CodeRun::exec();
        break;
    default:
        break;
    }
}

void header() 
{
    cout << "Software Analyst Tests" << endl;
}

void menu() 
{
    cout << endl;
    cout << "Questions" << endl;
    cout << endl;
    cout << "1. Is a Prime Number?" << endl;
    cout << "2. Is a Palindrome Number?" << endl;
    cout << "3. Return sum of integer array values with index in palindromic and prime position." << endl;
    cout << "4. Return the list of prime numbers in descending order." << endl;
    cout << "5. Invert a string." << endl;
    cout << "6. CODE RESULT!." << endl;
    cout << "# Select a answer: ";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
