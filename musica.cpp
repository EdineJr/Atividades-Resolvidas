# include  < iostream >
# include  < locale >
# include  < string.h >


usando  espaço para nome  std ;
// 00
typedef  struct  Musica
{
    nome da string;
    cantor de cordas;
    estilo de corda;
    int pos;


    // 01
    void  Insere (string stnome, string stcantor, string stestilo, int stpos) // Essa função inicia uma playlis (OBS: Fiz dessa forma para não ficar preenchendo toda hora
    {
        nome = stnome;
        cantor = stcantor;
        estilo = estestilo;
        pos = stpos;
    }

    void  Imprime () // Imprime ou conteúdo da Playlis
    {
        setlocale (LC_ALL, " português " );
        cout << " \ n Nome da música: " << nome << " \ n " ;
        cout << " Cantor ou Banda: " << cantor << " \ n " ;
        cout << " Gênero da Música: " << estilo << " \ n " ;
        cout << " Posição no seu ranking: " << pos << " \ n \ n " ;

    }
};

// 02
void  ExibirInfo ( Músicas musicais [], int n) // Recebe um número inteiro e imprime uma música correspondente a uma posição informada
{
    cout << " Informe um número de 1 a 5 " << endl;
    cin >> n;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        if (n == músicas [i]. pos )
        {
            músicas [i]. Imprime ();
        }
        outro
        {
            cout << " Valor Inválido " << endl;
        }
    }

}

// 03
void  ExibirEstilo ( Músicas musicais [], string e) // Esta função recebe uma string e, refere-se a um estilo musical e verifica se esse estilo está na playlist.
{
    cout << " Digite um estilo Musical (Gospel, Sertaneja, MPB, Pop, Internacional, Pagode Baiano) " << endl;
    cin >> e;
    cout << " \ n " ;

    for ( int i = 0 ; i < 5 ; i ++)
    {

        if (músicas [i]. estilo == e)
        {
            músicas [i]. Imprime ();
        }
        outro
        {

            cout << " Não há música nenhuma " << e << " na sua playlist " << endl;
        }
    }
}
// 04
void  NomeArtista ( Músicas musicais [], seqüência de caracteres f) // Está função recebe uma sequência de caracteres para o nome de um artista e verifica se há alguma música que está na lista de reprodução
{
    setlocale (LC_ALL, " português " );
    bool x;
    cout << " Digite o nome de um artista " << endl;
    cin. ignore ();
    getline (cin, f);

    for ( int i = 0 ; i < 5 ; i ++)
    {

        if (músicas [i]. cantor == f)
        {
            // x = 1;
            cout << f << " está presente na playlist e canta como músicas " << músicas [i]. nome << endl;
        }
        outro
        {
            // x = 0;
            cout << " Não está presente na playlist " << endl;
        }
        cout << " \ n " ;
    }
    / * se (x == 1)
    {
        cout << f << "está presente na playlist" << endl;
    }
    outro
    {
        cout << f << "Não está presente na playlist" << endl;
    } * /
}

// 05
 menu vazio (Musica musicas [], int n, string e, string f) // MEnu de opções.
{
    setlocale (LC_ALL, " português " );
    int escolha = 0 ;
    Faz
    {
        cout << " ----- MENU DE OPÇÕES ----- " << endl;
        cout << " DIGITE 1 PARA EXIBIR INFORMAÇÕES SOBRE AS MÚSICAS " << endl;
        cout << " DIGITE 2 PARA BUSCA POR RANKING " << endl;
        cout << " DIGITE 3 PARA BUSCA POR GÊNERO " << endl;
        cout << " DIGITE 4 PARA BUSCA POR CANTOR " << endl;
        cout << " \ n " ;
        cin >> escolha;
        switch (escolha)
        {
        caso  1 :
            for ( int i = 0 ; i < 5 ; i ++)
            {
                músicas [i]. Imprime ();
            }
            quebrar ;

        caso  2 :
            ExibirInfo ( músicas , n);
            quebrar ;

        caso  3 :
            ExibirEstilo ( músicas , e);
            quebrar ;

        caso  4 :
            NomeArtista ( músicas , f);

        }
    }
    while (escolha! = 0 );
}


int  main ()
{
    Musica * musicas = nova Musica [ 5 ];
    Musica m1, m2, m3, m4, m5;
    int n;
    string e, f;

    músicas [ 0 ] = m1;
    músicas [ 1 ] = m2;
    músicas [ 2 ] = m3;
    músicas [ 3 ] = m4;
    músicas [ 4 ] = m5;


    músicas [ 0 ]. Insere ( " Rebolation " , " Leo Santana " , " Pagode Baiano " , 1 );
    músicas [ 1 ]. Insere ( " Balada Boa " , " Gusttavo Lima " , " Sertaneja " , 2 );
    músicas [ 2 ]. Insere ( " Correrei " , " Gabriela Rocha " , " Gospel " , 3 );
    músicas [ 3 ]. Insere ( " Insubstituível " , " Luma Elpidio " , " Gospel " , 4 );
    músicas [ 4 ]. Insere ( " Que amor é esse? " , " Luma Elpidio " , " Gospel " , 5 );

    menu (músicas, n, e, f);

    retornar  0 ;
