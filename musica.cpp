# include  < iostream >
# include  < locale >
# include  < string.h >


usando  espa�o para nome  std ;
// 00
typedef  struct  Musica
{
    nome da string;
    cantor de cordas;
    estilo de corda;
    int pos;


    // 01
    void  Insere (string stnome, string stcantor, string stestilo, int stpos) // Essa fun��o inicia uma playlis (OBS: Fiz dessa forma para n�o ficar preenchendo toda hora
    {
        nome = stnome;
        cantor = stcantor;
        estilo = estestilo;
        pos = stpos;
    }

    void  Imprime () // Imprime ou conte�do da Playlis
    {
        setlocale (LC_ALL, " portugu�s " );
        cout << " \ n Nome da m�sica: " << nome << " \ n " ;
        cout << " Cantor ou Banda: " << cantor << " \ n " ;
        cout << " G�nero da M�sica: " << estilo << " \ n " ;
        cout << " Posi��o no seu ranking: " << pos << " \ n \ n " ;

    }
};

// 02
void  ExibirInfo ( M�sicas musicais [], int n) // Recebe um n�mero inteiro e imprime uma m�sica correspondente a uma posi��o informada
{
    cout << " Informe um n�mero de 1 a 5 " << endl;
    cin >> n;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        if (n == m�sicas [i]. pos )
        {
            m�sicas [i]. Imprime ();
        }
        outro
        {
            cout << " Valor Inv�lido " << endl;
        }
    }

}

// 03
void  ExibirEstilo ( M�sicas musicais [], string e) // Esta fun��o recebe uma string e, refere-se a um estilo musical e verifica se esse estilo est� na playlist.
{
    cout << " Digite um estilo Musical (Gospel, Sertaneja, MPB, Pop, Internacional, Pagode Baiano) " << endl;
    cin >> e;
    cout << " \ n " ;

    for ( int i = 0 ; i < 5 ; i ++)
    {

        if (m�sicas [i]. estilo == e)
        {
            m�sicas [i]. Imprime ();
        }
        outro
        {

            cout << " N�o h� m�sica nenhuma " << e << " na sua playlist " << endl;
        }
    }
}
// 04
void  NomeArtista ( M�sicas musicais [], seq��ncia de caracteres f) // Est� fun��o recebe uma sequ�ncia de caracteres para o nome de um artista e verifica se h� alguma m�sica que est� na lista de reprodu��o
{
    setlocale (LC_ALL, " portugu�s " );
    bool x;
    cout << " Digite o nome de um artista " << endl;
    cin. ignore ();
    getline (cin, f);

    for ( int i = 0 ; i < 5 ; i ++)
    {

        if (m�sicas [i]. cantor == f)
        {
            // x = 1;
            cout << f << " est� presente na playlist e canta como m�sicas " << m�sicas [i]. nome << endl;
        }
        outro
        {
            // x = 0;
            cout << " N�o est� presente na playlist " << endl;
        }
        cout << " \ n " ;
    }
    / * se (x == 1)
    {
        cout << f << "est� presente na playlist" << endl;
    }
    outro
    {
        cout << f << "N�o est� presente na playlist" << endl;
    } * /
}

// 05
 menu vazio (Musica musicas [], int n, string e, string f) // MEnu de op��es.
{
    setlocale (LC_ALL, " portugu�s " );
    int escolha = 0 ;
    Faz
    {
        cout << " ----- MENU DE OP��ES ----- " << endl;
        cout << " DIGITE 1 PARA EXIBIR INFORMA��ES SOBRE AS M�SICAS " << endl;
        cout << " DIGITE 2 PARA BUSCA POR RANKING " << endl;
        cout << " DIGITE 3 PARA BUSCA POR G�NERO " << endl;
        cout << " DIGITE 4 PARA BUSCA POR CANTOR " << endl;
        cout << " \ n " ;
        cin >> escolha;
        switch (escolha)
        {
        caso  1 :
            for ( int i = 0 ; i < 5 ; i ++)
            {
                m�sicas [i]. Imprime ();
            }
            quebrar ;

        caso  2 :
            ExibirInfo ( m�sicas , n);
            quebrar ;

        caso  3 :
            ExibirEstilo ( m�sicas , e);
            quebrar ;

        caso  4 :
            NomeArtista ( m�sicas , f);

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

    m�sicas [ 0 ] = m1;
    m�sicas [ 1 ] = m2;
    m�sicas [ 2 ] = m3;
    m�sicas [ 3 ] = m4;
    m�sicas [ 4 ] = m5;


    m�sicas [ 0 ]. Insere ( " Rebolation " , " Leo Santana " , " Pagode Baiano " , 1 );
    m�sicas [ 1 ]. Insere ( " Balada Boa " , " Gusttavo Lima " , " Sertaneja " , 2 );
    m�sicas [ 2 ]. Insere ( " Correrei " , " Gabriela Rocha " , " Gospel " , 3 );
    m�sicas [ 3 ]. Insere ( " Insubstitu�vel " , " Luma Elpidio " , " Gospel " , 4 );
    m�sicas [ 4 ]. Insere ( " Que amor � esse? " , " Luma Elpidio " , " Gospel " , 5 );

    menu (m�sicas, n, e, f);

    retornar  0 ;
