#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <string.h>
#include <locale.h>


    typedef struct{
        char nome[20];
        char data[250];
        char criador[250];
        char descricao[250];
        char sobre[250];
        char sobre1[250];
        char sobre2[250];
        char sobre3[250];
        char sobre4[250];
        char sobre5[350];
        char sobre6[350];
        char sobre7[250];
        int votos;


    }lan;

    lan info[3];


    void Menu();
    void botaoC();
    void botaoR();
    void infoC();
    void limparpy();
    void limparjv();
    void limparphp();





main()
{

    setlocale(LC_ALL, "Portuguese");




        initwindow(getmaxwidth(),getmaxheight(),"Vota��o melhor linguagem",0,0, false, true);
        bar(1920,1080,0,0);
        setbkcolor(15);

        Menu();





    closegraph();
}


void Menu(){
    char m1[10]="Python";
    char m2[10]="Java";
    char m3[10]= "PHP";
    char BemVindo[200] = "VOTA��O - Qual � sua linguagem favorita  ???";
    char r[15] = "Resultados";
    int gp, gj, gh;
    int indice;
    int tv;
    char converter[3];






    outtextxy(700,10,BemVindo);


    infoC();

    setcolor(0);
    outtextxy(700,10,BemVindo);

    setfillstyle(1,7);
    bar(50,50,150,150);
    setlinestyle(0,0,3);
    setcolor(8);
    rectangle(50,50,150,150);

    setbkcolor(7);
    setcolor(0);
    outtextxy(75,85,m1);

    setfillstyle(1,7);
    bar(50,220,150,320);
    setlinestyle(0,0,3);
    setcolor(8);
    rectangle(50,220,150,320);

    setbkcolor(7);
    setcolor(0);
    outtextxy(80,255,m2);

    setfillstyle(1,7);
    bar(50,390,150,490);
    setlinestyle(0,0,3);
    setcolor(8);
    rectangle(50,390,150,490);

    setbkcolor(7);
    setcolor(0);
    outtextxy(85,430,m3);

    botaoR();




    while (!kbhit())
    {

          if (ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 50 && mousey() < 150) //apararece a janela de informa�oes da lin Python, faz uma ilusao de otica para o botao, e deixar apenas esta janela em destaque apagando qualquer outra antes existente
          {

                indice = 0;

              delay(100);
              setfillstyle(1,8);
              bar(50,50,150,150);
              setlinestyle(0,0,3);
              setcolor(7);
              rectangle(50,50,150,150);

              setbkcolor(8);
              setcolor(4);
              outtextxy(75,85,m1);
              delay(500);

              setfillstyle(1,7);
              bar(50,50,150,150);
              setlinestyle(0,0,3);
              setcolor(8);
              rectangle(50,50,150,150);
              setbkcolor(7);
              setcolor(0);
              outtextxy(75,85,m1);
              delay(500);



                readimagefile("pyton.JPG", 50,50,150,150);
                setfillstyle(1,15);
                bar(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                setlinestyle(0,0,3);
                setcolor(BLUE);
                rectangle(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                setfillstyle(1,3);
                bar(1230,100,1550,450);
                setlinestyle(0,1,3);
                setcolor(3);
                rectangle(1200, 70, 1500, 400);
                readimagefile("criador python.JPG",1200, 70, 1500, 400);



                limparpy();




                botaoC();

                setfillstyle(1,7);
                bar(50,220,150,320);
                setlinestyle(0,0,3);
                setcolor(8);
                rectangle(50,220,150,320);

                setbkcolor(7);
                setcolor(0);
                outtextxy(80,255,m2);

                setfillstyle(1,7);
                bar(50,390,150,490);
                setlinestyle(0,0,3);
                setcolor(8);
                rectangle(50,390,150,490);

                setbkcolor(7);
                setcolor(0);
                outtextxy(85,430,m3);



          }


           if (ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 220 && mousey() < 320) //aparece a janela de informa�oes do JAVA, faz uma ilusao de otica para o botao, e deixar apenas esta janela em destaque apagando qualquer outra antes existente
          {
                    indice = 1;

                  delay(100);
                  setfillstyle(1,8);
                  bar(50,220,150,320);
                  setlinestyle(0,0,3);
                  setcolor(7);
                  rectangle(50,220,150,320);
                  setbkcolor(8);
                  setcolor(4);
                  outtextxy(80,255,m2);
                  delay(500);

                  setfillstyle(1,7);
                  bar(50,220,150,320);
                  setlinestyle(0,0,3);
                  setcolor(8);
                  rectangle(50,220,150,320);
                  setbkcolor(7);
                  setcolor(0);
                  outtextxy(80,255,m2);
                    delay(500);

                    readimagefile("JAVA.PNG",50,220,150,320);
                    setfillstyle(1,15);
                    bar(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                    setlinestyle(0,0,3);
                    setcolor(RED);
                    rectangle(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                    setfillstyle(1,RED);
                    bar(1230,100,1550,450);
                    setlinestyle(0,1,3);
                    setcolor(RED);
                    rectangle(1200, 70, 1500, 400);
                    readimagefile("criador java.PNG",1200, 70, 1500, 400);

                    limparjv();

                    setcolor(0);
                    setlinestyle(3,1,2);
                    setcolor(0);
                    rectangle(310,50,1100,800);


                    botaoC();

                    setfillstyle(1,7);
                    bar(50,50,150,150);
                    setlinestyle(0,0,3);
                    setcolor(8);
                    rectangle(50,50,150,150);

                    setbkcolor(7);
                    setcolor(0);
                    outtextxy(75,85,m1);

                    setfillstyle(1,7);
                    bar(50,390,150,490);
                    setlinestyle(0,0,3);
                    setcolor(8);
                    rectangle(50,390,150,490);

                    setbkcolor(7);
                    setcolor(0);
                    outtextxy(85,430,m3);






          }
        if (ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 390 && mousey() < 490) //apararece a janela de informa�oes da lin PHP, faz uma ilusao de otica para o botao, e deixar apenas esta janela em destaque apagando qualquer outra antes existente
          {
                    indice = 2;

                  delay(100);
                  setfillstyle(1,8);
                  bar(50,390,150,490);
                  setlinestyle(0,0,3);
                  setcolor(7);
                  rectangle(50,390,150,490);
                  setbkcolor(8);
                  setcolor(4);
                  outtextxy(85,430,m3);
                  delay(500);

                  setfillstyle(1,7);
                  bar(50,390,150,490);
                  setlinestyle(0,0,3);
                  setcolor(8);
                  rectangle(50,390,150,490);
                  setbkcolor(7);
                  setcolor(0);
                  outtextxy(85,430,m3);
                  delay(500);

                    readimagefile("php.PNG",50,390,150,490);
                    setfillstyle(1,15);
                    bar(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                    setlinestyle(0,0,3);
                    setcolor(9);
                    rectangle(getmaxwidth() - 300, 40, 300, getmaxheight() - 200);
                    setfillstyle(1,9);
                    bar(1230,100,1550,450);
                    setlinestyle(0,1,3);
                    setcolor(9);
                    rectangle(1200, 70, 1500, 400);
                    readimagefile("php criador.PNG",1200, 70, 1500, 400);

                    limparphp();

                    setcolor(0);
                    setlinestyle(3,1,2);
                    setcolor(0);
                    rectangle(310,50,1100,800);


                    botaoC();


                    setfillstyle(1,7);
                    bar(50,50,150,150);
                    setlinestyle(0,0,3);
                    setcolor(8);
                    rectangle(50,50,150,150);

                    setbkcolor(7);
                    setcolor(0);
                    outtextxy(75,85,m1);

                    setfillstyle(1,7);
                    bar(50,220,150,320);
                    setlinestyle(0,0,3);
                    setcolor(8);
                    rectangle(50,220,150,320);

                    setbkcolor(7);
                    setcolor(0);
                    outtextxy(80,255,m2);




          }














            if(ismouseclick(WM_LBUTTONDOWN) &&
                mousex() > 345 && mousex() < 445 &&
                mousey() > 493 && mousey() < 528){ // esse if faz aparecer a janela de confirma��o do voto

                   char sim[10]="SIM";
                   char nao[10]="N�O";
                   char desejo[100]="Deseja votar nesta linguagem??";

                   char confirma[15] = "    Votar";

                   setfillstyle(1,8);
                   bar(345,493,445,528);
                   setlinestyle(0,1,2);
                   setcolor(0);
                   rectangle(345,493,445,528);
                   setbkcolor(8);
                   setcolor(0);
                   outtextxy(364, 500,confirma);

                   delay(500);

                   setfillstyle(1,15);
                   bar(345,493,445,528);
                   setlinestyle(0,1,2);
                   setcolor(0);
                   rectangle(345,493,445,528);
                   setbkcolor(15);
                   setcolor(0);
                   outtextxy(364, 500,confirma);



                   setfillstyle(1,7);
                   bar(900,550,400,700);
                   setlinestyle(0,0,3);
                   setcolor(0);
                   rectangle(900,550,400,700);


                   setfillstyle(1,15);
                   bar(500,650,600,685);
                   setlinestyle(0,0,3);
                   rectangle(500,650,600,685);
                   setcolor(0);
                   setbkcolor(15);
                   outtextxy(537,660,sim);


                   setfillstyle(1,15);
                   bar(700,650,800,685);
                   setlinestyle(0,0,3);
                   rectangle(700,650,800,685);
                   setcolor(0);
                   setbkcolor(15);
                   outtextxy(738,660,nao);


                   setbkcolor(7);
                   setcolor(0);
                   outtextxy(550,585, desejo);






	}


            if(ismouseclick(WM_LBUTTONDOWN) &&
                mousex() > 500 && mousex() < 600 &&
                mousey() > 650 && mousey() < 685){ //esse if faz ilus�o de otica para o botao(SIM) e tambem apaga a tela voltando a tela original


                 char sim[10]="SIM";

                   setfillstyle(1,8);
                   bar(500,650,600,685);
                   setlinestyle(0,0,3);
                   rectangle(500,650,600,685);
                   setcolor(0);
                   setbkcolor(8);
                   outtextxy(537,660,sim);

                   delay(500);


                        setfillstyle(1,15);
                        bar(getmaxwidth() - 150, 38, 250, getmaxheight() - 150);
                        setlinestyle(0,0,0);
                        setcolor(15);
                        rectangle(getmaxwidth() - 250, 38, 250, getmaxheight() - 150);
                        delay(500);

                        setfillstyle(1,7);
                        bar(50,50,150,150);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,50,150,150);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(75,85,m1);

                        setfillstyle(1,7);
                        bar(50,220,150,320);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,220,150,320);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(80,255,m2);

                        setfillstyle(1,7);
                        bar(50,390,150,490);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,390,150,490);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(85,430,m3);

                        info[indice].votos+=1;

                        printf("linguagens : %s, total de votos: %d\n\n", info[indice].nome, info[indice].votos);














                }

            if(ismouseclick(WM_LBUTTONDOWN) &&
                mousex() > 700 && mousex() < 800 &&
                mousey() > 650 && mousey() < 685){     //esse if faz ilus�o de otica para o botao(NAO) e tambem apaga a tela voltando a tela original

                char nao[10]="N�O";


                   setfillstyle(1,7);
                   bar(700,650,800,685);
                   setlinestyle(0,0,3);
                   rectangle(700,650,800,685);
                   setcolor(0);
                   setbkcolor(7);
                   outtextxy(738,660,nao);

                   delay(500);


                        setfillstyle(1,15);
                        bar(getmaxwidth() - 150, 38, 250, getmaxheight() - 150);
                        setlinestyle(0,0,0);
                        setcolor(15);
                        rectangle(getmaxwidth() - 250, 38, 250, getmaxheight() - 150);
                        delay(500);

                        setfillstyle(1,7);
                        bar(50,50,150,150);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,50,150,150);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(75,85,m1);

                        setfillstyle(1,7);
                        bar(50,220,150,320);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,220,150,320);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(80,255,m2);

                        setfillstyle(1,7);
                        bar(50,390,150,490);
                        setlinestyle(0,0,3);
                        setcolor(8);
                        rectangle(50,390,150,490);

                        setbkcolor(7);
                        setcolor(0);
                        outtextxy(85,430,m3);




                }



            if(ismouseclick(WM_LBUTTONDOWN) &&
                mousex() > 50 && mousex() < 150 &&
                mousey() > 590 && mousey() < 630){// esse if cria outra janela apos clicarmos no botao resultados e nesta tela aparece os resultados da vota��o por meio de um grafico de pizza, declarando assim o vencedor




                    tv = info[0].votos + info[1].votos + info[2].votos;

                        gp = ((info[0].votos * 360) / tv);
                        gh = ((info[1].votos * 360) / tv);
                        gj = ((info[2].votos * 360) / tv) + gh;




                    setfillstyle(1,8);
                    bar(50,590,150,630);
                    setbkcolor(8);
                    setcolor(GREEN);
                    outtextxy(65,600, r);

                    delay(500);

                    setlinestyle(2,1,4);
                    setcolor(GREEN);
                    rectangle(50,590,150,630);
                    setfillstyle(1,7);
                    bar(50,590,150,630);
                    setbkcolor(7);
                    setcolor(GREEN);
                    outtextxy(65,600, r); // ilus�o de ot�ca bot�o


                    initwindow(900,500,"Resultados",300,300);
                    setbkcolor(WHITE);
                    bar(900,900,0,0);
                    setcolor(BLACK);
                    settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
                    outtextxy(350,25,r);



                    //circulo do python
                    setcolor(0);
                    sprintf(converter,"%d", info[0].votos);
                    outtextxy(630,160,converter);

                    setcolor(GREEN);
                    outtextxy(530,160,m3);
                    circle(500,160,20);
                    setfillstyle(SOLID_FILL,GREEN);
                    floodfill(500,160,GREEN);
                    pieslice(250,270,0,360,150);

                    setcolor(0);
                    sprintf(converter,"%d", info[2].votos);
                    outtextxy(630,340,converter);


                    setcolor(MAGENTA);
                    outtextxy(530,340,m3);
                    circle(500,340,20);
                    setfillstyle(SOLID_FILL,MAGENTA);
                    floodfill(500,340,MAGENTA);
                    pieslice(250,270,0,gj,150);

                    //circulo do php
                    setcolor(0);
                    sprintf(converter,"%d", info[1].votos);
                    outtextxy(630,250,converter);

                    setcolor(RED);
                    outtextxy(530,250,m2);
                    circle(500,250,20);
                    setfillstyle(SOLID_FILL,RED);
                    floodfill(500,250,RED);
                    pieslice(250,270,0,gh,150);













                }




























         clearmouseclick(WM_LBUTTONDOWN);
    }




    }

        void botaoC(){
            char confirma[15] = "    Votar";

            setlinestyle(0,1,2);
            setcolor(0);
            rectangle(345,493,445,528);
            setbkcolor(15);
            setcolor(0);
            outtextxy(364, 500,confirma);
        }
	void botaoR(){
            char r[15] = "Resultados";
       	    setlinestyle(2,1,4);
            setcolor(GREEN);
            rectangle(50,590,150,630);
            setfillstyle(1,7);
            bar(50,590,150,630);
            setcolor(GREEN);
            outtextxy(65,600, r);




	}

	void infoC(){


	    char espaco[200]="----------------------------------------------------------------------------------";

    strcpy(info[0].nome,"Python");
    strcpy(info[0].data,"   -->  Surgiu em 20 de fevereiro de 1991");
    strcpy(info[0].criador,"  Criador:  Guido van Rossum (Haarlem, 31 de janeiro de 1956 ) � um matem�tico e");
    strcpy(info[0].descricao,"programador de computadores holand�s, mais conhecido por ser o autor da linguagem de programa��o Python.");
    strcpy(info[0].sobre,"  O Python � uma linguagem de programa��o de alto n�vel utilizada em diferentes tipos de aplica��es, ");
    strcpy(info[0].sobre1," como para o desenvolvimento web, em Machine Learning, no desenvolvimento de jogos e muito mais.");
    strcpy(info[0].sobre2," N�o � � toa que ela ocupa o segundo lugar entre as linguagens mais populares do mundo,");
    strcpy(info[0].sobre3,"de acordo com o relat�rio de classifica��o RedMonk referente a meados de janeiro de 2021.");
    strcpy(info[0].sobre4,"  O Python � uma linguagem de programa��o interpretada, interativa e orientada a objetos. O mesmo incorporou");
    strcpy(info[0].sobre5,"din�mica, tipos de dados din�micos de alto n�vel e classes. H� suporte a v�rios paradigmas de programa��o");
    strcpy(info[0].sobre6,"al�m da programa��o orientada a objetos, tal como programa��o procedural e funcional. O Python fornece ao");
    strcpy(info[0].sobre7,"desenvolvedor um poder not�vel aliado a uma sintaxe simples de clara.");

    strcpy(info[1].nome,"Java");
    strcpy(info[1].data," -->  Come�ou a ser criada em 1991");
    strcpy(info[1].criador,"  Criador: James Gosling � um programador canadense, mais conhecido como o");
    strcpy(info[1].descricao,"pai da linguagem de programa��o Java.");
    strcpy(info[1].sobre,"  Java � uma linguagem de programa��o orientada a objetos que come�ou a ser criada em 1991, na Sun");
    strcpy(info[1].sobre1,"Microsystems. Teve inicio com o Green Project, no qual os mentores foram Patrick Naughton,");
    strcpy(info[1].sobre2,"Mike Sheridan, e James Gosling. Este projeto n�o tinha inten��o de criar uma linguagem de programa��o,");
    strcpy(info[1].sobre3,"mais sim de antecipar a ""pr�xima onda"" que aconteceria na �rea da inform�tica e programa��o. Os idealizadores");
    strcpy(info[1].sobre4,"do projeto acreditavam que em pouco tempo os aparelhos dom�sticos e os computadores teriam uma liga��o.");
    strcpy(info[1].sobre5,"Nesta �poca, a internet estava ficando cada vez mais popular, e a equipe do Green Project come�ou a pensar em");
    strcpy(info[1].sobre6,"aplica��es para o Oak na internet, onde a palavra chave � intera��o. Eles conseguiram adaptar a linguagem Oak");
    strcpy(info[1].sobre7,"para a internet, e em 1995 foi lan�ado o Java, que era uma vers�o atualizada do Oak para a internet.");



    strcpy(info[2].nome,"PHP");
    strcpy(info[2].data," --> Surgiu em 1994");
    strcpy(info[2].criador,"  Criado por Rasmus Lerdof, a primeira encarna��o do PHP foi um simples conjunto de bin�rios");
    strcpy(info[2].descricao,"Common Gateway Interface (CGI) escrito em linguagem de programa��o C.");
    strcpy(info[2].sobre,"  Originalmente usado para acompanhamento de visitas para seu curr�culo online, ele nomeou o conjunto de");
    strcpy(info[2].sobre1,"scripts de ""Personal Home Page Tools"" mais frequentemente referenciado como ""PHP Tools."" Ao longo do tempo, ");
    strcpy(info[2].sobre2,"mais funcionalidades foram desejadas, e Rasmus reescreveu o PHP Tools, produzindo uma maior e rica ");
    strcpy(info[2].sobre3,"implementa��o. Este novo modelo foi capaz de intera��es com Banco de Dados e mais, fornecendo uma estrutura");
    strcpy(info[2].sobre4,"no qual os usu�rios poderiam desenvolver simples e din�micas aplica��es web, como um livros de visitas.");
    strcpy(info[2].sobre5,"");
    strcpy(info[2].sobre6,"");
    strcpy(info[2].sobre7,"");
















	}

	void limparpy(){


	    char espaco[200]="----------------------------------------------------------------------------------";

	    strcpy(info[0].nome,"Python");
    strcpy(info[0].data,"   -->  Surgiu em 20 de fevereiro de 1991");
    strcpy(info[0].criador,"  Criador:  Guido van Rossum (Haarlem, 31 de janeiro de 1956 ) � um matem�tico e");
    strcpy(info[0].descricao,"programador de computadores holand�s, mais conhecido por ser o autor da linguagem de programa��o Python.");
    strcpy(info[0].sobre,"  O Python � uma linguagem de programa��o de alto n�vel utilizada em diferentes tipos de aplica��es, ");
    strcpy(info[0].sobre1," como para o desenvolvimento web, em Machine Learning, no desenvolvimento de jogos e muito mais.");
    strcpy(info[0].sobre2," N�o � � toa que ela ocupa o segundo lugar entre as linguagens mais populares do mundo,");
    strcpy(info[0].sobre3,"de acordo com o relat�rio de classifica��o RedMonk referente a meados de janeiro de 2021.");
    strcpy(info[0].sobre4,"  O Python � uma linguagem de programa��o interpretada, interativa e orientada a objetos. O mesmo incorporou");
    strcpy(info[0].sobre5,"din�mica, tipos de dados din�micos de alto n�vel e classes. H� suporte a v�rios paradigmas de programa��o");
    strcpy(info[0].sobre6,"al�m da programa��o orientada a objetos, tal como programa��o procedural e funcional. O Python fornece ao");
    strcpy(info[0].sobre7,"desenvolvedor um poder not�vel aliado a uma sintaxe simples de clara.");

    strcpy(info[1].nome,"Java");
    strcpy(info[1].data," -->  Come�ou a ser criada em 1991");
    strcpy(info[1].criador,"  Criador: James Gosling � um programador canadense, mais conhecido como o");
    strcpy(info[1].descricao,"pai da linguagem de programa��o Java.");
    strcpy(info[1].sobre,"  Java � uma linguagem de programa��o orientada a objetos que come�ou a ser criada em 1991, na Sun");
    strcpy(info[1].sobre1,"Microsystems. Teve inicio com o Green Project, no qual os mentores foram Patrick Naughton,");
    strcpy(info[1].sobre2,"Mike Sheridan, e James Gosling. Este projeto n�o tinha inten��o de criar uma linguagem de programa��o,");
    strcpy(info[1].sobre3,"mais sim de antecipar a ""pr�xima onda"" que aconteceria na �rea da inform�tica e programa��o. Os idealizadores");
    strcpy(info[1].sobre4,"do projeto acreditavam que em pouco tempo os aparelhos dom�sticos e os computadores teriam uma liga��o.");
    strcpy(info[1].sobre5,"Nesta �poca, a internet estava ficando cada vez mais popular, e a equipe do Green Project come�ou a pensar em");
    strcpy(info[1].sobre6,"aplica��es para o Oak na internet, onde a palavra chave � intera��o. Eles conseguiram adaptar a linguagem Oak");
    strcpy(info[1].sobre7,"para a internet, e em 1995 foi lan�ado o Java, que era uma vers�o atualizada do Oak para a internet.");



    strcpy(info[2].nome,"PHP");
    strcpy(info[2].data," --> Surgiu em 1994");
    strcpy(info[2].criador,"  Criado por Rasmus Lerdof, a primeira encarna��o do PHP foi um simples conjunto de bin�rios");
    strcpy(info[2].descricao,"Common Gateway Interface (CGI) escrito em linguagem de programa��o C.");
    strcpy(info[2].sobre,"  Originalmente usado para acompanhamento de visitas para seu curr�culo online, ele nomeou o conjunto de");
    strcpy(info[2].sobre1,"scripts de ""Personal Home Page Tools"" mais frequentemente referenciado como ""PHP Tools."" Ao longo do tempo, ");
    strcpy(info[2].sobre2,"mais funcionalidades foram desejadas, e Rasmus reescreveu o PHP Tools, produzindo uma maior e rica ");
    strcpy(info[2].sobre3,"implementa��o. Este novo modelo foi capaz de intera��es com Banco de Dados e mais, fornecendo uma estrutura");
    strcpy(info[2].sobre4,"no qual os usu�rios poderiam desenvolver simples e din�micas aplica��es web, como um livros de visitas.");
    strcpy(info[2].sobre5,"");
    strcpy(info[2].sobre6,"");
    strcpy(info[2].sobre7,"");


    if (ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 50 && mousey() < 150){

                setbkcolor(15);
                setcolor(15);
                outtextxy(350, 85, info[1].nome);
                outtextxy(400, 85, info[1].data);
                outtextxy(350, 100, espaco);
                outtextxy(350, 200, info[1].criador);
                outtextxy(350, 220, info[1].descricao);
                outtextxy(350, 260, info[1].sobre);
                outtextxy(350, 280, info[1].sobre1);
                outtextxy(350, 300, info[1].sobre2);
                outtextxy(350, 320, info[1].sobre3);
                outtextxy(350, 360, info[1].sobre4);
                outtextxy(350, 380, info[1].sobre5);
                outtextxy(350, 400, info[1].sobre6);
                outtextxy(350, 420, info[1].sobre7);

                setcolor(15);
                outtextxy(350, 85, info[2].nome);
                outtextxy(400, 85, info[2].data);
                outtextxy(350, 100, espaco);
                outtextxy(350, 200, info[2].criador);
                outtextxy(350, 220, info[2].descricao);
                outtextxy(350, 260, info[2].sobre);
                outtextxy(350, 280, info[2].sobre1);
                outtextxy(350, 300, info[2].sobre2);
                outtextxy(350, 320, info[2].sobre3);
                outtextxy(350, 360, info[2].sobre4);
                outtextxy(350, 380, info[2].sobre5);
                outtextxy(350, 400, info[2].sobre6);
                outtextxy(350, 420, info[2].sobre7);

                setlinestyle(3,1,2);
                setcolor(0);
                rectangle(310,50,1100,800);
                setcolor(0);
                outtextxy(350, 85, info[0].nome);
                outtextxy(400, 85, info[0].data);
                outtextxy(350, 100, espaco);
                outtextxy(350, 200, info[0].criador);
                outtextxy(350, 220, info[0].descricao);
                outtextxy(350, 260, info[0].sobre);
                outtextxy(350, 280, info[0].sobre1);
                outtextxy(350, 300, info[0].sobre2);
                outtextxy(350, 320, info[0].sobre3);
                outtextxy(350, 360, info[0].sobre4);
                outtextxy(350, 380, info[0].sobre5);
                outtextxy(350, 400, info[0].sobre6);
                outtextxy(350, 420, info[0].sobre7);











              }





	}


	void limparjv(){


	    char espaco[200]="----------------------------------------------------------------------------------";

	    strcpy(info[0].nome,"Python");
    strcpy(info[0].data,"   -->  Surgiu em 20 de fevereiro de 1991");
    strcpy(info[0].criador,"  Criador:  Guido van Rossum (Haarlem, 31 de janeiro de 1956 ) � um matem�tico e");
    strcpy(info[0].descricao,"programador de computadores holand�s, mais conhecido por ser o autor da linguagem de programa��o Python.");
    strcpy(info[0].sobre,"  O Python � uma linguagem de programa��o de alto n�vel utilizada em diferentes tipos de aplica��es, ");
    strcpy(info[0].sobre1," como para o desenvolvimento web, em Machine Learning, no desenvolvimento de jogos e muito mais.");
    strcpy(info[0].sobre2," N�o � � toa que ela ocupa o segundo lugar entre as linguagens mais populares do mundo,");
    strcpy(info[0].sobre3,"de acordo com o relat�rio de classifica��o RedMonk referente a meados de janeiro de 2021.");
    strcpy(info[0].sobre4,"  O Python � uma linguagem de programa��o interpretada, interativa e orientada a objetos. O mesmo incorporou");
    strcpy(info[0].sobre5,"din�mica, tipos de dados din�micos de alto n�vel e classes. H� suporte a v�rios paradigmas de programa��o");
    strcpy(info[0].sobre6,"al�m da programa��o orientada a objetos, tal como programa��o procedural e funcional. O Python fornece ao");
    strcpy(info[0].sobre7,"desenvolvedor um poder not�vel aliado a uma sintaxe simples de clara.");

    strcpy(info[1].nome,"Java");
    strcpy(info[1].data," -->  Come�ou a ser criada em 1991");
    strcpy(info[1].criador,"  Criador: James Gosling � um programador canadense, mais conhecido como o");
    strcpy(info[1].descricao,"pai da linguagem de programa��o Java.");
    strcpy(info[1].sobre,"  Java � uma linguagem de programa��o orientada a objetos que come�ou a ser criada em 1991, na Sun");
    strcpy(info[1].sobre1,"Microsystems. Teve inicio com o Green Project, no qual os mentores foram Patrick Naughton,");
    strcpy(info[1].sobre2,"Mike Sheridan, e James Gosling. Este projeto n�o tinha inten��o de criar uma linguagem de programa��o,");
    strcpy(info[1].sobre3,"mais sim de antecipar a ""pr�xima onda"" que aconteceria na �rea da inform�tica e programa��o. Os idealizadores");
    strcpy(info[1].sobre4,"do projeto acreditavam que em pouco tempo os aparelhos dom�sticos e os computadores teriam uma liga��o.");
    strcpy(info[1].sobre5,"Nesta �poca, a internet estava ficando cada vez mais popular, e a equipe do Green Project come�ou a pensar em");
    strcpy(info[1].sobre6,"aplica��es para o Oak na internet, onde a palavra chave � intera��o. Eles conseguiram adaptar a linguagem Oak");
    strcpy(info[1].sobre7,"para a internet, e em 1995 foi lan�ado o Java, que era uma vers�o atualizada do Oak para a internet.");



    strcpy(info[2].nome,"PHP");
    strcpy(info[2].data," --> Surgiu em 1994");
    strcpy(info[2].criador,"  Criado por Rasmus Lerdof, a primeira encarna��o do PHP foi um simples conjunto de bin�rios");
    strcpy(info[2].descricao,"Common Gateway Interface (CGI) escrito em linguagem de programa��o C.");
    strcpy(info[2].sobre,"  Originalmente usado para acompanhamento de visitas para seu curr�culo online, ele nomeou o conjunto de");
    strcpy(info[2].sobre1,"scripts de ""Personal Home Page Tools"" mais frequentemente referenciado como ""PHP Tools."" Ao longo do tempo, ");
    strcpy(info[2].sobre2,"mais funcionalidades foram desejadas, e Rasmus reescreveu o PHP Tools, produzindo uma maior e rica ");
    strcpy(info[2].sobre3,"implementa��o. Este novo modelo foi capaz de intera��es com Banco de Dados e mais, fornecendo uma estrutura");
    strcpy(info[2].sobre4,"no qual os usu�rios poderiam desenvolver simples e din�micas aplica��es web, como um livros de visitas.");
    strcpy(info[2].sobre5,"");
    strcpy(info[2].sobre6,"");
    strcpy(info[2].sobre7,"");

        if (ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 220 && mousey() < 320){

                    setbkcolor(15);
                    setcolor(15);
                    outtextxy(350, 85, info[0].nome);
                    outtextxy(400, 85, info[0].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[0].criador);
                    outtextxy(350, 220, info[0].descricao);
                    outtextxy(350, 260, info[0].sobre);
                    outtextxy(350, 280, info[0].sobre1);
                    outtextxy(350, 300, info[0].sobre2);
                    outtextxy(350, 320, info[0].sobre3);
                    outtextxy(350, 360, info[0].sobre4);
                    outtextxy(350, 380, info[0].sobre5);
                    outtextxy(350, 400, info[0].sobre6);
                    outtextxy(350, 420, info[0].sobre7);


                    setcolor(15);
                    outtextxy(350, 85, info[2].nome);
                    outtextxy(400, 85, info[2].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[2].criador);
                    outtextxy(350, 220, info[2].descricao);
                    outtextxy(350, 260, info[2].sobre);
                    outtextxy(350, 280, info[2].sobre1);
                    outtextxy(350, 300, info[2].sobre2);
                    outtextxy(350, 320, info[2].sobre3);
                    outtextxy(350, 360, info[2].sobre4);
                    outtextxy(350, 380, info[2].sobre5);
                    outtextxy(350, 400, info[2].sobre6);
                    outtextxy(350, 420, info[2].sobre7);


                    setbkcolor(15);
                    setcolor(0);
                    outtextxy(350, 85, info[1].nome);
                    outtextxy(400, 85, info[1].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[1].criador);
                    outtextxy(350, 220, info[1].descricao);
                    outtextxy(350, 260, info[1].sobre);
                    outtextxy(350, 280, info[1].sobre1);
                    outtextxy(350, 300, info[1].sobre2);
                    outtextxy(350, 320, info[1].sobre3);
                    outtextxy(350, 340, info[1].sobre4);
                    outtextxy(350, 380, info[1].sobre5);
                    outtextxy(350, 400, info[1].sobre6);
                    outtextxy(350, 420, info[1].sobre7);


              }











	}









	void limparphp(){


	    char espaco[200]="----------------------------------------------------------------------------------";


	strcpy(info[0].nome,"Python");
    strcpy(info[0].data,"   -->  Surgiu em 20 de fevereiro de 1991");
    strcpy(info[0].criador,"  Criador:  Guido van Rossum (Haarlem, 31 de janeiro de 1956 ) � um matem�tico e");
    strcpy(info[0].descricao,"programador de computadores holand�s, mais conhecido por ser o autor da linguagem de programa��o Python.");
    strcpy(info[0].sobre,"  O Python � uma linguagem de programa��o de alto n�vel utilizada em diferentes tipos de aplica��es, ");
    strcpy(info[0].sobre1," como para o desenvolvimento web, em Machine Learning, no desenvolvimento de jogos e muito mais.");
    strcpy(info[0].sobre2," N�o � � toa que ela ocupa o segundo lugar entre as linguagens mais populares do mundo,");
    strcpy(info[0].sobre3,"de acordo com o relat�rio de classifica��o RedMonk referente a meados de janeiro de 2021.");
    strcpy(info[0].sobre4,"  O Python � uma linguagem de programa��o interpretada, interativa e orientada a objetos. O mesmo incorporou");
    strcpy(info[0].sobre5,"din�mica, tipos de dados din�micos de alto n�vel e classes. H� suporte a v�rios paradigmas de programa��o");
    strcpy(info[0].sobre6,"al�m da programa��o orientada a objetos, tal como programa��o procedural e funcional. O Python fornece ao");
    strcpy(info[0].sobre7,"desenvolvedor um poder not�vel aliado a uma sintaxe simples de clara.");

    strcpy(info[1].nome,"Java");
    strcpy(info[1].data," -->  Come�ou a ser criada em 1991");
    strcpy(info[1].criador,"  Criador: James Gosling � um programador canadense, mais conhecido como o");
    strcpy(info[1].descricao,"pai da linguagem de programa��o Java.");
    strcpy(info[1].sobre,"  Java � uma linguagem de programa��o orientada a objetos que come�ou a ser criada em 1991, na Sun");
    strcpy(info[1].sobre1,"Microsystems. Teve inicio com o Green Project, no qual os mentores foram Patrick Naughton,");
    strcpy(info[1].sobre2,"Mike Sheridan, e James Gosling. Este projeto n�o tinha inten��o de criar uma linguagem de programa��o,");
    strcpy(info[1].sobre3,"mais sim de antecipar a ""pr�xima onda"" que aconteceria na �rea da inform�tica e programa��o. Os idealizadores");
    strcpy(info[1].sobre4,"do projeto acreditavam que em pouco tempo os aparelhos dom�sticos e os computadores teriam uma liga��o.");
    strcpy(info[1].sobre5,"Nesta �poca, a internet estava ficando cada vez mais popular, e a equipe do Green Project come�ou a pensar em");
    strcpy(info[1].sobre6,"aplica��es para o Oak na internet, onde a palavra chave � intera��o. Eles conseguiram adaptar a linguagem Oak");
    strcpy(info[1].sobre7,"para a internet, e em 1995 foi lan�ado o Java, que era uma vers�o atualizada do Oak para a internet.");



    strcpy(info[2].nome,"PHP");
    strcpy(info[2].data," --> Surgiu em 1994");
    strcpy(info[2].criador,"  Criado por Rasmus Lerdof, a primeira encarna��o do PHP foi um simples conjunto de bin�rios");
    strcpy(info[2].descricao,"Common Gateway Interface (CGI) escrito em linguagem de programa��o C.");
    strcpy(info[2].sobre,"  Originalmente usado para acompanhamento de visitas para seu curr�culo online, ele nomeou o conjunto de");
    strcpy(info[2].sobre1,"scripts de ""Personal Home Page Tools"" mais frequentemente referenciado como ""PHP Tools."" Ao longo do tempo, ");
    strcpy(info[2].sobre2,"mais funcionalidades foram desejadas, e Rasmus reescreveu o PHP Tools, produzindo uma maior e rica ");
    strcpy(info[2].sobre3,"implementa��o. Este novo modelo foi capaz de intera��es com Banco de Dados e mais, fornecendo uma estrutura");
    strcpy(info[2].sobre4,"no qual os usu�rios poderiam desenvolver simples e din�micas aplica��es web, como um livros de visitas.");
    strcpy(info[2].sobre5,"");
    strcpy(info[2].sobre6,"");
    strcpy(info[2].sobre7,"");


            if(ismouseclick(WM_LBUTTONDOWN) &&
              mousex() > 50 && mousex() < 150 &&
              mousey() > 390 && mousey() < 490){

                    setcolor(15);
                    setbkcolor(15);
                    outtextxy(350, 85, info[0].nome);
                    outtextxy(400, 85, info[0].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[0].criador);
                    outtextxy(350, 220, info[0].descricao);
                    outtextxy(350, 260, info[0].sobre);
                    outtextxy(350, 280, info[0].sobre1);
                    outtextxy(350, 300, info[0].sobre2);
                    outtextxy(350, 320, info[0].sobre3);
                    outtextxy(350, 360, info[0].sobre4);
                    outtextxy(350, 380, info[0].sobre5);
                    outtextxy(350, 400, info[0].sobre6);
                    outtextxy(350, 420, info[0].sobre7);

                    setcolor(15);
                    setbkcolor(15);
                    outtextxy(350, 85, info[1].nome);
                    outtextxy(400, 85, info[1].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[1].criador);
                    outtextxy(350, 220, info[1].descricao);
                    outtextxy(350, 260, info[1].sobre);
                    outtextxy(350, 280, info[1].sobre1);
                    outtextxy(350, 300, info[1].sobre2);
                    outtextxy(350, 320, info[1].sobre3);
                    outtextxy(350, 340, info[1].sobre4);
                    outtextxy(350, 380, info[1].sobre5);
                    outtextxy(350, 400, info[1].sobre6);
                    outtextxy(350, 420, info[1].sobre7);

                    setcolor(0);
                    setbkcolor(15);
                    outtextxy(350, 85, info[2].nome);
                    outtextxy(400, 85, info[2].data);
                    outtextxy(350, 100, espaco);
                    outtextxy(350, 200, info[2].criador);
                    outtextxy(350, 220, info[2].descricao);
                    outtextxy(350, 260, info[2].sobre);
                    outtextxy(350, 280, info[2].sobre1);
                    outtextxy(350, 300, info[2].sobre2);
                    outtextxy(350, 320, info[2].sobre3);
                    outtextxy(350, 340, info[2].sobre4);
                    outtextxy(350, 360, info[2].sobre5);
                    outtextxy(350, 380, info[2].sobre6);
                    outtextxy(350, 400, info[2].sobre7);




            }









	}







