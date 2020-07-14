#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

using namespace std;

void jogoDaForca()
{
    char palavra[30], letra[1], secreta[30];
    string dica;
    int tam, i, j, chances, acertos;
    bool acerto;

    chances = 6;
    tam     = 0;
    i       = 0;
    j       = 0;
    acerto  = false;
    acertos = 0;

    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: \n";
    cin >> palavra;
    system("clear");

    cout << "Informe a dica \n";
    cin.ignore();
    getline(cin, dica);

    while(palavra[i] != '\0')
    {
        i++;
        tam++;
    }

    for(i=0; i<30; i++)
    {
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos < tam))
    {
        cout << "Chances restantes: " << chances <<"\n\n";
        cout << "Palavra secreta: ";

        for(i=0; i<tam; i++)
        {
            cout << secreta[i];
        }

        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];

        for(i=0; i<tam; i++)
        {
            if(palavra[i] == letra[0])
            {
                acerto     = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        if(!acerto)
        {
            chances--;
        }

        acerto = false;
        system("clear");
    }

    if(acertos == tam)
    {
        cout <<"\n\n\n**********Você venceu!!********** \n";
    }
    else
    {
        cout <<"\n\n\n----------Você perdeu! :(---------- \n\n";
    }

    system("pause");
    int main();
    main();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char op ='0';

    cout << "\n\t\t O que você deseja? \n\n";
    cout << "\n\n (1) Jogar \n (2) Sair \n\n";
    op = getchar();

    if(op == '1')
    {
        jogoDaForca();
    }

    else if (op == '2')
    {
        exit(0);
    }
    else
    {
        cout << "Opção inválida \n";
        main();
    }

    return 0;
}


