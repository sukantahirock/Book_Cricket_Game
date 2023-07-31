#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
/*void gamestyle1()
{

}
void gamestyle2)()
{

}
*/
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    while(1)
    {


    //for background
    setcolor(BLACK);
    rectangle(0,0,1000,1000);
    setfillstyle(1,RED);
    floodfill(1,1,RED);
    setcolor(WHITE);
    settextstyle(10,0,4);
    outtextxy(40,80,"                            ");
    outtextxy(40,110,"                            ");
    outtextxy(40,140,"Welcome to BOOk Cricket Game");
    outtextxy(40,170,"                            ");
    outtextxy(40,200,"                            ");
    //rectangle(4,300,14,318);
    //setfillstyle(1,WHITE);
    //floodfill(5,301,WHITE);
    //press1
    setcolor(CYAN);
    setfillstyle(1,CYAN);
    circle(10,310,7);
    floodfill(11,311,CYAN);
    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(25,300,"Press 1 to play limited number of overs to play ");
    //press 2
    setcolor(CYAN);
    setfillstyle(1,CYAN);
    circle(10,330,7);
    floodfill(11,331,CYAN);
    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(25,320,"Press 2 to playwith only one wicket");
    //prees 3
    setcolor(CYAN);
    setfillstyle(1,CYAN);
    circle(10,350,7);
    floodfill(11,351,CYAN);
    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(25,340,"Press 3 for instruction");
    //press 4
    setcolor(CYAN);
    setfillstyle(1,CYAN);
    circle(10,370,7);
    floodfill(11,371,CYAN);
    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(25,360,"Press 4 for exit");
    //cleardevice();
     int i,j,overs,noofovers,player_1Toss,player_2Toss;
 char player_1[50],player_2[50],tw[50],tl[50],tw1[50],tl1[50];
 printf("Enter\n1 - Fixed Overs\n2 - Play Until Out\n3 - Instructions For Book Cricket\n4 - Exit\nenter your choice 1 to 4:");
 scanf("%d",&noofovers);
 if(noofovers==1)
 {
  printf("Enter No Of Overs: ");
  //toss

 }
 else if(noofovers==2)
 {
  //toss
 }
 else if(noofovers==3)
 {
     cleardevice();
     //background
     setcolor(BLACK);
    rectangle(0,0,1000,1000);
    setfillstyle(1,RED);
    floodfill(1,1,RED);
    setcolor(WHITE);
    //printing text instruction
    settextstyle(10,0,4);
    outtextxy(160,25,"How to play?");
    //point of instruction
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,87,7);
    floodfill(16,88,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,80,"Book cricket game can be played between two players");

    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,107,7);
    floodfill(16,108,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,100,"This game can be played in two(2) formats");

    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,127,7);
    floodfill(16,128,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,120,"1. Players can play it in limited overs");
    outtextxy(30,140,"Or");
    outtextxy(30,160,"2. Players can play it with only one wicket ");
    outtextxy(30,180,"untill the wicket falls down");
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,217,7);
    floodfill(16,218,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,210,"once player chose a option from one(1) or two(2)");
    outtextxy(30,230,"the toss will start");
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,267,7);
    floodfill(16,268,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,260,"During toss session one player must chose between");
    outtextxy(30,280,"Head or Tell");
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,317,7);
    floodfill(16,318,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,310,"After toss the toss wining player must");
    outtextxy(30,330,"chose between bat or ball");
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,367,7);
    floodfill(16,368,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,360,"Then batsman start bat");
    outtextxy(30,380,"And bowler start bowl");
    setcolor(WHITE);
    setfillstyle(1,8);
    circle(15,417,7);
    floodfill(16,418,WHITE);
    settextstyle(10,0,1);
    outtextxy(30,410,"After game over There will be one winner");
    setcolor(WHITE);
    rectangle(5,440,20,454);
    setfillstyle(1,8);
    floodfill(6,441,WHITE);
    setcolor(WHITE);
    settextstyle(10,0,1);
    outtextxy(30,440,"press 1 or 2 to start the game");
  printf("How To Play?\n");
  printf("The project is titled as Book Cricket Game and developed using C language.\n Book Cricket is an indoor game which can be played by kids with a book.This game is made for two players.\n The two players will have to decide who is going to guess the toss. After winning the toss, the player has to select whether he has to bat/bowl first.\nThe player who is going to bat first, need to hold the book.\nHe has to randomly open the pages of the book and look for the last digit of that page number which is nothing but the runs obtained in that particular ball.\nIf the last digit is 7/8/9, then it will be considered as a dot ball.\nThe obtained score will be added to the batsman's score every time or we can say the score of every ball.\nThe batsman will be out if the number is 0. Then, the second player has to play with the book in the same process.\n\n");
  printf("Enter\n1 - Fixed Overs\n2 - Play Until Out\n");
  scanf("%d",&noofovers);
 }
 else
 {
     cleardevice();
     setcolor(BLACK);
    rectangle(0,0,1000,1000);
    setfillstyle(1,RED);
    floodfill(1,1,RED);
    setcolor(WHITE);
    settextstyle(10,0,4);
    outtextxy(170,200,"HAPPY CRICKET");
  printf("                                              ----------------------\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>|GOOD BYE,Happy Cricket|<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n                                              -----------------------\n");
  overs=0;
  }
  if(overs==0)
  {
      delay(10000);
      return 0;
  }
  else
  {
      printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\tWELCOME TO BOOK CRICKET GAME\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
      cleardevice();
      setcolor(BLACK);
      rectangle(0,0,1000,1000);
      setfillstyle(1,RED);
      floodfill(1,1,RED);
      setcolor(WHITE);
      settextstyle(10,0,3);
      outtextxy(30,50,"1st player name:");
      printf("Enter Player 1 Name:");
      fflush(stdin);
      gets(player_1);
      outtextxy(250,50,player_1);
      outtextxy(30,80,"2nd player name:");
      printf("Enter Player 2 Name:");
      fflush(stdin);
      gets(player_2);
      outtextxy(250,80,player_2);
      settextstyle(10,0,4);
      outtextxy(200,120,"Now toss time");
      setcolor(WHITE);
      setfillstyle(1,6);
      circle(200,250,50);
      floodfill(201,251,WHITE);
      settextstyle(8,0,1);
      outtextxy(153,246,"  HEAD  ");
      setcolor(BLACK);
       for(int t=0;t<10;t++)
      {
         line((240+t),245,(240+t),264);

      }
      setcolor(WHITE);
      setfillstyle(1,6);
      circle(400,250,50);
      floodfill(401,251,WHITE);
      settextstyle(8,0,1);
      outtextxy(353,246,"  TELL  ");
      setcolor(BLACK);
      for(int t=0;t<10;t++)
      {
         line((440+t),245,(440+t),264);

      }
      setcolor(WHITE);
      rectangle(134,305,145,320);
      setfillstyle(1,9);
      floodfill(135,306,WHITE);
      settextstyle(8,0,1);
      outtextxy(153,305,"second player must chosse");
      outtextxy(153,325,"one side of this coin");
      outtextxy(153,345,"Head Or Tell");
      rectangle(75,385,90,400);
      setfillstyle(1,10);
      floodfill(76,386,WHITE);
      settextstyle(10,0,1);
      outtextxy(100,385,"Press 1 for Head");
      rectangle(75,405,90,420);
      setfillstyle(1,10);
      floodfill(76,406,WHITE);
      outtextxy(100,405,"Press 2 for Tell");
      int t;
      scanf("%d",&t);
      cleardevice();
      setcolor(BLACK);
    rectangle(0,0,1000,1000);
    setfillstyle(1,RED);
    floodfill(1,1,RED);
    setcolor(WHITE);
        setfillstyle(1,6);
        pieslice(300,150,0,360,50);
    for(int y=0;y<8;y++)
    {
        setcolor(WHITE);
        if(y==0)
        {
            setfillstyle(1,6);
            pieslice(300,150,0,45,50);
        }
        else if(y==1)
        {
            setfillstyle(1,2);
            pieslice(300,150,90,135,50);
        }
        else if(y==2)
            {
                setfillstyle(1,5);
                pieslice(300,150,180,225,50);
            }
            else if(y==3)
            {
                setfillstyle(1,8);
                pieslice(300,150,270,315,50);
            }
        else if(y==4)
        {
        setfillstyle(1,1);
        pieslice(300,150,45,90,50);
        }
       else if(y==5)
        {
            setfillstyle(1,3);
            pieslice(300,150,135,180,50);
        }
        else if (y==6)
        {
            setfillstyle(1,6);
            pieslice(300,150,225,270,50);
        }
        else
        {
            setfillstyle(1,10);
            pieslice(300,150,315,360,50);
        }

    }
    /*
        setcolor(WHITE);
        setfillstyle(1,6);
        pieslice(300,150,0,360,50);
*/
      if(t==1)
      {
          printf("%s choice is head",player_2);
          setcolor(WHITE);
          settextstyle(10,0,2);
          outtextxy(100,250,"Head is chosed by");
          outtextxy(310,250,player_2);
      }
      else if(t==2)
      {
          printf("%s choice is tell",player_2);
          setcolor(WHITE);
          settextstyle(10,0,2);
          outtextxy(100,250,"Tell is chosed by");
          outtextxy(305,250,player_2);
      }
      else
      {
          printf("invalid choice\n");
      }
      outtextxy(100,280,player_1);
      outtextxy(100,300,"press any to toss the coin");
      char ts[5];
      scanf("%s",&ts);
      srand(time(0));
      int f=rand()%2;
      f=f+1;
       //for background
      cleardevice();
      setcolor(BLACK);
      rectangle(0,0,1000,1000);
      setfillstyle(1,RED);
      floodfill(1,1,RED);
      setcolor(WHITE);
      setfillstyle(1,6);
      circle(200,50,50);
      floodfill(201,51,WHITE);
      if(f==1)
      {
          settextstyle(8,0,1);
          outtextxy(153,46,"  HEAD  ");
          setcolor(BLACK);
       for(int t=0;t<10;t++)
      {
         line((240+t),45,(240+t),64);

      }
          printf("Toss is 'Head'");
          setcolor(WHITE);
          settextstyle(10,0,1);
          outtextxy(100,140,"Toss is HEAD");
      }
      else
      {
          settextstyle(8,0,1);
          outtextxy(153,46,"  TAIL  ");
       setcolor(BLACK);
       for(int t=0;t<10;t++)
      {
         line((240+t),45,(240+t),64);

      }
          printf("Toss is 'Tail'");
          setcolor(WHITE);
          settextstyle(10,0,1);
          outtextxy(100,140,"Toss is Tail");
      }
      if(f==t)
      {
          printf("%s won the toss",player_2);
          outtextxy(100,200,"Toss Won by");
          outtextxy(222,200,player_2);
          sprintf(tw,"%s",player_2);
          sprintf(tl,"%s",player_1);
      }
      else
      {

          printf("%s won the toss",player_1);
          outtextxy(100,200,"Toss Won by");
          outtextxy(222,200,player_1);
          sprintf(tw,"%s",player_1);
          sprintf(tl,"%s",player_2);
      }
      setcolor(WHITE);
       settextstyle(8,0,1);
      outtextxy(100,280,"Chose between bat or bowl");
      settextstyle(10,0,3);
      outtextxy(40,310,"press 1 for bat 2 for bowl");
      int bb;
      printf("\n\n\nenter 1 for bat \n\n enter 2 for bowl\n\n");
      scanf("%d",&bb);
      //for background
      cleardevice();
      setcolor(BLACK);
      rectangle(0,0,1000,1000);
      setfillstyle(1,RED);
      floodfill(1,1,RED);
      setcolor(WHITE);
          rectangle(100,120,150,350);
          setfillstyle(1,WHITE);
          floodfill(101,121,WHITE);
          rectangle(120,60,130,119);
          setfillstyle(1,WHITE);
          floodfill(121,61,WHITE);
          setcolor(BLACK);
          line(120,121,125,151);
          line(130,121,125,151);
          setcolor(WHITE);
      setfillstyle(1,15);
      circle(350,200,120);
      floodfill(351,201,WHITE);
      setcolor(BLACK);
      line(231,201,471,201);
      if(bb==1)
      {
            setcolor(WHITE);
      settextstyle(10,0,2);
      outtextxy(80,20,"batting is chosed by");
      outtextxy(320,20,tw);
      outtextxy(110,360,tw);
      outtextxy(350,360,tl);
      sprintf(tw1,"%s",tw);
      sprintf(tl1,"%s",tl);
      }
      else
      {
          setcolor(WHITE);
      settextstyle(10,0,2);
      outtextxy(80,20,"bowling is chosed by");
      outtextxy(320,20,tw);
      outtextxy(110,360,tl);
      outtextxy(350,360,tw);
      sprintf(tw1,"%s",tl);
      sprintf(tl1,"%s",tw);
        }
        outtextxy(10,450,"press key to start the game");
        char kk[4];
        printf("\nenter any key for game\n");
        scanf("%s",&kk);

        //for fixed over games line 440

        if(noofovers==1)
        {
            //void gameplay1

            //1st innings

        //for background
        cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    int overs;
    int batsum=0,bowlsum=0,cr,btp=0,br=0;
    char copyarray[10];
    printf("enter the number of overs\n");
    setcolor(WHITE);
    settextstyle(10,0,2);
    outtextxy(170,2,"book cricket game");
    settextstyle(10,0,1);
    outtextxy(10,28,"enter number of overs");
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");

    scanf("%d",&overs);
    sprintf(copyarray,"%d",overs);
    settextstyle(10,0,1);
    outtextxy(240,28,copyarray);
    printf("press s for start the game\n");
    scanf("%s",&copyarray);
    settextstyle(10,0,1);
        outtextxy(0,200,"playing overs:");
        sprintf(copyarray,"%d",overs);
        outtextxy(140,200,copyarray);
    for(int i=0;i<overs;i++)
    {
        for(int j=1;j<=6;j++)
        {
            outtextxy(0,400,tw1);
        printf("%s please enter any key\n",tw1);
        scanf("%s",&copyarray);


        //creating book cover
        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);

   // settextstyle(10,0,1);
        //outtextxy(20,230,"runs = ");
       // sprintf(copyarray,"%d",batsum);
        //outtextxy(200,230,copyarray);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");

    //
    //

        outtextxy(0,400,tl1);

        printf("%s please enter any key\n",tl1);
        scanf("%s",&copyarray);
        //
        //

        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
        setcolor(WHITE);
    rectangle(100,50,450,350);
    setfillstyle(1,7);
    floodfill(101,51,9);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(100-i,51,270,350+(i/2));
            setfillstyle(1,15);
            floodfill(101,52,15);
            rectangle(271,51,450+i,350+(i/2));
            setfillstyle(1,15);
            floodfill(272,52,15);
        }
        setcolor(BLACK);
        line(271,51,271,349);
        line(101,349,449,349);
        line(101,51,101,349);
        line(449,51,449,349);
        line(101,51,449,51);
        setcolor(WHITE);
        settextstyle(10,0,2);
    outtextxy(110,55,"page:");
    outtextxy(340,55,"page:");

    }




        //
        //
        //

        settextstyle(10,0,1);
        outtextxy(10,200,tw1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);

        cr=rand()%255;
        if(j==6)
        {
            printf("%d.0 overs and page number = %d\n",(i+1),cr);
        outtextxy(0,300,"ov.:");
        sprintf(copyarray,"%d.0",(i+1));
        outtextxy(50,300,copyarray);
        }
        else
        {
            printf("%d.%d overs and page number = %d\n",i,j,cr);
        outtextxy(0,300,"ov.:");
        sprintf(copyarray,"%d.%d",i,j);
        outtextxy(50,300,copyarray);
        }
        printf("%d.%d overs and page number = %d\n",i,j,cr);
        outtextxy(0,300,"ov.:");
        sprintf(copyarray,"%d.%d",i,j);
        outtextxy(50,300,copyarray);
        char sss[5];
        if(cr%10==7 || cr%10==8 || cr%10==9)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
                outtextxy(120,200,"this is a dot ball");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            printf("This is a '.' dot ball\n");
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
        }
        else if(cr%10==0)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
            printf("oh no!batsman got out\n");
            settextstyle(10,0,1);
                outtextxy(120,200,"thats a wicket!");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(btp==0)
            {
                printf("a tragedy for batsman.       he hgot duck out\n");
                printf("a very joy for bowler\.n");
                outtextxy(120,100,"batsman get duck out :3");
            }
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
                btp=0;
        }
        else
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            batsum=batsum+(cr%10);
            btp=btp+(cr%10);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
            printf("this ball got %d runs\n batsman run %d\n total team runis %d\n",(cr%10),btp,batsum);
            setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,200,"this ball get");
                sprintf(copyarray,"%d",(cr%10));
                outtextxy(220,200,copyarray);
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(cr%10==4)
            {
                printf("oh thas a fantastic four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"thats a fantastic four");
            }
            else if(cr%10==5)
            {
                printf("thats a single run from batsman and filder over throw got extra four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"ops overthrow!");
            }
            else if(cr%10==6)
            {
                printf("thats beautiful shot over head and cross the boudry and its a six");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"hurreh! its a sixer");
            }

        }

        if((i==overs-1) &&(j==6))
        {
            delay(1000);
        }
        }



    }
    cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    settextstyle(10,0,2);
    printf("1st innigns has finished\n");
    outtextxy(60,75,tw1);
    outtextxy(120,75,"innings has finished");
    outtextxy(100,100,"target = ");
    sprintf(copyarray,"%d",(batsum+1));
    printf("the target is %d set\n",(batsum+1));
    outtextxy(220,100,copyarray);
    printf("starting the most excitng second innigns\n");
    outtextxy(40,150,tl1);
    outtextxy(70,150,"press s to start the game");
    btp=0;
    printf("press s to start second innings\n");
    scanf("%s",&copyarray);


    //2nd innigs


    for(int i=0;i<overs;i++)
    {
        for(int j=1;j<=6;j++)
        {
            outtextxy(10,25,tl1);
        printf("%s please enter any key\n",tl1);
        scanf("%s",&copyarray);


        //creating book cover
        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);


    settextstyle(10,0,1);
    outtextxy(470,10,"tar:");
    sprintf(copyarray,"%d",(batsum+1));
    outtextxy(520,10,copyarray);

   // settextstyle(10,0,1);
        //outtextxy(20,230,"runs = ");
       // sprintf(copyarray,"%d",batsum);
        //outtextxy(200,230,copyarray);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");

    //
    //

       outtextxy(10,25,tw1);
        printf("%s please enter any key\n",tw1);
        scanf("%s",&copyarray);
        //
        //

        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
        setcolor(WHITE);
    rectangle(100,50,450,350);
    setfillstyle(1,7);
    floodfill(101,51,9);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(100-i,51,270,350+(i/2));
            setfillstyle(1,15);
            floodfill(101,52,15);
            rectangle(271,51,450+i,350+(i/2));
            setfillstyle(1,15);
            floodfill(272,52,15);
        }
        setcolor(BLACK);
        line(271,51,271,349);
        line(101,349,449,349);
        line(101,51,101,349);
        line(449,51,449,349);
        line(101,51,449,51);
        setcolor(WHITE);
        settextstyle(10,0,2);
    outtextxy(110,55,"page:");
    outtextxy(340,55,"page:");

    }




        //
        //
        //

        settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
        settextstyle(10,0,1);
    outtextxy(470,10,"tar:");
    sprintf(copyarray,"%d",(batsum+1));
    outtextxy(520,10,copyarray);

        cr=rand()%255;
        printf("%d.%d overs and page number = %d\n",i,j,cr);
        sprintf(copyarray,"%d.%d",i,j);
        outtextxy(0,300,"ov.:");
        outtextxy(50,300,copyarray);
        char sss[5];
        if(cr%10==7 || cr%10==8 || cr%10==9)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
                outtextxy(120,200,"this is a dot ball");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            printf("This is a '.' dot ball\n");
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
        }
        else if(cr%10==0)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
            printf("oh no!batsman got out\n");
            settextstyle(10,0,1);
                outtextxy(120,200,"thats a wicket!");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(btp==0)
            {
                printf("a tragedy for batsman.       he hgot duck out\n");
                printf("a very joy for bowler\.n");
                outtextxy(120,100,"batsman get duck out :3");
            }
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
                btp=0;
        }
        else
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            bowlsum=bowlsum+(cr%10);
            btp=btp+(cr%10);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
            printf("this ball got %d runs\n batsman run %d\n total team runis %d\n",(cr%10),btp,batsum);
            setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,200,"this ball get");
                sprintf(copyarray,"%d",(cr%10));
                outtextxy(220,200,copyarray);
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(cr%10==4)
            {
                printf("oh thas a fantastic four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"thats a fantastic four");
            }
            else if(cr%10==5)
            {
                printf("thats a single run from batsman and filder over throw got extra four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"ops overthrow!");
            }
            else if(cr%10==6)
            {
                printf("thats beautiful shot over head and cross the boudry and its a six");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"hurreh! its a sixer");
            }
        }
        if(bowlsum>batsum)
        {
            br=br+1;
            break;
        }
       if((i==(overs-1)) &&(j==6))
        {
            delay(1000);
        }
        }
        if(br!=0)
        {
            delay(500);
            break;
        }


    }
    cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    settextstyle(10,0,4);
    if(bowlsum>batsum)
    {
        printf("%s wins\n",tl1);
        outtextxy(0,150,tl1);
        outtextxy(150,150,"match win");
        delay(5000);
    }
    else if(bowlsum<batsum)
    {
        printf("%s wins\n",tw1);
        outtextxy(0,150,tw1);
        outtextxy(150,150,"match wins by");
        delay(5000);
    }
    else
    {
        printf("match draw");
        outtextxy(125,150,"match draw");
        delay(5000);
    }
  }

  //game style 2 1005

    else if(noofovers==2)
    {

        cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    int overs;
    int batsum=0,bowlsum=0,cr,btp=0,br=0;
    char copyarray[10];
    setcolor(WHITE);
    settextstyle(10,0,2);
    outtextxy(170,2,"book cricket game");
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");


    printf("press s for start the game\n");
    scanf("%s",&copyarray);
    settextstyle(10,0,1);
    for(int i=0;;i++)
    {
        for(int j=1;j<=6;j++)
        {
            outtextxy(0,400,tl1);
        printf("%s please enter any key\n",tl1);
        scanf("%s",&copyarray);


        //creating book cover
        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);

   // settextstyle(10,0,1);
        //outtextxy(20,230,"runs = ");
       // sprintf(copyarray,"%d",batsum);
        //outtextxy(200,230,copyarray);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");

    //
    //

        outtextxy(0,400,tw1);

        printf("%s please enter any key\n",tw1);
        scanf("%s",&copyarray);
        //
        //

        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
        setcolor(WHITE);
    rectangle(100,50,450,350);
    setfillstyle(1,7);
    floodfill(101,51,9);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(100-i,51,270,350+(i/2));
            setfillstyle(1,15);
            floodfill(101,52,15);
            rectangle(271,51,450+i,350+(i/2));
            setfillstyle(1,15);
            floodfill(272,52,15);
        }
        setcolor(BLACK);
        line(271,51,271,349);
        line(101,349,449,349);
        line(101,51,101,349);
        line(449,51,449,349);
        line(101,51,449,51);
        setcolor(WHITE);
        settextstyle(10,0,2);
    outtextxy(110,55,"page:");
    outtextxy(340,55,"page:");

    }




        //
        //
        //

        settextstyle(10,0,1);
        outtextxy(10,200,tw1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);

        cr=rand()%255;
        printf("%d.%d overs and page number = %d\n",i,j,cr);
        sprintf(copyarray,"%d.%d",i,j);
        outtextxy(0,300,"ov.:");
        outtextxy(50,300,copyarray);
        char sss[5];
        if(cr%10==7 || cr%10==8 || cr%10==9)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
                outtextxy(120,200,"this is a dot ball");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            printf("This is a '.' dot ball\n");
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
        }
        else if(cr%10==0)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
            printf("oh no!batsman got out\n");
            settextstyle(10,0,1);
                outtextxy(120,200,"thats a wicket!");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(btp==0)
            {
                printf("a tragedy for batsman.       he hgot duck out\n");
                printf("a very joy for bowler\.n");
                outtextxy(120,100,"batsman get duck out :3");
            }
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
                btp=0;
                br=br+1;
                delay(1000);
                break;


        }


        else
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            batsum=batsum+(cr%10);
            btp=btp+(cr%10);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",batsum);
        outtextxy(90,230,copyarray);
            printf("this ball got %d runs\n batsman run %d\n total team runis %d\n",(cr%10),btp,batsum);
            setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,200,"this ball get");
                sprintf(copyarray,"%d",(cr%10));
                outtextxy(220,200,copyarray);
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(cr%10==4)
            {
                printf("oh thas a fantastic four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"thats a fantastic four");
            }
            else if(cr%10==5)
            {
                printf("thats a single run from batsman and filder over throw got extra four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"ops overthrow!");
            }
            else if(cr%10==6)
            {
                printf("thats beautiful shot over head and cross the boudry and its a six");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"hurreh! its a sixer");
            }
        }
        }

        if(br!=0)
        {
            br=0;
            delay(100);
            break;
        }


    }
    cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    settextstyle(10,0,2);
    printf("1st innigns has finished\n");
    outtextxy(60,75,tw1);
    outtextxy(120,75,"innings has finished");
    outtextxy(100,100,"target = ");
    sprintf(copyarray,"%d",(batsum+1));
    printf("the target is %d set\n",(batsum+1));
    outtextxy(220,100,copyarray);
    printf("starting the most excitng second innigns\n");
    outtextxy(40,150,tl1);
    outtextxy(70,150,"press s to start the game");
    btp=0;
    printf("press s to start second innings\n");
    scanf("%s",&copyarray);



    //2nd innings
    for(int i=0;i<overs;i++)
    {
        for(int j=1;j<=6;j++)
        {
            outtextxy(10,25,tl1);
        printf("%s please enter any key\n",tl1);
        scanf("%s",&copyarray);


        //creating book cover
        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);


    settextstyle(10,0,1);
    outtextxy(470,10,"tar:");
    sprintf(copyarray,"%d",(batsum+1));
    outtextxy(520,10,copyarray);

   // settextstyle(10,0,1);
        //outtextxy(20,230,"runs = ");
       // sprintf(copyarray,"%d",batsum);
        //outtextxy(200,230,copyarray);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");

    //
    //

       outtextxy(10,25,tw1);
        printf("%s please enter any key\n",tw1);
        scanf("%s",&copyarray);
        //
        //

        cleardevice();
        setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
        setcolor(WHITE);
    rectangle(100,50,450,350);
    setfillstyle(1,7);
    floodfill(101,51,9);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(100-i,51,270,350+(i/2));
            setfillstyle(1,15);
            floodfill(101,52,15);
            rectangle(271,51,450+i,350+(i/2));
            setfillstyle(1,15);
            floodfill(272,52,15);
        }
        setcolor(BLACK);
        line(271,51,271,349);
        line(101,349,449,349);
        line(101,51,101,349);
        line(449,51,449,349);
        line(101,51,449,51);
        setcolor(WHITE);
        settextstyle(10,0,2);
    outtextxy(110,55,"page:");
    outtextxy(340,55,"page:");

    }




        //
        //
        //

        settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
        settextstyle(10,0,1);
    outtextxy(470,10,"tar:");
    sprintf(copyarray,"%d",(batsum+1));
    outtextxy(520,10,copyarray);

        cr=rand()%255;
        printf("%d.%d overs and page number = %d\n",i,j,cr);
        sprintf(copyarray,"%d.%d",i,j);
        outtextxy(0,300,"ov.:");
        outtextxy(50,300,copyarray);
        char sss[5];
        if(cr%10==7 || cr%10==8 || cr%10==9)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
                outtextxy(120,200,"this is a dot ball");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            printf("This is a '.' dot ball\n");
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
        }
        else if(cr%10==0)
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
            printf("oh no!batsman got out\n");
            settextstyle(10,0,1);
                outtextxy(120,200,"thats a wicket!");
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(btp==0)
            {
                printf("a tragedy for batsman.       he hgot duck out\n");
                printf("a very joy for bowler\.n");
                outtextxy(120,100,"batsman get duck out :3");
            }
            printf("batsman run %d\n total team runis %d\n",btp,bowlsum);
                btp=0;
                br=br+1;
                delay(1000);
                break;
        }
        else
        {
            setcolor(WHITE);
            sprintf(sss,"%d",cr);
            settextstyle(10,0,2);
            outtextxy(400,55,sss);
            sprintf(sss,"%d",(cr-1));
            outtextxy(170,55,sss);
            bowlsum=bowlsum+(cr%10);
            btp=btp+(cr%10);
            settextstyle(10,0,1);
        outtextxy(10,230,"runs = ");
        sprintf(copyarray,"%d",bowlsum);
        outtextxy(90,230,copyarray);
            printf("this ball got %d runs\n batsman run %d\n total team runis %d\n",(cr%10),btp,batsum);
            setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,200,"this ball get");
                sprintf(copyarray,"%d",(cr%10));
                outtextxy(220,200,copyarray);
                sprintf(copyarray,"%d",btp);
                outtextxy(120,250,"batsman run");
                outtextxy(260,250,copyarray);
            if(cr%10==4)
            {
                printf("oh thas a fantastic four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"thats a fantastic four");
            }
            else if(cr%10==5)
            {
                printf("thats a single run from batsman and filder over throw got extra four runs\n");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"ops overthrow!");
            }
            else if(cr%10==6)
            {
                printf("thats beautiful shot over head and cross the boudry and its a six");
                setcolor(WHITE);
                settextstyle(10,0,1);
                outtextxy(120,100,"hurreh! its a sixer");
            }
        }
        if(bowlsum>batsum)
        {
            br=br+1;
            delay(1000);
            break;
        }
        }
        if(br!=0)
        {
            break;
        }


    }
    cleardevice();
    setcolor(WHITE);
    rectangle(0,0,1000,1000);
    setfillstyle(1,9);
    floodfill(1,1,9);
    settextstyle(10,0,2);
    if(bowlsum>batsum)
    {
        printf("%s wins\n",tl1);
        outtextxy(10,75,tl1);
        outtextxy(75,75,"match win");
        delay(5000);
    }
    else if(bowlsum<batsum)
    {
        printf("%s wins\n",tw1);
        outtextxy(10,75,tw1);
        outtextxy(75,75,"match win");
        delay(5000);
    }
    else
    {
        printf("match draw");
        outtextxy(75,75,"match draw");
        delay(5000);
    }



    }


  }

}      //for(int b=0;;b++)
    //{
       // if(b%2==0)
        //{
            /*//creating book cover
    setcolor(WHITE);
    rectangle(150,50,450,350);
    setfillstyle(1,8);
    floodfill(151,51,WHITE);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(151,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(152,52,WHITE);
        }

    }
    //for book name and writter name
    line(155,100,445,100);
    line(155,105,445,105);
    settextstyle(10,0,4);
    outtextxy(262,110,"THE");
    line(155,143,445,143);
    settextstyle(10,0,6);
    outtextxy(280,150,"c");
    line(155,210,445,210);
    settextstyle(10,0,4);
    outtextxy(190,215,"PROGRAMMING");
    settextstyle(10,0,4);
    outtextxy(220,250,"LANGUAGE");
    line(155,290,445,290);
    line(155,288,445,288);
    line(155,292,445,292);
    settextstyle(5,0,2);
    outtextxy(165,300,"BRIAN W KERNIGHAN");
    outtextxy(175,325,"DENNIS M. RITCHIE");
       // }
        //else
        //{
           *///open book*/
/*    setcolor(WHITE);
    //rectangle(150,50,450,350);
    //setfillstyle(9,8);
    //floodfill(151,51,WHITE);

    for(int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            rectangle(100-i,51,270,350+(i/2));
            setfillstyle(1,8);
            floodfill(101,52,WHITE);
            rectangle(271,51,450+i,350+(i/2));
            setfillstyle(1,8);
            floodfill(272,52,WHITE);
        }
        line(270,45,270,380);
        settextstyle(10,0,2);
    outtextxy(110,55,"page:");
    outtextxy(380,55,"page:");

    }
        //delay(500);

        // }
    //}


*/
    getch();
}

