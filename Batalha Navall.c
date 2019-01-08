#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>


void main ()
{

    const int  L=10, C=10,N=22,no=10;

    int i=0,j=0,h,sub,hidrocontinuar,cr=0, n,u,portaaviao,barcos_proprios=22,barcos_cpu=22, jogadas=0,
        jogadascpu=0,acertos,acertoscpu=0,cont=0,repeticao=1,contador=1,cpu=0,media,mediacpu, ac=1,m,p,
        repeti=0,jogo=0,maior=0,jogador=0, jogador1=0,jogador2=0,jogador3=0,jogador4=0,partidas=0,primeiro=0,segundo=0,
        terceiro=0,quarto=0,quinto=0,inicio,sair,torneio,ultimo,k=0,w=0,q=0; // Variáveis
    char A[L][C],l, B[L][C], D[L][C], t, nome[no],nome1[no],nome2[no],nome3[no],nome4[no],ultimonome,recordnome,vida[N],vidascpu[N];
    while (jogo = '1' || partidas<2)
    {
        torneio=primeiro;
        ultimo=quinto;

        if ( partidas == 2)
        {
            system("cls");
            system("color 4F");
            printf("\t\t\t\t\t\t\t\t\t##### #### #### #   # ##### # #### \n");
            printf("\t\t\t\t\t\t\t\t\t  #   #  # #  # ##  # #     # #  # \n");
            printf("\t\t\t\t\t\t\t\t\t  #   #  # #### # # # ####  # #  # \n");
            printf("\t\t\t\t\t\t\t\t\t  #   #  # # #  #  ## #     # #  # \n");
            printf("\t\t\t\t\t\t\t\t\t  #   #### #  # #   # ##### # #### \n");
            printf("\n");
            printf ("\n");
            printf ("\n");
            printf("\t\t\t\t\t\t     ____________________       \n");
            printf("\t\t\t\t\t\t   /|                    |\\    \n");
            printf("\t\t\t\t\t\t /  |                    | \\   \n");
            printf("\t\t\t\t\t\t |  |                    |  |   \n");
            printf("\t\t\t\t\t\t  \\ |                    | /   \n");
            printf("\t\t\t\t\t\t   \\|                    |/    \n"); // Graphics.h??? coisa de LOSER
            printf("\t\t\t\t\t\t    |       CAMPEAO       |      \n");
            printf("\t\t\t\t\t\t     \\     -------      /      \n");
            printf("\t\t\t\t\t\t      \\                /       \n");
            printf("\t\t\t\t\t\t       \\              /        \n");
            printf("\t\t\t\t\t\t        |            |          \n");
            printf("\t\t\t\t\t\t         |          |           \n");
            printf("\t\t\t\t\t\t          |        |            \n");
            printf("\t\t\t\t\t\t           |      |             \n");
            printf("\t\t\t\t\t\t           |      |             \n");
            printf("\t\t\t\t\t\t      _____|      |_____        \n");
            printf ("\n");
            printf ("\n");
            printf ("\n");
            printf ("\n");
            printf ("\t\t\t\t\t\t O TORNEIO CHEGOU AO FIM, E O CAMPEAO FOI O %c COM %d ACERTOS\n",recordnome, torneio);
            printf ("\n");
            printf ("\n");
            printf ("\n");
            printf ("\t\t\t\t\t\t E O ULTIMO COLOCADO OU SEJA EM 5 COLOCACAO FICOU O PARTICIPANTE %c COM %d ACERTOS\n",ultimonome, ultimo);
            printf("\n");
            printf ("pressione 'a'  para sair");
            scanf ("%d", &sair);
            if (sair == 'a')
            {
                exit(0);
            }
        }

        int i=0,j=0,h,sub,hidro,nome,continuar,cr=0, n,u,portaaviao,barcos_proprios=22,barcos_cpu=22, jogadas=0,
            jogadascpu=0,acertos=0,acertoscpu=0,cont=0,repeticao=1,contador=1,cpu=0,media,mediacpu, ac=1,m,p,
            repeti=0,jogo=0;
        system("cls");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        system("color 3F");
        Beep(660,100);
        Sleep(110); //Beep que faz a emissão do som e Sleep para esperar um tempo para o outro som ser emitido.
        Beep(660,100);
        Sleep(250);
        Beep(660,100);
        Sleep(250);
        Beep(510,100);
        Sleep(80);
        Beep(660,100);
        Sleep(250);
        Beep(770,100);
        Sleep(300);
        Beep(380,100);
        Sleep(375);
        printf("\t\t\t\t\t\t####  #### ##### #### #    #  # ####   #    # #### #      #  #### #\n");
        printf("\t\t\t\t\t\t#  ## #  #   #   #  # #    #  # #  #   ##   # #  # #      #  #  # #\n");
        printf("\t\t\t\t\t\t####  ####   #   #### #    #### ####   #  # # ####  #    #   #### #\n");
        printf("\t\t\t\t\t\t#  ## #  #   #   #  # #    #  # #  #   #   ## #  #   #  #    #  # #\n");
        printf("\t\t\t\t\t\t####  #  #   #   #  # #### #  # #  #   #    # #  #    ##     #  # ####\n");
        printf("\t\t\t\t\t\t------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf ("\t\t\t\t\t\t\t\t\tRESUMO DE JOGO \n");
        printf("\n");
        printf("\n");
        printf ("\t\t\t\t\t\t\tO jogo e representado por duas matrizes, uma para observacao\n");
        printf ("\t\t\t\t\t\te outra para definicao do posicionamento de suas embarcacoes, que\n");
        printf ("\t\t\t\t\t\tvoce pode colocar manualmente, enquanto a CPU faz isso aleatoriamente,\n");
        printf ("\t\t\t\t\t\tcom tiros voce devera tentar destruir as embarcacoes do adversario, ganha\n");
        printf ("\t\t\t\t\t\to jogo, aquele que destruir por completo todas embarcacoes do oponente.\n");
        printf ("\t\t\t\t\t\tVoce deve acertar ao todo 8 embarcacoes para ganhar o jogo.\n");
        printf ("\t\t\t\t\t\tVoce pode tambem jogar um torneio entre 5 pessoas, assim no ranking ira,\n");
        printf ("\t\t\t\t\t\taparecer a colocacao do primeiro e ultimo colocado.\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t* SUBMARINO  * HIDROAVIAO   * CRUZADORES   * PORTA - AVIOES ");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t     #            #               ##                #       \n");
        printf ("\t\t\t\t\t\t\t                 # #                                #       \n");
        printf ("\t\t\t\t\t\t\t                                                    #       \n");
        printf ("\t\t\t\t\t\t\t                                                    #       \n");
        printf ("\t\t\t\t\t\t\t                                                    #       \n");
        printf ("\n");
        printf ("\n");
        printf (" \t\t\t\t\t\t\t\t        SUAS EMBARCACOES \n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t\t       - 2 SUBMARINOS \n");
        printf ("\t\t\t\t\t\t\t\t       - 2 HIDROAVIAO \n");
        printf ("\t\t\t\t\t\t\t\t       - 2 CRUZADORES \n");
        printf ("\t\t\t\t\t\t\t\t       - 2 ENCOURACADOS \n\n");
        printf ("\t\t\t\t\t\t\t\t\t\t\t\t NUMERO DE PARTIDAS JOGADAS : %d\n\n\n", partidas);
        if (partidas >=1)
        {
            printf ("\t\t\t\t\t\tJOGADOR 1 - %c FICOU COM %d PONTOS \n",nome, jogador);
        }
        printf ("\n");
        if (partidas >=2)
        {
            printf ("\t\t\t\t\t\tJOGADOR 2 - %c FICOU COM %d PONTOS \n",nome1, jogador1);
        }
        printf ("\n");
        if (partidas >=3)
        {
            printf ("\t\t\t\t\t\tJOGADOR 3 - %c  FICOU COM %d PONTOS \n",nome2, jogador2);
        }
        printf ("\n");
        if (partidas >=4)
        {
            printf ("\t\t\t\t\t\tJOGADOR 4 - %c  FICOU COM %d PONTOS \n",nome3, jogador3);
        }
        printf ("\n");
        if (partidas >=5)
        {
            printf ("\t\t\t\t\t\tJOGADOR 5 - %c  FICOU COM %d PONTOS \n",nome4, jogador4);
        }
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\tDIGITE O NOME DO JOGADOR : ");
        if (partidas == 0)
        {
            fflush(stdin);
            scanf ("%c", &nome);
        }
        if (partidas == 1)
        {
            fflush(stdin);
            scanf ("%c", &nome1);
        }
        if (partidas == 2)
        {
            fflush(stdin);
            scanf ("%c", &nome2);
        }
        if (partidas == 3)
        {
            fflush(stdin);
            scanf ("%c", &nome3);
        }
        if (partidas == 4)
        {
            fflush(stdin);
            scanf ("%c", &nome4);
        }
        if ( jogador > jogador1 && jogador > jogador2 && jogador > jogador3 && jogador > jogador4)
        {
            primeiro = jogador;
            recordnome=nome;
        }
        else if (jogador1 > jogador && jogador1 > jogador2 && jogador1 > jogador3 && jogador1 > jogador4)
        {
            primeiro = jogador1;
            recordnome=nome1;
        }
        else if (jogador2 > jogador && jogador2 > jogador1 && jogador2 > jogador3 && jogador2 > jogador4)
        {
            primeiro = jogador2;
            recordnome=nome2;
        }
        else if (jogador3 > jogador && jogador3 > jogador1 && jogador3 > jogador2 && jogador3 > jogador4)
        {
            primeiro = jogador3;
            recordnome=nome3;
        }
        else if (jogador4 > jogador && jogador4 > jogador1 && jogador4 > jogador2 && jogador4 > jogador3)
        {
            primeiro = jogador4;
            recordnome=nome4;
        }
        if ( jogador  < jogador1 && jogador < jogador2 && jogador < jogador3 && jogador < jogador4)
        {
            quinto = jogador;
            ultimonome = nome;
        }
        else if (jogador1 < jogador && jogador1 < jogador2 && jogador1 < jogador3 && jogador1 < jogador4)
        {
            quinto = jogador1;
            ultimonome = nome1;
        }
        else if (jogador2 < jogador && jogador2 < jogador1 && jogador2 < jogador3 && jogador2 < jogador4)
        {
            quinto = jogador2;
            ultimonome = nome2;
        }
        else if (jogador3 < jogador && jogador3 < jogador1 && jogador3 < jogador2 && jogador3 < jogador4)
        {
            quinto = jogador3;
            ultimonome = nome3;
        }
        else if (jogador4 < jogador && jogador4 < jogador1 && jogador4 < jogador2 && jogador4 < jogador3)
        {
            quinto = jogador4;
            ultimonome = nome4;
        }
        system("cls");
        Beep(100,500);
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t                                           ####\n");
        printf ("\t\t\t\t\t\n");
        printf ("\t\t\t\t\t\t\t\t##### ##### #     ##### ##### ##### ##### ##### #####\n");
        printf ("\t\t\t\t\t\t\t\t#     #   # #     #   # #     #   # #     #   # #   #\n");
        printf ("\t\t\t\t\t\t\t\t#     #   # #     #   # #     #   # #     #   # #   #\n");
        printf ("\t\t\t\t\t\t\t\t#     #   # #     #   # #     ##### #     ##### #   #\n");
        printf ("\t\t\t\t\t\t\t\t#     #   # #     #   # #     #   # #     #   # #   #\n");
        printf ("\t\t\t\t\t\t\t\t##### ##### ##### ##### ##### #   # ##### #   # #####\n");
        printf ("\t\t\t\t\t\t \t\t                                     #");
        printf ("\t#\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t AQUI ESTA O RANKING DO PRIMEIRO E DO ULTIMO COLOCADO DE ACORDO COM SEUS ACERTOS \n\n\n\n");
        if (partidas==0)
        {
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t1  - 0\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t2  - 0\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t3  - 0\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t4  - 0\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t5  - 0\n");
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\t%c\n",27);
        }
        else
        {
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t1 %c - %d\n",recordnome, primeiro);
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t2  %d\n",segundo);
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t3  %d\n",terceiro);
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t4  %d\n",quarto);
            printf ("\t\t\t\t\t\t\t\t\t|                        |\t%c\n",27);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\n");
            printf ("\t\t\t\t\t\t\t\t\t|                        |\n");
            printf ("\t\t\t\t\t\t\t\t\t|\t5 %c - %d\n",ultimonome, quinto);
            printf ("\t\t\t\t\t\t\t\t\t|------------------------|\t%c\n",27);
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t TUDO PRONTO PARA A BATALHA  !\n\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\tDIGITE QUALQUE TECLA PARA CONTINUAR !\n");
        printf ("\n");
        fflush(stdin);
        scanf ("%c", &continuar);
        if (continuar == 'c')
        {
            u++;
        }
        system("cls");
        Beep(700,500);
        for (i=0; i<22; i++)
        {
            vida[i] = 3;
            vidascpu[i] = 3;
        }
        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                A[i][j] = '.'; // Posiçoes da matriz irão receber '.'
            }
        }
        A[1][0] = 'A';    /// Posiçoes de 0 das linhas matrizes irão receber Letras
        A[2][0] = 'B';
        A[3][0] = 'C';
        A[4][0] = 'D';
        A[5][0] = 'E';
        A[6][0] = 'F';
        A[7][0] = 'G';
        A[8][0] = 'H';
        A[9][0] = 'I';
        A[10][0] = 'J';


        A[0][1] = '1'; // Posições 0 das matrizes colunas irão receber Numeros
        A[0][2] = '2';
        A[0][3] = '3';
        A[0][4] = '4';
        A[0][5] = '5';
        A[0][6] = '6';
        A[0][7] = '7';
        A[0][8] = '8';
        A[0][9] = '9';
        A[0][10] = '10';
        printf ("                     COLOQUE AS COORDENADAS DA SUA EMBARCACAO        \n\n\n");
        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                printf("%c\t",A[i][j] );
            }
            printf("\n");
            printf("\n");
            printf("\n");
        }

        h=0;
        while(h<2)
        {
            printf("DIGITE A LINHA E A COLUNA DO SUBMARINO\n");
            fflush(stdin);
            scanf("%c%d",&l,&j); // leitura das posições
            i = (l>64 && l<75)? l - 64 : ((l>96 && l<107)? l - 96 : 0);
            if (i > 0 && j > 0 )  /// Restriçao para tamanho de cordenada
            {
                if (i < 10 && j < 10)
                {
                    if (A[i][j] == '.') // Restrição para ver se pode colocar embarcação no local desejado
                    {
                        A[i][j] = 'S';  // Local desejado e lido rá receber # de cheio
                        system("cls");
                        h++; // limpa tela para imprimir novo tabuleiro com embarcação
                    }
                    printf ("                     COLOQUE AS COORDENADAS DA SUA EMBARCACAO      \n\n");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",A[i][j] ); // Printando o tabuleiro com a embarcação
                        }
                        printf("\n");
                        printf("\n");
                        printf("\n");
                    }
                    // Embarcação aumenta mais um
                }
                else
                {
                    printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
                }
            }
            else
            {
                printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
            }
        }
        h=0; // Embarcação inicia com 0
        while(h<2) // equanto embarcação for menor que 2
        {
            printf ("DIGITE A LINHA E A COLUNA DO HIDROAVIAO\n");
            fflush(stdin);
            scanf("%c%d",&l,&j);
            fflush(stdin);
            i = (l>64 && l<75)? l - 64 : ((l>96 && l<107)? l - 96 : 0);
            if( (i > 0) && (i < 10) && ( j > 0) && (j < 10))
            {
                if(A[i][j] == '.' && A[i+1][j-1] == '.' && A[i+1][j+1]== '.')
                {
                    A[i][j] = 'h';
                    A[i+1][j-1] = 'H';
                    A[i+1][j+1] = 'H';
                    h++;
                    printf ("\n");
                    system("cls");
                    printf ("              COLOQUE AS COORDENADAS DA SUA EMBARCACAO      \n\n");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",A[i][j] );
                        }
                        printf ("\n");
                        printf ("\n");
                        printf ("\n");
                    }
                }
                else
                {
                    printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
                }
            }
            else
            {
                printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
            }
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        cr=0;
        while(cr<2) // equanto embarcação for menor que 2
        {
            printf ("DIGITE A LINHA E COLUNA PARA O CRUZADOR\n");
            scanf("%c%d",&l,&j);
            fflush(stdin);
            i = (l>64 && l<75)? l - 64 : ((l>96 && l<107)? l - 96 : 0);
            if (i > 0 && j > 0 )  /// Restriçao para tamanho de cordenada
            {
                if (i < 10 && j < 10)
                {

                    if (A[i][j] == '.' && A[i][j+1] == '.') // Restrição para ver se pode colocar embarcação no local desejado
                    {
                        A[i][j] = 'C';
                        A[i][j+1] = 'C'; // Local desejado e lido rá receber # de cheio
                        system("cls");
                        cr++; // limpa tela para imprimir novo tabuleiro com embarcação
                    }
                    printf ("                  COLOQUE AS COORDENADAS DA SUA EMBARCACAO      \n\n");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",A[i][j] ); // Printando o tabuleiro com a embarcação
                        }
                        printf("\n");
                        printf("\n");
                        printf("\n");
                    }
                    // Embarcação aumenta mais um
                }
                else
                {
                    printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n\n");
                }
            }
            else
            {
                printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO");
            }
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        portaaviao = 0;
        while (portaaviao<2)
        {
            printf ("DIGITE LINHA E COLUNA DO SEU PORTA AVIAO\n");
            fflush(stdin);
            scanf ("%c%d", &l, &j);
            i = (l>64 && l<75)? l - 64 : ((l>96 && l<107)? l - 96 : 0);
            if ( i > 0 && j > 0)
            {
                if ( i < 10 && j < 10)
                {
                    if (A[i][j] == '.' && A[i+1][j] == '.' && A[i+2][j] && A[i+3][j] == '.' && A[i+4][j] == '.')
                    {
                        A[i][j] = 'P';
                        A[i+1][j] = 'P';
                        A[i+2][j] = 'P';
                        A[i+3][j] = 'P';
                        A[i+4][j] = 'P';
                        system("cls");
                        portaaviao++;
                    }
                    printf ("                   COLOQUE AS COORDENADAS DA SUA EMBARCACAO      \n\n");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",A[i][j] ); // Printando o tabuleiro com a embarcação
                        }
                        printf("\n");
                        printf("\n");
                        printf("\n");
                    }
                }
                else
                {
                    printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
                }
            }
            else
            {
                printf ("COORDENADA PODE ESTAR SENDO USADA OU FORA DE RESTRICAO\n");
            }
        }
        // tabuleiro com os resultados dos tiros
        fflush(stdin);
        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                B[i][j] = '.';
            }
        }
        B[1][0] = 'A';
        B[2][0] = 'B';
        B[3][0] = 'C';
        B[4][0] = 'D';
        B[5][0] = 'E';  // MODIFICANDO A MATRIZ B
        B[6][0] = 'F';
        B[7][0] = 'G';
        B[8][0] = 'H';
        B[9][0] = 'I';
        B[10][0] = 'J';



        B[0][1] = '1';
        B[0][2] = '2';
        B[0][3] = '3';
        B[0][4] = '4';
        B[0][5] = '5';
        B[0][6] = '6';
        B[0][7] = '7';
        B[0][8] = '8';
        B[0][9] = '9';
        B[0][10] = '10';


        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                printf("%c\t",B[i][j] );
            }
            printf("\n");
            printf("\n");
            printf("\n");
        }
        printf ("\n");
        printf ("\n");
        fflush(stdin);
        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                D[i][j] = '.';
            }
        }
        D[1][0] = 'A';
        D[2][0] = 'B';
        D[3][0] = 'C';
        D[4][0] = 'D';
        D[5][0] = 'E';
        D[6][0] = 'F';
        D[7][0] = 'G';
        D[8][0] = 'H';
        D[9][0] = 'I';
        D[10][0] = 'J';


        // MODIFICANDO A MATRIZ D
        D[0][1] = '1';
        D[0][2] = '2';
        D[0][3] = '3';
        D[0][4] = '4';
        D[0][5] = '5';
        D[0][6] = '6';
        D[0][7] = '7';
        D[0][8] = '8';
        D[0][9] = '9';
        D[0][10] = '10';

        //para submarino srand!
        system("cls");
        sub=0;
        srand(time(NULL));
        while (sub < 2)           ////// aleatorio das embarcacoes da cpu
        {
            fflush(stdin);
            i = rand () % 10;
            j = rand () % 10;
            if (i > 1 && j > 1 )
            {
                if (D[i][j] == '.')
                {
                    D[i][j] = 'S';
                    sub++;             // só vai somar quando d na posição dor loop receber a char #
                    system("cls");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",D[i][j] );  // printando a matriz
                        }
                        printf("\n");
                        printf("\n");
                        printf("\n");
                    }
                }
                else
                {
                    // caso o primeiro aleatório não suprir as condições, entao outro aleatório é iniciado
                    i = rand () % 10;
                    j = rand () % 10;
                }
            }
        }
        hidro=0;
        while (hidro < 2)
        {
            i = rand () % 10;
            j = rand () % 10;                                         // aleatório do hidroaviao
            if( (i > 0) && (i < 10) && ( j > 0) && (j < 10))
            {
                if(D[i][j] == '.' && D[i+1][j-1] == '.' && D[i+1][j+1]== '.')
                {
                    D[i][j] = 'H';
                    D[i+1][j-1] = 'H';
                    D[i+1][j+1] = 'H';
                    hidro++;
                }
                system("cls");
                for(i=0; i<L; i++)
                {
                    for(j=0; j<C; j++)
                    {
                        printf("%c\t",D[i][j] );  // printando as matrizer
                    }
                    printf ("\n");
                    printf ("\n");
                    printf ("\n");
                }
            }
            else
            {
                i = rand () % 10;               // inicio de outro aleatório
                j = rand () % 10;
            }
        }
        cr = 0;
        while (cr<2)
        {
            fflush(stdin);
            i = rand () % 10;
            j = rand () % 10;
            if (i > 0 && j > 0 )
            {
                if ( i < 10 & j < 10)
                {
                    if (D[i][j] == '.' && D[i][j+1] == '.')
                    {
                        D[i][j] = 'C';
                        D[i][j+1] = 'C';
                        cr++;
                    }
                    system("cls");
                    for(i=0; i<L; i++)
                    {
                        for(j=0; j<C; j++)
                        {
                            printf("%c\t",D[i][j] );  // printando as matrizes
                        }
                        printf ("\n");
                        printf ("\n");
                        printf ("\n");
                    }
                }
                else
                {
                    i = rand () % 10;
                    j = rand () % 10;
                }
            }
        }
        portaaviao = 0;
        while (portaaviao<2)
        {
            fflush(stdin);
            i = rand () % 10;
            j = rand () % 10;
            if ( i > 0 && j > 0)
            {
                if ( i < 10 && j < 10)
                {
                    if (D[i][j] == '.' && D[i+1][j] == '.' && D[i+2][j] && D[i+3][j] == '.' && D[i+4][j] == '.')
                    {
                        D[i][j] = 'P';
                        D[i+1][j] = 'P';
                        D[i+2][j] = 'P';
                        D[i+3][j] = 'P';
                        D[i+4][j] = 'P';
                        portaaviao++;
                    }
                }
                else
                {
                    i = rand () % 10;
                    j = rand () % 10;
                }
            }
        }
        system("cls");
        printf ("          SEU TABULEIRO DE JOGO           \n\n");
        for (i=0; i<L; i++)
        {
            for (j=0; j<C; j++)
            {
                printf ("%c\t", A[i][j]);
            }
            printf ("\n");
            printf ("\n");
            printf ("\n");
        }
        printf ("\n");
        printf ("\n");
        printf ("               TABULEIRO DA CPU           \n\n");

        for (i=0; i<L; i++)
        {
            for (j=0; j<C; j++)
            {
                printf ("%c\t", D[i][j]);
            }
            printf ("\n");
            printf ("\n");
            printf ("\n");
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        system("cls");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t\t\t\t\t   ####\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t#### #   #  ##### #### #### # ##### #### ####\n");
        printf ("\t\t\t\t\t\t\t#  # #  #   #     #  # #  # #   #   #  # #  #\n");
        printf ("\t\t\t\t\t\t\t#  # ###    #     #### #### #   #   #### #  #\n");
        printf ("\t\t\t\t\t\t\t#  # #  #   #     #  # #    #   #   #  # #  #\n");
        printf ("\t\t\t\t\t\t\t#### #   #  ##### #  # #    #   #   #  # ####\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\tAS EMBARCACOES FORAM POSICIONADAS COM SUCESSO !");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\tDIGITE QUALQUER TECLA PARA CONTINUAR !\n");
        printf ("\n");
        fflush(stdin);
        scanf ("%c", &continuar);
        if (continuar == 'c')
        {
            u++;
        }
        system("cls");
        for (i=0; i<N; i++)
        {
            vida[i] = 219;
            vidascpu[i] = 219;
        }
        for(i=0; i<L; i++)
        {
            for(j=0; j<C; j++)
            {
                printf("%c\t",A[i][j] ); // Printando o tabuleiro com a embarcação
            }
            printf("\t");
            for(j=0; j<C; j++)
            {
                printf("%c\t",B[i][j] ); // Printando o tabuleiro com a embarcação
            }
            printf("\n\n");
            printf ("\n");
        }
        printf("\n");
        printf("\n");
        system("color 3F");
        while (barcos_proprios > 0 && barcos_cpu > 0  )
        {


            system("color 3F");
            w=0;
            m=0;
            p=0;
            do
            {
                if (k==1)
                {
                    printf ("\t\t\t\t\t\t\t\t\t\t\t\tVOCE ACERTOU UMA EMBARCAO NESSA COORDENADA, PODE DAR OUTRO TIRO CAPITAO !");
                }
                printf ("\n");
                printf ("\n");
                k=0;
                printf ("AGORA E A SUA VEZ ! DIGITE A LOCALIZACAO DO SEU TIRO :  ");
                system("color 3F");
                fflush(stdin);
                scanf ("%c%d", &l,&j);
                repeti++;

                i = (l>64 && l<75)? l - 64 : ((l>96 && l<107)? l - 96 : 0);
                if (B[i][j] == '.')
                {
                    if (i > 0 && j > 0 && i < 10 && j < 10)
                    {
                        if (D[i][j] == 'S' || D[i][j] == 'H' || D[i][j] == 'C' || D[i][j] == 'P')
                        {
                            //Beep(1000,700);
                            B[i][j] = 'X';
                            barcos_cpu--;
                            cont++;
                            jogadas++;
                            acertos++;
                            p=1;
                            repeti--;
                            k++;
                            vidascpu[barcos_cpu] = 176;
                            system("color 4F");
                        }

                        if (D[i][j] == '.')
                        {
                            B[i][j] = 'o';
                            jogadas++;
                            cont++;
                            system("color 1F");
                            w=1;
                        }
                    }
                }
                else
                {
                    printf ("SUAS COORDENADAS DO TIRO ESTAO FORA DAS RESTRICOES\n\n");
                }
            }
            while (k == 1);
            repeticao++;
            Sleep(200);
            srand (time(NULL));
            while (cpu < contador)
            {
                do
                {
                    q=0;
                    i = rand () % 10;
                    j = rand () % 10;
                    if (i > 0 && j > 0 && i < 10 && j < 10)
                    {
                        if (A[i][j] == 'h')
                        {
                            if (A[i+1][j-1] == 'H')
                            {
                                Beep(1000,300);
                                barcos_proprios--;
                                jogadascpu++;
                                acertoscpu++;
                                cpu++;
                                A[i+1][j-1] = '&';
                                q++;
                                vida[barcos_proprios] = 176;
                                m=1;
                            }
                            Beep(1000,300);
                            barcos_proprios--;
                            jogadascpu++;
                            acertoscpu++;
                            cpu++;
                            A[i][j] = 'X';
                            m=1;
                            vida[barcos_proprios] = 176;
                            q++;
                        }
                        else if (A[i][j] == 'S' || A[i][j] == 'H' || A[i][j] == 'C' || A[i][j] == 'P')
                        {
                            Beep(1000,300);
                            barcos_proprios--;
                            jogadascpu++;
                            acertoscpu++;
                            cpu++;
                            A[i][j] = 'X';
                            m=1;
                            vida[barcos_proprios] = 176;
                            q++;
                        }
                        if (A[i][j] == '.')
                        {
                            A[i][j] = 'o';
                            jogadascpu++;
                            cpu++;
                        }
                    }
                    else
                    {
                        i = rand () % 10;
                        j = rand () % 10;
                    }
                }
                while (q==1);
            }

            contador++;
            system("cls");
            system("cls");
            printf ("\n");
            printf ("\t\t\t%c------------%c\t\t\t\t\t\t\t\t\t\t\t\t%c--------------------%c\n", 218,191,218,191);
            printf ("\t\t\t|  SEU MAR   |\t%c\t\t\t\t\t\t\t\t\t\t\t|     MAR DA CPU     |\t%c\n",1,2);
            printf ("\t\t\t%c------------%c\t\t\t\t\t\t\t\t\t\t\t\t%c--------------------%c\n",192,217,192,217 );
            printf ("\n");
            printf ("\n\t\t\t\t\t   VIDAS  ");
            for (i=0; i<N; i++)
            {
                printf ("%c",vida[i]);
            }
            printf ("\t\t\t\t\t\t\t VIDAS   ");

            for (i=0; i<N; i++)
            {
                printf ("%c",vidascpu[i]);
            }
            printf ("\n");
            printf ("\n");
            printf ("\n");
            for(i=0; i<L; i++)
            {
                for(j=0; j<C; j++)
                {
                    printf("%c\t",A[i][j] ); // Printando o tabuleiro com a embarcação
                }
                printf("\t");
                //printf ("                      SEU TABULEIRO DE VISAO                   \n\n");
                for(j=0; j<C; j++)
                {
                    printf("%c\t",B[i][j] ); // Printando o tabuleiro com a embarcação
                }
                printf("\n\n");
                printf ("\n");
            }
            printf ("\n");
            printf ("\n");
            printf ("\t%c SUAS VIDAS : %d               \t\t\t\t%c%c\t%c%c\t\t\t\t\t\t       >  VIDAS DA CPU : %d  \n",4, barcos_proprios,17,17,16,16, barcos_cpu);
            printf ("\t%c NUMERO DE JOGADAS SUAS : %d    \t\t\t\t\t\t\t\t\t\t\t       > JOGADAS DA CPU : %d \n",4, jogadas, jogadascpu);
            printf ("\t%c SEUS NUMEROS DE ACERTOS : %d   \t\t\t\t\t\t\t\t\t\t\t       > ACERTOS DA CPU : %d \n",4, acertos,acertoscpu);
            printf ("\n");
            printf ("\n");
            printf ("\n");
            if (w == 1)
            {
                printf ("\t\t\t\t\t\t\t\t\t\t\t\t\t SEU TIRO FOI NA AGUA CAPITAO\n");
            }
            if (m == 1)
            {
                //textcolor(0);
                printf ("\t\t\t\t\t\t\t\t\t\t\t\t\t CPU ACERTOU SUA EMBARCACAO TEVE DIREITO A MAIS UM TIRO\n");
                //textcolor(7);
            }
            if (p == 1)
            {
                printf ("\t\t\t\t\t\t\t\t\t\t\t\t\t VOCE ACERTOU UMA EMBARCACAO\n");
            }
        }
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        system("cls");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        printf ("\t\t\t\t\t\t\t##### # #      #   ##    ####      # #### ####  ####    ####\n");
        printf ("\t\t\t\t\t\t\t#     # # #  # #   #  #  #         # #  # #     #  #    ###\n");
        printf ("\t\t\t\t\t\t\t####  # #  ##  #   #   # ###    #  # #  # #  ## #  #    ##\n");
        printf ("\t\t\t\t\t\t\t#     # #      #   #  #  #      #  # #  # #   # #  #    \n");
        printf ("\t\t\t\t\t\t\t#     # #      #   ###   ####   #### #### ##### ####    ##\n");
        printf ("\n");
        printf ("\n");
        printf ("\n");
        if (barcos_cpu > barcos_proprios)
        {
            printf ("\t\t\t\t\t\t GANHADOR FOI A CPU COM 22 ACERTOS EM %d JOGADAS\n", jogadascpu);
            mediacpu = jogadascpu / acertoscpu;
            printf ("\t\t\t\t\t\t COM UMA MEDIA DE %d TIROS PARA CADA ACERTO\n", mediacpu);
        }
        else
        {
            printf ("\t\t\t\t\t\t PARABENS, VOCE FOI O GANHADOR CAPITAO COM 22 ACERTOS EM %d JOGADAS\n", jogadas);
            media = jogadas / acertos;
            printf ("\n");
            printf ("\t\t\t\t\t\t\t COM UMA MEDIA DE %d TIROS PARA CADA ACERTO\n\n\n", media);
        }
        if (partidas == 0)
        {
            jogador = acertos;
        }
        if (partidas == 1)
        {
            jogador1 = acertos;
        }
        if (partidas == 2)
        {
            jogador2 = acertos;
        }
        if (partidas == 3)
        {
            jogador3 = acertos;
        }
        if(partidas == 4)
        {
            jogador4 = acertos;
        }
        partidas++;

        printf ("\n");
        printf ("\n");
        printf ("\t\t\tDESEJA JOGAR NOVAMENTE ?\n\n");
        printf ("\t\t\tVOCE JOGANDO NOVAMENTE JA IRA ENTRAR EM UM TORNEIO COM ATE 5 JOGADORES\n\n");
        printf ("\t\t\tDIGITE QUALQUER TECLA PARA CONTINUAR !");
        scanf ("%d", &jogo);
    }
    system("pause");
}






