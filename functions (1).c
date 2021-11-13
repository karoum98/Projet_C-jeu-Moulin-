
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <string.h>
#include <time.h>
#include "functions.h"
void color(int t,int f)
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,f*16+t);
}
struct deplace{
int a;
int d;
};
struct mestables{
 char tab111[8];
 char tab112[8];
 char tab113[8];
 int tabm1[100];
 int tabm[100];
 };
struct myDataType{
    int i;
    char ch;
}inputValue();

struct mestables emplacement(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]){
      struct mestables TAB;
       int count = 0;
char a,d;
    struct myDataType info;
      char tab[24]="abcdefghijklmnopqrstuvwxyz";
      int tabm[100]={0};
      int tabm1[100]={0};//ppur memoriser les moulins !!
      tabm[99]=99;
      char tab1[8]="abcdefgh";
      char tab2[8]="ijklmnop";
      char tab3[8]="qrstuvwx";
      interface3(tab11,tab12,tab13,tab1,tab2,tab3);
       calcul(tab11,tab12,tab13,j1,j2);
      again:
//-----------------------------------------------
    if(count<18){
    info = inputValue(tab,count,tab11,tab12,tab13);
    if (info.i<8){
    tab11[info.i] = info.ch;}
    else if (7<info.i && info.i<16){
    tab12[info.i%8] = info.ch;}
   else
   {tab13[info.i%8] = info.ch;}
   N:
         for (int i=0;i<70;i++){tabm1[i]=tabm[i];}
    system("cls");
   interface3(tab11,tab12,tab13,tab1,tab2,tab3);
    calcul(tab11,tab12,tab13,j1,j2);
if(moulin(tab11,tab12,tab13,info.ch,count )==1) {
    if (tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
          printf("1111111111111111111111111111111111");
         tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
        else if (tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count ,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("222222222222222222222222222222222222222");
         tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1  )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("333333333333333333333333333333333333333333333");
          tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("444444444444444444444444444444444444444");
         tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1  )]=1;
         goto N;
        }
        else if (tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("5555555555555555555555555555555555555");
         tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count ,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("6666666666666666666666666666666666666666666");
         tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
       else if (tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,count);
         printf("777777777777777777777777777777777777777777777");
         tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
      }
      count++;
  goto again;
       }
       for (int i=0;i<8;i++){
            TAB.tab111[i]=tab11[i];
            TAB.tab112[i]=tab12[i];
            TAB.tab113[i]=tab13[i];
       }
       for (int i=0;i<70;i++){
            TAB.tabm1[i]=tabm1[i];
            TAB.tabm[i]=tabm[i];
       }
      return TAB;
}
//----------------------------------------------------------------------------------------------------------------------

  void deplacement (char tab11[8],char tab12[8],char tab13[8],int tabm1[100],int tabm[100],char j1[20],char j2[20]){
           char tab[24]="abcdefghijklmnopqrstuvwx";
//int tabm[70]={0};
    //  int tabm1[70]={0};
      char tab1[8]="abcdefgh";
      char tab2[8]="ijklmnop";
      char tab3[8]="qrstuvwx";
char a,d;
  int cout=0,count=0;
  char z;
color(13,0);
printf("\n vous etes  maintenant dans la phase de mouvement ");
M:
      if (test(tab11,tab12,tab13)==0|| test(tab11,tab12,tab13)==1) {goto W;}
      if (cout%2==0){
            color(10,0);
           printf("\n\t\t le vert  : \n >>deplacer : ")   ; color(14,0);
            //color(15,0);
           scanf("%s",&a);

      }
      else
        {
            color(12,0);
            printf("\n\t\t le rouge : \n >>deplacer : "); color(14,0);
            scanf("%s",&a);
             color(15,0);
}
char ch;
if (cout%2==0)ch='#';
else ch='@';
int p=0;
 for (int i=0;i<24;i++){

      if(a==tab[i]) {

            if (i<8){
                                    if (tab11[i] ==a){printf("\n  invalid "); goto M;}
                                     else{
                                    tab11[i]=a ;
                                    switch(i){
                              case 0:
                                    tabm[1]=0;tabm[8]=0;
                                    break;
                              case 1:
                                    tabm[1]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[1]=0;tabm[3]=0;
                                     break;
                              case 3:
                                    tabm[3]=0;tabm1[3]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[3]=0;tabm1[3]=0; tabm[5]=0;tabm1[5]=0;
                                     break;
                              case 5:
                                   tabm[5]=0;tabm1[5]=0; tabm[34]=0;tabm1[34]=0;
                                    break;
                              case 6:
                                   tabm[8]=0;tabm1[8]=0; tabm[5]=0;tabm1[5]=0;
                                    break;
                              case 7:
                                  tabm[8]=0;tabm1[8]=0; tabm[36]=0;tabm1[36]=0;
                                   break;
                                    }

                                    }}
            else if (7<i && i<16){ if (tab12[i%8] ==a){printf("\n  invalid ");goto M;}
                                    else{
                                    tab12[i%8]=a;
                                    switch(i%8){
                              case 0:
                                    tabm[10]=0;tabm[16]=0;
                                     break;
                              case 1:
                                    tabm[10]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[10]=0;tabm[12]=0;
                                     break;
                              case 3:
                                    tabm[12]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[12]=0;tabm[14]=0;
                                    break;
                              case 5:
                                   tabm[14]=0; tabm[34]=0;
                                    break;
                              case 6:
                                   tabm[16]=0; tabm[14]=0;
                                    break;
                              case 7:
                                  tabm[16]=0; tabm[36]=0;
                                  break;
                                  }
                                    }}
            else if (15<i && i<24){ if (tab13[i%8] ==a){printf("\n  invalid ");goto M;}
                                    else{
                                    tab13[i%8]=a;
                                   switch(i%8){
                              case 0:
                                    tabm[20]=0;tabm[26]=0;
                                    break;
                              case 1:
                                    tabm[20]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[20]=0;tabm[22]=0;
                                     break;
                              case 3:
                                    tabm[22]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[22]=0;tabm[24]=0;
                                     break;
                              case 5:
                                   tabm[24]=0; tabm[34]=0;
                                    break;
                              case 6:
                                   tabm[26]=0; tabm[24]=0;
                                    break;
                              case 7:
                                  tabm[26]=0; tabm[36]=0;
                                   break;}
                                    }}p++;}
                   }
                   if (p==0){printf("\n invalid ");goto M;}
A:
       if (cout%2==0){
            color(10,0);
            printf ("\t\t >>vers :"); color(14,0);
            scanf("%c",&d);
              scanf("%c",&d);
            color(15,0);

      }
      else
        {
            color(12,0);
            printf("\t\t >> vers :"); color(14,0);
            scanf("%c",&d);
            scanf("%c",&d);
             color(15,0);}
if (condition_dapl(a,d,tab11,tab12,tab13)==1){
   for (int i=0;i<24;i++){
      if(d==tab[i]){
        if (cout%2==0)    {
           if (i<8){
              if (tab11[i]=='#') {printf("\n invalid "); goto A;}
              else
                  tab11[i] ='#';
                  }
           else if (7<i && i<16){
              if (tab12[i%8]=='#') {printf("\n invalid ");goto A;}
              else
                  tab12[i%8] ='#';}
           else
              if (tab13[i%8]=='#') {printf("\n invalid ");goto A;}
              else
                  {tab13[i%8] ='#';}
                        }
        else {
            if (i<8){
                if (tab11[i]=='@') {printf("\n invalid "); goto A;}
                else
                  tab11[i] ='@';}
           else if (7<i && i<16){
              if (tab12[i%8]=='@') {printf("\n invalid ");goto A;}
              else
                  tab12[i%8] ='@';}
           else
               if (tab13[i%8]=='@') {printf("\n invalid ");goto A;}
                else
                  tab13[i%8] ='@';
            }
                 }
                      }}
            else { //color(4,0); printf("\n invalid !!!\n"); color(15,0);
            goto A;}
 L:
for (int i=0;i<70;i++){tabm1[i]=tabm[i];}
system("cls");

/*char ch;
if (cout%2==0)ch='#';
else ch='@';*/
interface3(tab11,tab12,tab13,tab1,tab2,tab3);
calcul(tab11,tab12,tab13,j1,j2);
if(moulin(tab11,tab12,tab13,ch,cout )==1){
    if (tabm[nmoulin1(tab11 ,tab12,tab13,ch,count,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
          printf("1111111111111111111111111111111111");
         tabm[nmoulin1(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
         else if (tabm[nmoulin2(tab11 ,tab12,tab13,ch,cout ,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("222222222222222222222222222222222222222");
         tabm[nmoulin2(tab11 ,tab12,tab13,ch,cout,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin3(tab11 ,tab12,tab13,ch,cout,tabm1  )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("333333333333333333333333333333333333333333333");
         tabm[nmoulin3(tab11 ,tab12,tab13,ch,cout,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin4(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("444444444444444444444444444444444444444");
         tabm[nmoulin4(tab11 ,tab12,tab13,ch,cout,tabm1  )]=1;
         goto L;
        }
        else if (tabm[nmoulin5(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("5555555555555555555555555555555555555");
         tabm[nmoulin5(tab11 ,tab12,tab13,ch,count ,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin6(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("6666666666666666666666666666666666666666666");
         tabm[nmoulin6(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
       else if (tabm[nmoulin7(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer(tabm,tab,tab11,tab12,tab13,cout);
         printf("777777777777777777777777777777777777777777777");
         tabm[nmoulin7(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
      }
cout++;
goto M;
W:
if(test(tab11,tab12,tab13)==0)
 {system("cls");
 color(10,0);
 game_over();
 Sleep(2000);
 system("cls");
 vert();
 }
 else {
      system("cls");
      color(12,0);
  game_over();
  Sleep(2000);
  system("cls");
 rouge();
 }
}
void  interface1()
{
printf("\n");
color(10,0);
printf("\t\t\n");
printf("\t\t                                                                                                                          \n");
printf("\t\t        _|  _|_|_|_|  _|    _|      _|_|_|    _|_|_|_|      _|      _|    _|_|    _|    _|  _|        _|_|_|  _|      _|  \n");
printf("\t\t        _|  _|        _|    _|      _|    _|  _|            _|_|  _|_|  _|    _|  _|    _|  _|          _|    _|_|    _|  \n");
printf("\t\t        _|  _|_|_|    _|    _|      _|    _|  _|_|_|        _|  _|  _|  _|    _|  _|    _|  _|          _|    _|  _|  _|  \n");
printf("\t\t  _|    _|  _|        _|    _|      _|    _|  _|            _|      _|  _|    _|  _|    _|  _|          _|    _|    _|_|  \n");
printf("\t\t    _|_|    _|_|_|_|    _|_|        _|_|_|    _|_|_|_|      _|      _|    _|_|      _|_|    _|_|_|_|  _|_|_|  _|      _|  \n");
printf("\t\t                                                                                                                          \n");
printf("\n");
color(15,0);
printf("      \n");
color(1,0);
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(6,0);
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>           JOUER                        $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>          REGLES                       $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>          QUITTER                      $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(11,0);
printf("\n\n\t\t\t<<<< quel est votr choix ? >>>");
color(15,0);
}
void interface2()
{
printf("\n");
color(14 ,0);
printf("\t\t                                                                                                                          \n");
printf("\t\t        _|  _|_|_|_|  _|    _|      _|_|_|    _|_|_|_|      _|      _|    _|_|    _|    _|  _|        _|_|_|  _|      _|  \n");
printf("\t\t        _|  _|        _|    _|      _|    _|  _|            _|_|  _|_|  _|    _|  _|    _|  _|          _|    _|_|    _|  \n");
printf("\t\t        _|  _|_|_|    _|    _|      _|    _|  _|_|_|        _|  _|  _|  _|    _|  _|    _|  _|          _|    _|  _|  _|  \n");
printf("\t\t  _|    _|  _|        _|    _|      _|    _|  _|            _|      _|  _|    _|  _|    _|  _|          _|    _|    _|_|  \n");
printf("\t\t    _|_|    _|_|_|_|    _|_|        _|_|_|    _|_|_|_|      _|      _|    _|_|      _|_|    _|_|_|_|  _|_|_|  _|      _|  \n");
printf("\t\t                                                                                                                          \n");
printf("\n");
color(15,0);
printf("      \n");
color(1,0);
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(2,0);
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        JOUEUR vs JOUEUR                $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       JOUEUR vs MACHINE               $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>          RETOUR                       $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(11,0);
printf("\n\n\t\t\t<<<< quel est votr choix ? >>>");
color(15,0);
}
  void interface3(char tab11[8],char tab12[8],char tab13[8],char *tab1,char *tab2,char *tab3)
{
color(11,0);
printf("\t\t                                                                                                                          \n");
printf("\t\t        _|  _|_|_|_|  _|    _|      _|_|_|    _|_|_|_|      _|      _|    _|_|    _|    _|  _|        _|_|_|  _|      _|  \n");
printf("\t\t        _|  _|        _|    _|      _|    _|  _|            _|_|  _|_|  _|    _|  _|    _|  _|          _|    _|_|    _|  \n");
printf("\t\t        _|  _|_|_|    _|    _|      _|    _|  _|_|_|        _|  _|  _|  _|    _|  _|    _|  _|          _|    _|  _|  _|  \n");
printf("\t\t  _|    _|  _|        _|    _|      _|    _|  _|            _|      _|  _|    _|  _|    _|  _|          _|    _|    _|_|  \n");
printf("\t\t    _|_|    _|_|_|_|    _|_|        _|_|_|    _|_|_|_|      _|      _|    _|_|      _|_|    _|_|_|_|  _|_|_|  _|      _|  \n");
printf("\t\t                                                                                                                          \n");
printf("\n");
color(13,0);
printf("\t\t########################################################################################################################## ");
color(15,0);
printf("\n\n\n\n");
printf("\t\t\t\t  ");print(tab11,tab1,0);printf("------------------------------------");print(tab11,tab1,1);printf("------------------------------------");print(tab11,tab1,2);
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");printf(" |          ");print(tab12,tab2,8);printf("------------------------");print(tab12,tab2,9);printf("------------------------");print(tab12,tab2,10);;printf("          |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |           |         ");print(tab13,tab3,16); printf("-------------");print(tab13,tab3,17);printf("------------");print(tab13,tab3,18);printf("          |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");print(tab11,tab1,7);printf("---------");print(tab12,tab2,15);printf("--------");print(tab13,tab3,23);printf("                            ");print(tab13,tab3,19);printf("---------");print(tab12,tab2,11);;printf("---------");print(tab11,tab1,3);
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |          |                              |           |           |");
printf("\n\t\t\t\t  ");printf(" |           |         ");print(tab13,tab3,22); printf("-------------");print(tab13,tab3,21);printf("------------");print(tab13,tab3,20);printf("          |           |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |           |                          |                          |           |");
printf("\n\t\t\t\t  ");printf(" |          ");print(tab12,tab2,14);printf("------------------------");print(tab12,tab2,13);printf("------------------------");print(tab12,tab2,12);;printf("          |");
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");printf(" |                                      |                                      |");
printf("\n\t\t\t\t  ");print(tab11,tab1,6);printf("------------------------------------");print(tab11,tab1,5);printf("------------------------------------");print(tab11,tab1,4);

}
void interface4(){
color(11,0);
printf("\t\t                                                                                                                          \n");
printf("\t\t        _|  _|_|_|_|  _|    _|      _|_|_|    _|_|_|_|      _|      _|    _|_|    _|    _|  _|        _|_|_|  _|      _|  \n");
printf("\t\t        _|  _|        _|    _|      _|    _|  _|            _|_|  _|_|  _|    _|  _|    _|  _|          _|    _|_|    _|  \n");
printf("\t\t        _|  _|_|_|    _|    _|      _|    _|  _|_|_|        _|  _|  _|  _|    _|  _|    _|  _|          _|    _|  _|  _|  \n");
printf("\t\t  _|    _|  _|        _|    _|      _|    _|  _|            _|      _|  _|    _|  _|    _|  _|          _|    _|    _|_|  \n");
printf("\t\t    _|_|    _|_|_|_|    _|_|        _|_|_|    _|_|_|_|      _|      _|    _|_|      _|_|    _|_|_|_|  _|_|_|  _|      _|  \n");
printf("\t\t                                                                                                                          \n");
printf("\n");
printf("\n\n");
color(14,0);
printf("      \n");
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("	\n");
printf("\n");
color(9,0);
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        FACILE                          $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       DIFFICILE                         $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>        RETOUR                         $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(4,0);printf("\n\n\t<<<< quel est votr choix ? >>>");

}
struct myDataType inputValue(char sym[24],int count,char tab11[8],char tab12[8],char tab13[8]){
    char value;
    int i;
    struct myDataType info;
char tab[24]="abcdefghijklmnopqrstuvwxyz";
int etat;
    inputAgain:
    if(count%2 == 0){
        color(10,0);
        printf("\n le vert Enter votre Choix :");color(15,0);
    }else{
          color(12,0);
        printf("\n le rouge Enter votre choix :");color(15,0);
    }
    scanf("%s",&value);
    for(i=0;i<24;i++){
        if(value == sym[i]){
            info.i = i;

       if (i <8 && tab11[i]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if ((i<16 && i>7 )&& tab12[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if (i>15 && tab13[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
       }
            if(count%2 == 0)
                info.ch ='#';

            else
                info.ch = '@';
            break;
        }else{
            info.i = -1;
            info.ch = ' ';
        }
    }
    if(info.i == -1){
        color(4,0);
        printf("\nInput is not Valid");
         color(15,0);
        goto inputAgain;
    }
    return info;
}

void print(char *tab,char *tab1 ,int i){
       i=i%8;
      if (tab[i]=='#'){
      color(0,10);
     printf(" %c ",tab1[i]);
      color(15,0);

      }
      else if (tab[i]=='@'){
      color(0,12);
      printf(" %c ",tab1[i]);
      color(15,0);
      }
      else {
          color(9,0);
        printf(" %c ", tab[i] ); color(15,0);}
    }
int moulin(char sym1[8],char sym2[8],char sym3[8],char ch,int count ){
    int i;
    for(i = 0;i<8; i+=2)
    {
        if((sym1[i] == ch && sym1[i+1]==ch&&sym1[i+2]==ch)||(sym1[0] == ch && sym1[6]==ch&&sym1[7]==ch)){
           return 1;
        }
        if((sym2[i] == ch && sym2[i+1]==ch&&sym2[i+2]==ch)||(sym2[0] == ch && sym2[6]==ch&&sym2[7]==ch)){
           return 1;
        }if((sym3[i] == ch && sym3[i+1]==ch&&sym3[i+2]==ch)||(sym3[0] == ch && sym3[6]==ch&&sym3[7]==ch)){
           return 1;}
        }
        for(int i=1;i<8;i+=2){
            if (sym1[i]==ch&&sym2[i]==ch&&sym3[i]==ch){
           return 1;
            }
        }
}
void capturer(int tabm[100],char *tab,char *tab11,char *tab12,char *tab13,int cout){
     char a;
     ac:
     if (cout%2==0){
            color(10,0);
     printf("\n\n  moulin!! de vert  vous pouvez capturer !!!");
     printf("\n\n quel pion  vous voulez capturer :");
     color(15,0);
     scanf("%s",&a);}
     else { color(12,0); printf("\n\n  moulin!! de rouge  vous pouvez capturer !!!");
     printf("\n\n quel pion  vous voulez capturer :");color(15,0);
     scanf("%s",&a);}
     for (int i=0;i<24;i++){
      if(a==tab[i] ) {
             if (i<8){
                                    switch(i){
                              case 0:
                                    if(tabm[1]==1 || tabm[8]==1)
                                          {
                                          printf("\n vous pouvez pas capturer ce  pion ,car il fait partie d'un moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 1:
                                  if(tabm[1]==1 || tabm[30]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 2:
                                    if(tabm[1]==1 || tabm[3]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 3:
                                    if(tabm[3]==1 || tabm[32]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 4:
                                     if(tabm[3]==1 || tabm[5]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 5:
                                   if(tabm[5]==1 || tabm[34]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 6:
                                   if(tabm[5]==1 || tabm[8]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 7:
                                   if(tabm[8]==1 || tabm[36]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                                    }

                                    }
            else if (7<i && i<16){
                                    switch(i%8){
                              case 0:
                                     if(tabm[10]==1 || tabm[16]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 1:
                                   if(tabm[10]==1 || tabm[30]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 2:
                                   if(tabm[10]==1 || tabm[12]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 3:
                                   if(tabm[12]==1 || tabm[32]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 4:
                                   if(tabm[12]==1 || tabm[14]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 5:
                                   if(tabm[14]==1 || tabm[34]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 6:
                                   if(tabm[16]==1 || tabm[14]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 7:
                                  if(tabm[16]==1 || tabm[36]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;}
                                    }
            else if (15<i && i<24){
                                   switch(i%8){
                              case 0:
                                    if(tabm[20]==1 || tabm[26]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 1:
                                    if(tabm[20]==1 || tabm[30]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 2:
                                     if(tabm[20]==1 || tabm[22]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 3:
                                   if(tabm[22]==1 || tabm[32]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 4:
                                     if(tabm[22]==1 || tabm[24]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 5:
                                   if(tabm[24]==1 || tabm[34]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 6:
                                    if(tabm[26]==1 || tabm[24]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 7:
                                   if(tabm[26]==1 || tabm[36]==1)
                                          {
                                          printf("\n vous pouvez pas capturer moulin ");
                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;}
                                    }

                                    }}
                                    }



int nmoulin1(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
     int i;
    for(i = 0;i<6; i+=2)
        {
        if((sym1[i] == ch && sym1[i+1]==ch&&sym1[i+2]==ch)&&tabm1[i+1]==0){
           return i+1;break;}}return 99;
           }
int nmoulin2(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
     int i;
    for(i = 0;i<6; i+=2)//it's for row
        {
                if((sym2[i] == ch && sym2[i+1]==ch&&sym2[i+2]==ch)&&tabm1[i+10]==0){
           return i+10;break;}}return 99;
           }
int nmoulin3(char sym1[8] ,char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
     int i;
    for(int i = 0;i<6; i+=2)
        {
        if((sym3[i] == ch && sym3[i+1]==ch && sym3[i+2]==ch) &&tabm1[i+20]==0){
           return i+20;break;}
           }return 99;}

int nmoulin4(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
     int i;
    for(i= 0;i<8; i+=2)
        {
        if (sym1[i+1]==ch&&sym2[i+1]==ch&&sym3[i+1]==ch &&tabm1[i+30]==0){
           return i+30;break;}} return 99;}

int nmoulin5(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
     if((sym1[0] == ch && sym1[6]==ch&&sym1[7]==ch)){
                  return 8;} else return 99;
                  }

int nmoulin6(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
 if((sym2[0] == ch && sym2[6]==ch&&sym2[7]==ch)){

                  return 16;
            }   else return 99;}
int nmoulin7(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70] )// pour ne repete meme moulin;
   {
 if((sym3[0] == ch && sym3[6]==ch&&sym3[7]==ch)){

                  return 26;}else return 99;}

int condition_dapl(char a,char d, char tab11[8],char tab12[8],char tab13[8] ){
if (a=='a'){ if(d==tab11[7]||d==tab11[1]) {return 1;} }
else if (a=='c'){ if(d==tab11[1]||d==tab11[3]) return 1; }
else if (a=='e'){ if(d==tab11[3]||d==tab11[5]) return 1; }
else if (a=='g'){ if(d==tab11[5]||d==tab11[7]) return 1; }

else if (a=='i'){ if(d==tab12[7]||d==tab12[1]) return 1; }
else if (a=='k'){ if(d==tab12[1]||d==tab12[3]) return 1; }
else if (a=='m'){ if(d==tab12[3]||d==tab12[5]) return 1; }
else if (a=='o'){ if(d==tab12[5]||d==tab12[7]) return 1; }

else if (a=='q'){ if(d==tab13[7]||d==tab13[1]) return 1; }
else if (a=='s'){ if(d==tab13[1]||d==tab13[3]) return 1; }
else if (a=='u'){ if(d==tab13[3]||d==tab13[5]) return 1; }
else if (a=='w'){ if(d==tab13[5]||d==tab13[7]) return 1; }

else if (a=='b'){if(d==tab11[0] || d==tab11[2]||d==tab12[1])return 1;}
else if (a=='d'){if(d==tab11[2] || d==tab11[4]||d==tab12[3])return 1;}
else if (a=='f'){if(d==tab11[4] || d==tab11[6]||d==tab12[5])return 1;}
else if (a=='h'){if(d==tab11[0] || d==tab11[7]||d==tab12[7])return 1;}

else if (a=='j'){if(d==tab12[0] || d==tab12[2]||d==tab11[1] ||d==tab13[1])return 1;}
else if (a=='l'){if(d==tab12[2] || d==tab12[4]||d==tab11[3] ||d==tab13[3])return 1;}
else if (a=='n'){if(d==tab12[6] || d==tab12[4]||d==tab11[5] ||d==tab13[5])return 1;}
else if (a=='p'){if(d==tab12[0] || d==tab12[6]||d==tab11[7] ||d==tab13[7])return 1;}

else if (a=='r'){if(d==tab13[0] || d==tab13[2]||d==tab12[1])return 1;}
else if (a=='t'){if(d==tab13[2] || d==tab13[4]||d==tab12[3])return 1;}
else if (a=='v'){if(d==tab13[4] || d==tab13[6]||d==tab12[5])return 1;}
else if (a=='x'){if(d==tab13[0] || d==tab13[6]||d==tab12[7])return 1;}
}

void joueurs(char j1[20],char j2[20]){
//char mo[]="\n    __                                               __               _                                      \n   / /__  _____   ____  ____  ____ ___  _____   ____/ /__  _____     (_)___  __  _____  __  ____________   _ \n  / / _ \/ ___/  / __ \/ __ \/ __ `__ \/ ___/  / __  / _ \/ ___/    / / __ \/ / / / _ \/ / / / ___/ ___/  (_)\n / /  __(__  )  / / / / /_/ / / / / / (__  )  / /_/ /  __(__  )    / / /_/ / /_/ /  __/ /_/ / /  (__  )  _   \n/_/\___/____/  /_/ /_/\____/_/ /_/ /_/____/   \__,_/\___/____/  __/ /\____/\__,_/\___/\__,_/_/  /____/  (_)  \n                                                               /___/                                         ";
//printf("%s",mo);
//
//char j[]="\n      :::        :::::::::: ::::::::          ::::    :::  ::::::::    :::   :::    ::::::::          :::::::::  :::::::::: ::::::::         ::::::::::: ::::::::  :::    ::: :::::::::: :::    ::: :::::::::   ::::::::            \n     :+:        :+:       :+:    :+:         :+:+:   :+: :+:    :+:  :+:+: :+:+:  :+:    :+:         :+:    :+: :+:       :+:    :+:            :+:    :+:    :+: :+:    :+: :+:        :+:    :+: :+:    :+: :+:    :+:        :+: \n    +:+        +:+       +:+                :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+ +:+                +:+    +:+ +:+       +:+                   +:+    +:+    +:+ +:+    +:+ +:+        +:+    +:+ +:+    +:+ +:+                    \n   +#+        +#++:++#  +#++:++#++         +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+ +#++:++#++         +#+    +:+ +#++:++#  +#++:++#++            +#+    +#+    +:+ +#+    +:+ +#++:++#   +#+    +:+ +#++:++#:  +#++:++#++              \n  +#+        +#+              +#+         +#+  +#+#+# +#+    +#+ +#+       +#+        +#+         +#+    +#+ +#+              +#+            +#+    +#+    +#+ +#+    +#+ +#+        +#+    +#+ +#+    +#+        +#+               \n #+#        #+#       #+#    #+#         #+#   #+#+# #+#    #+# #+#       #+# #+#    #+#         #+#    #+# #+#       #+#    #+#        #+# #+#    #+#    #+# #+#    #+# #+#        #+#    #+# #+#    #+# #+#    #+#        #+#     \n########## ########## ########          ###    ####  ########  ###       ###  ########          #########  ########## ########          #####      ########   ########  ##########  ########  ###    ###  ########                  ";
char jj[]="\n\t\t\t                                                                                                       \n\t\t\t _|                            _|                                                                      \n\t\t\t _|    _|_|      _|_|_|              _|_|    _|    _|    _|_|    _|    _|  _|  _|_|    _|_|_|      _|  \n\t\t\t _|  _|_|_|_|  _|_|            _|  _|    _|  _|    _|  _|_|_|_|  _|    _|  _|_|      _|_|              \n\t\t\t _|  _|            _|_|        _|  _|    _|  _|    _|  _|        _|    _|  _|            _|_|          \n\t\t\t _|    _|_|_|  _|_|_|          _|    _|_|      _|_|_|    _|_|_|    _|_|_|  _|        _|_|_|        _|  \n\t\t\t                               _|                                                                      \n\t\t\t                             _|                                                                        ";
color(12,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(10,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(14,0);
printf("\t\t\t%s",jj);
color(10,0);
printf("\n\n");
printf("                    	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
//printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(12,0);
//color(14,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(11,0);
printf("\n\n\n\n\t ..................vous etres pret a jouer ...................");
printf("\n--------------------------------------------------------------------");
color(10,0);
printf("\n\n\n>>>> le vert entrer votre : ");color(15,0);
scanf("%s",j1);
color(12,0);
printf("\n\n\n>>>> le rouge  entrer votre : ");color(15,0);
scanf("%s",j2);
printf("\n\n\t\t\t\t             --------------------------------------------------\n");
/*
printf("\t\t\t\t...loaging :|");
Sleep(1000);
color(0,2);printf("                ");
Sleep(1000);
color(0,2);printf("      ");
Sleep(1000);
printf("100%%");
//sleep(1000);
color(0,2);printf("                      ");color(15,0);printf(" |");
printf("\n\t\t\t\t             --------------------------------------------------\n");
Sleep(2000);

color(15,0);*/
}
void joueur_machine(char j1[20]){
//char mo[]="\n    __                                               __               _                                      \n   / /__  _____   ____  ____  ____ ___  _____   ____/ /__  _____     (_)___  __  _____  __  ____________   _ \n  / / _ \/ ___/  / __ \/ __ \/ __ `__ \/ ___/  / __  / _ \/ ___/    / / __ \/ / / / _ \/ / / / ___/ ___/  (_)\n / /  __(__  )  / / / / /_/ / / / / / (__  )  / /_/ /  __(__  )    / / /_/ / /_/ /  __/ /_/ / /  (__  )  _   \n/_/\___/____/  /_/ /_/\____/_/ /_/ /_/____/   \__,_/\___/____/  __/ /\____/\__,_/\___/\__,_/_/  /____/  (_)  \n                                                               /___/                                         ";
//printf("%s",mo);
//
//char j[]="\n      :::        :::::::::: ::::::::          ::::    :::  ::::::::    :::   :::    ::::::::          :::::::::  :::::::::: ::::::::         ::::::::::: ::::::::  :::    ::: :::::::::: :::    ::: :::::::::   ::::::::            \n     :+:        :+:       :+:    :+:         :+:+:   :+: :+:    :+:  :+:+: :+:+:  :+:    :+:         :+:    :+: :+:       :+:    :+:            :+:    :+:    :+: :+:    :+: :+:        :+:    :+: :+:    :+: :+:    :+:        :+: \n    +:+        +:+       +:+                :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+ +:+                +:+    +:+ +:+       +:+                   +:+    +:+    +:+ +:+    +:+ +:+        +:+    +:+ +:+    +:+ +:+                    \n   +#+        +#++:++#  +#++:++#++         +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+ +#++:++#++         +#+    +:+ +#++:++#  +#++:++#++            +#+    +#+    +:+ +#+    +:+ +#++:++#   +#+    +:+ +#++:++#:  +#++:++#++              \n  +#+        +#+              +#+         +#+  +#+#+# +#+    +#+ +#+       +#+        +#+         +#+    +#+ +#+              +#+            +#+    +#+    +#+ +#+    +#+ +#+        +#+    +#+ +#+    +#+        +#+               \n #+#        #+#       #+#    #+#         #+#   #+#+# #+#    #+# #+#       #+# #+#    #+#         #+#    #+# #+#       #+#    #+#        #+# #+#    #+#    #+# #+#    #+# #+#        #+#    #+# #+#    #+# #+#    #+#        #+#     \n########## ########## ########          ###    ####  ########  ###       ###  ########          #########  ########## ########          #####      ########   ########  ##########  ########  ###    ###  ########                  ";
char jj[]="\n\t\t\t                                                                                                       \n\t\t\t _|                            _|                                                                      \n\t\t\t _|    _|_|      _|_|_|              _|_|    _|    _|    _|_|    _|    _|  _|  _|_|    _|_|_|      _|  \n\t\t\t _|  _|_|_|_|  _|_|            _|  _|    _|  _|    _|  _|_|_|_|  _|    _|  _|_|      _|_|              \n\t\t\t _|  _|            _|_|        _|  _|    _|  _|    _|  _|        _|    _|  _|            _|_|          \n\t\t\t _|    _|_|_|  _|_|_|          _|    _|_|      _|_|_|    _|_|_|    _|_|_|  _|        _|_|_|        _|  \n\t\t\t                               _|                                                                      \n\t\t\t                             _|                                                                        ";
color(12,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(10,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(14,0);
printf("\t\t\t%s",jj);
color(10,0);
printf("\n\n");
printf("                    	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
//printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(12,0);
//color(14,0);
//printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                             $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(11,0);
printf("\n\n\n\n\t ..................vous etres pret a jouer ...................");
printf("\n--------------------------------------------------------------------");
color(10,0);
printf("\n\n\n>>>> le vert entrer votre : ");color(15,0);
scanf("%s",j1);
color(12,0);
/*
printf("\t\t\t\t...loaging :|");
Sleep(1000);
color(0,2);printf("                ");
Sleep(1000);
color(0,2);printf("      ");
Sleep(1000);
printf("100%%");
//sleep(1000);
color(0,2);printf("                      ");color(15,0);printf(" |");
printf("\n\t\t\t\t             --------------------------------------------------\n");
Sleep(2000);

color(15,0);*/
}
void calcul(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]){
int compv=compter(tab11,'#')+compter(tab12,'#')+compter(tab13,'#');
int compr=compter(tab11,'@')+compter(tab12,'@')+compter(tab13,'@');
printf("\n");
printf(">>");color(0,10);printf("  %d  ",compv);color(15,0);;printf(":  |>> %s    ",j1);printf("\n");
printf(">>");color(0,12);printf("  %d  ",compr);color(15,0);printf(":  |>> %s    ",j2);color(15,0);
printf("\n----------------------------------");
}

int  test(char *tab11,char *tab12,char *tab13){
int compv=compter(tab11,'#')+compter(tab12,'#')+compter(tab13,'#');
int compr=compter(tab11,'@')+compter(tab12,'@')+compter(tab13,'@');
if (compr<3) return 0;
else if(compv<3)  return 1;
else return 2;
}

int compter(char chaine[8],char a){
      int com=0;
      for (int i=0;i<8;i++){
            if (chaine[i]==a) com++;
      }
      return com;
}


void game_over(){
char t[]="                                                                                                                                                                   \n   ggggggggg   ggggg aaaaaaaaaaaaa      mmmmmmm    mmmmmmm       eeeeeeeeeeee            ooooooooooo vvvvvvv           vvvvvvv eeeeeeeeeeee    rrrrr   rrrrrrrrr   \n  g:::::::::ggg::::g a::::::::::::a   mm:::::::m  m:::::::mm   ee::::::::::::ee        oo:::::::::::oov:::::v         v:::::vee::::::::::::ee  r::::rrr:::::::::r  \n g:::::::::::::::::g aaaaaaaaa:::::a m::::::::::mm::::::::::m e::::::eeeee:::::ee     o:::::::::::::::ov:::::v       v:::::ve::::::eeeee:::::eer:::::::::::::::::r \ng::::::ggggg::::::gg          a::::a m::::::::::::::::::::::me::::::e     e:::::e     o:::::ooooo:::::o v:::::v     v:::::ve::::::e     e:::::err::::::rrrrr::::::r\ng:::::g     g:::::g    aaaaaaa:::::a m:::::mmm::::::mmm:::::me:::::::eeeee::::::e     o::::o     o::::o  v:::::v   v:::::v e:::::::eeeee::::::e r:::::r     r:::::r\ng:::::g     g:::::g  aa::::::::::::a m::::m   m::::m   m::::me:::::::::::::::::e      o::::o     o::::o   v:::::v v:::::v  e:::::::::::::::::e  r:::::r     rrrrrrr\ng:::::g     g:::::g a::::aaaa::::::a m::::m   m::::m   m::::me::::::eeeeeeeeeee       o::::o     o::::o    v:::::v:::::v   e::::::eeeeeeeeeee   r:::::r            \ng::::::g    g:::::ga::::a    a:::::a m::::m   m::::m   m::::me:::::::e                o::::o     o::::o     v:::::::::v    e:::::::e            r:::::r            \ng:::::::ggggg:::::ga::::a    a:::::a m::::m   m::::m   m::::me::::::::e               o:::::ooooo:::::o      v:::::::v     e::::::::e           r:::::r            \n g::::::::::::::::ga:::::aaaa::::::a m::::m   m::::m   m::::m e::::::::eeeeeeee       o:::::::::::::::o       v:::::v       e::::::::eeeeeeee   r:::::r            \n  gg::::::::::::::g a::::::::::aa:::am::::m   m::::m   m::::m  ee:::::::::::::e        oo:::::::::::oo         v:::v         ee:::::::::::::e   r:::::r            \n    gggggggg::::::g  aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee          ooooooooooo            vvv            eeeeeeeeeeeeee   rrrrrrr            \n            g:::::g                                                                                                                                                \ngggggg      g:::::g                                                                                                                                                \ng:::::gg   gg:::::g                                                                                                                                                \n g::::::ggg:::::::g                                                                                                                                                \n  gg:::::::::::::g                                                                                                                                                 \n    ggg::::::ggg                                                                                                                                                   \n       gggggg                                                                                                                                                      ";
printf("\n\n\n\n\n");
printf("%s",t);

}
void vert(){

char t[]="\t\t##       ########    ##     ## ######## ########  ########     ######      ###     ######   ##    ## ########    \n\t\t##       ##          ##     ## ##       ##     ##    ##       ##    ##    ## ##   ##    ##  ###   ## ##          \n\t\t##       ##          ##     ## ##       ##     ##    ##       ##         ##   ##  ##        ####  ## ##          \n\t\t##       ######      ##     ## ######   ########     ##       ##   #### ##     ## ##   #### ## ## ## ######      \n\t\t##       ##           ##   ##  ##       ##   ##      ##       ##    ##  ######### ##    ##  ##  #### ##          \n\t\t##       ##            ## ##   ##       ##    ##     ##       ##    ##  ##     ## ##    ##  ##   ### ##          \n\t\t######## ########       ###    ######## ##     ##    ##        ######   ##     ##  ######   ##    ## ########    ";
printf("\n\n\\n\n\n");
printf("%s",t);
color(5,0);
printf("\n\n\n\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        recommencer  :                  $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       quitter      :                  $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n\n");
color(11,0);
printf("\n\t <<<entrer votre choix>>>");
}
void rouge(){
      char t[]="\n\t\t\t#      ######    #####   ####  #    #  ####  ######     ####    ##    ####  #    # ######    \n\t\t\t#      #         #    # #    # #    # #    # #         #    #  #  #  #    # ##   # #         \n\t\t\t#      #####     #    # #    # #    # #      #####     #      #    # #      # #  # #####     \n\t\t\t#      #         #####  #    # #    # #  ### #         #  ### ###### #  ### #  # # #         \n\t\t\t#      #         #   #  #    # #    # #    # #         #    # #    # #    # #   ## #         \n\t\t\t###### ######    #    #  ####   ####   ####  ######     ####  #    #  ####  #    # ######    ";

      printf("\n\n\\n\n");
printf("%s",t);
color(5,0);
printf("\n\n\n\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        recommencer  :                  $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       quitter      :                  $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n\n");
color(11,0);
printf("\n\t <<<entrer votre choix>>>");

}

//=============================================  joueurVSmachine :====================================================================


struct myDataType inputValue2(char sym[24],int count,char tab11[8],char tab12[8],char tab13[8]){
    char value;
    int i;
    struct myDataType info;
char tab[24]="abcdefghijklmnopqrstuvwxyz";
int etat;
    inputAgain:
    if(count%2 == 0){
        color(10,0);
        printf("\n svp Enter votre Choix :");color(15,0);
        scanf("%s",&value);
    }
    else{
          value=tab[remplir_aleatoire(tab,tab11,tab12,tab13)];
    }

    for(i=0;i<24;i++){
        if(value == sym[i]){
            info.i = i;

       if (i <8 && tab11[i]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if ((i<16 && i>7 )&& tab12[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if (i>15 && tab13[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
       }
            if(count%2 == 0)
                info.ch ='#';

            else
                info.ch = '@';
            break;
        }else{
            info.i = -1;
            info.ch = ' ';
        }
    }
    if(info.i == -1){
        color(4,0);
        printf("\nInput is not Valid");
         color(15,0);
        goto inputAgain;
    }
    return info;
}

int remplir_aleatoire(char tab[24],char *tab11,char *tab12,char *tab13){
int i=0;
P:
srand(time(NULL));
i=rand()%24;
if(i<8){
      if(tab11[i]=='#' || tab11[i]=='@')
            goto P;
}
else if(i>7 && i<16){
      if(tab12[i%8]=='#' || tab12[i%8]=='@')
            goto P;
}
else if(i<25 && i>15){
      if(tab13[i%8]=='#' || tab13[i%8]=='@')
            goto P;
}

return i;
}


struct mestables emplacement2(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]){
      struct mestables TAB;
       int count = 0;
char a,d;
    struct myDataType info;
      char tab[24]="abcdefghijklmnopqrstuvwxyz";
      int tabm[100]={0};
      int tabm1[100]={0};//ppur memoriser les moulins !!
      tabm[99]=99;
      char tab1[8]="abcdefgh";
      char tab2[8]="ijklmnop";
      char tab3[8]="qrstuvwx";
      interface3(tab11,tab12,tab13,tab1,tab2,tab3);
       calcul(tab11,tab12,tab13,j1,j2);
      again:
//-----------------------------------------------
    if(count<18){
    info = inputValue2(tab,count,tab11,tab12,tab13);
    if (info.i<8){
    tab11[info.i] = info.ch;}
    else if (7<info.i && info.i<16){
    tab12[info.i%8] = info.ch;}
   else
   {tab13[info.i%8] = info.ch;}
   N:
         for (int i=0;i<70;i++){tabm1[i]=tabm[i];}
    system("cls");
   interface3(tab11,tab12,tab13,tab1,tab2,tab3);
    calcul(tab11,tab12,tab13,j1,j2);
if(moulin(tab11,tab12,tab13,info.ch,count )==1) {
    if (tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
          printf("1111111111111111111111111111111111");
         tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
        else if (tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count ,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("222222222222222222222222222222222222222");
         tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1  )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("333333333333333333333333333333333333333333333");
          tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("444444444444444444444444444444444444444");
         tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1  )]=1;
         goto N;
        }
        else if (tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("5555555555555555555555555555555555555");
         tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count ,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("6666666666666666666666666666666666666666666");
         tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
       else if (tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("777777777777777777777777777777777777777777777");
         tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
      }
      count++;
  goto again;
       }
       for (int i=0;i<8;i++){
            TAB.tab111[i]=tab11[i];
            TAB.tab112[i]=tab12[i];
            TAB.tab113[i]=tab13[i];
       }
       for (int i=0;i<70;i++){
            TAB.tabm1[i]=tabm1[i];
            TAB.tabm[i]=tabm[i];
       }
      return TAB;
}

void capturer2(int tabm[100],char *tab,char *tab11,char *tab12,char *tab13,int cout){
     char a;
     int r=0;
     ac:
      r++;
     if (cout%2==0){
      if(r>1)  printf("\n vous pouvez pas capturer moulin ");
            color(10,0);
     printf("\n\n  moulin!!  vous pouvez capturer !choisier svp !!");
     printf("\n\n quelle pierre  vous voulez capturer :");
     color(15,0);
     scanf("%s",&a);}
     else { color(12,0); printf("\n\n  moulin!! de la machine  !!");color(15,0);
      Sleep(2000);
     //printf("\n\n quelle pierre  vous voulez capturer :");color(15,0);
     a=tab[moulin_machine(tab11,tab12,tab13)];
     }
      for (int i=0;i<24;i++){
      if(a==tab[i] ) {
             if (i<8){
                                    switch(i){
                              case 0:
                                    if(tabm[1]==1 || tabm[8]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 1:
                                  if(tabm[1]==1 || tabm[30]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 2:
                                    if(tabm[1]==1 || tabm[3]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 3:
                                    if(tabm[3]==1 || tabm[32]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 4:
                                     if(tabm[3]==1 || tabm[5]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 5:
                                   if(tabm[5]==1 || tabm[34]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 6:
                                   if(tabm[5]==1 || tabm[8]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                              case 7:
                                   if(tabm[8]==1 || tabm[36]==1)
                                          {

                                          goto ac;}
                                    else tab11[i]=a;
                                    break;
                                    }

                                    }
            else if (7<i && i<16){
                                    switch(i%8){
                              case 0:
                                     if(tabm[10]==1 || tabm[16]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 1:
                                   if(tabm[10]==1 || tabm[30]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 2:
                                   if(tabm[10]==1 || tabm[12]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 3:
                                   if(tabm[12]==1 || tabm[32]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 4:
                                   if(tabm[12]==1 || tabm[14]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 5:
                                   if(tabm[14]==1 || tabm[34]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 6:
                                   if(tabm[16]==1 || tabm[14]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;
                              case 7:
                                  if(tabm[16]==1 || tabm[36]==1)
                                          {

                                          goto ac;}
                                    else tab12[i%8]=a;
                                    break;}
                                    }
            else if (15<i && i<24){
                                   switch(i%8){
                              case 0:
                                    if(tabm[20]==1 || tabm[26]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 1:
                                    if(tabm[20]==1 || tabm[30]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 2:
                                     if(tabm[20]==1 || tabm[22]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 3:
                                   if(tabm[22]==1 || tabm[32]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 4:
                                     if(tabm[22]==1 || tabm[24]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 5:
                                   if(tabm[24]==1 || tabm[34]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 6:
                                    if(tabm[26]==1 || tabm[24]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;
                              case 7:
                                   if(tabm[26]==1 || tabm[36]==1)
                                          {

                                          goto ac;}
                                    else tab13[i%8]=a;
                                    break;}
                                    }

                                    }}
                                    }


int moulin_machine(char *tab11,char *tab12,char *tab13){
int i;
ab:
srand(time(NULL));
i=rand()%24;
if (i<8){
    if(tab11[i]== '#')
      return i;
    else goto ab;
    }
    else if (7<i && i<16){
    if(tab12[i%8]== '#')
      return i;
    else goto ab;
    }
   else
   {if(tab13[i%8]== '#')
      return i;
    else goto ab;
      }

}
struct deplace deplacer_machine(char *tab11,char *tab12,char *tab13){
      char tab[24]="abcdefghijklmnopqrstuvwxyz";
    struct deplace re;
   hh:
    srand(time(NULL));
    int i=rand()%3;
if(i==0){
if(tab11[0]=='@'){if(tab11[7]==tab[7]){re.a=0;re.d=7; return re;} else if(tab11[1]==tab[1]){re.a=0;re.d=1;return re;}}
else if(tab11[1]=='@'){if(tab11[0]==tab[0]){re.a=1;re.d=0; return re;} else if(tab11[2]==tab[2]){re.a=1;re.d=2;return re;}  else if(tab12[1]==tab[9]){re.a=1;re.d=9;return re;}}
else if(tab11[2]=='@'){if(tab11[1]==tab[1]){re.a=2;re.d=1; return re;} else if(tab11[3]==tab[3]){re.a=2;re.d=3;return re;}}
else if(tab11[3]=='@'){if(tab11[2]==tab[2]){re.a=3;re.d=2; return re;} else if(tab11[4]==tab[4]){re.a=3;re.d=4;return re;}  else if(tab12[3]==tab[11]){re.a=3;re.d=11;return re;}}
else if(tab11[4]=='@'){if(tab11[3]==tab[3]){re.a=4;re.d=3; return re;} else if(tab11[5]==tab[5]){re.a=4;re.d=5;return re;}}
else if(tab11[5]=='@'){if(tab11[4]==tab[4]){re.a=5;re.d=4; return re;} else if(tab11[6]==tab[6]){re.a=5;re.d=6;return re;}  else if(tab12[5]==tab[13]){re.a=5;re.d=13;return re;}}
else if(tab11[6]=='@'){if(tab11[5]==tab[5]){re.a=6;re.d=5; return re;} else if(tab11[7]==tab[7]){re.a=6;re.d=7;return re;}}
else if(tab11[7]=='@'){if(tab11[6]==tab[6]){re.a=7;re.d=6; return re;} else if(tab11[0]==tab[0]){re.a=7;re.d=0;return re;}  else if(tab12[7]==tab[23]){re.a=7;re.d=15;return re;}}
goto hh;
}
else if(i==1){
if(tab12[0]=='@'){if(tab11[7]==tab[15]){re.a=8;re.d=15; return re;} else if(tab12[1]==tab[9]){re.a=8;re.d=9;return re;}}
else if(tab12[1]=='@'){if(tab12[0]==tab[8]){re.a=9;re.d=8; return re;} else if(tab12[2]==tab[10]){re.a=9;re.d=10;return re;} else if(tab11[1]==tab[1]){re.a=9;re.d=1;return re;} else if(tab13[1]==tab[17]){re.a=9;re.d=17;return re;}}
else if(tab12[2]=='@'){if(tab12[1]==tab[9]){re.a=10;re.d=9; return re;} else if(tab12[3]==tab[11]){re.a=10;re.d=11;return re;}}
else if(tab12[3]=='@'){if(tab12[2]==tab[10]){re.a=11;re.d=10; return re;} else if(tab12[4]==tab[12]){re.a=11;re.d=12;return re;} else if(tab11[3]==tab[3]){re.a=11;re.d=3;return re;} else if(tab13[3]==tab[19]){re.a=11;re.d=19;return re;}}
else if(tab12[4]=='@'){if(tab12[3]==tab[11]){re.a=12;re.d=11; return re;} else if(tab12[5]==tab[13]){re.a=12;re.d=13;return re;}}
else if(tab12[5]=='@'){if(tab12[4]==tab[12]){re.a=13;re.d=12; return re;} else if(tab12[6]==tab[14]){re.a=13;re.d=14;return re;} else if(tab11[5]==tab[5]){re.a=13;re.d=5;return re;} else if(tab13[5]==tab[21]){re.a=13;re.d=21;return re;}}
else if(tab12[6]=='@'){if(tab12[5]==tab[13]){re.a=14;re.d=13; return re;} else if(tab12[7]==tab[15]){re.a=14;re.d=15;return re;}}
else if(tab12[7]=='@'){if(tab12[6]==tab[14]){re.a=15;re.d=14; return re;} else if(tab12[0]==tab[8]){re.a=15;re.d=8;return re;} else if(tab11[7]==tab[7]){re.a=15;re.d=7;return re;} else if(tab13[7]==tab[23]){re.a=15;re.d=23;return re;}}
goto hh;
}
else{
if(tab13[0]=='@'){if(tab13[7]==tab[23]){re.a=16;re.d=23; return re;} else if(tab13[1]==tab[17]){re.a=16;re.d=17;return re;}}
else if(tab13[1]=='@'){if(tab13[0]==tab[16]){re.a=17;re.d=16; return re;} else if(tab13[2]==tab[18]){re.a=17;re.d=18;return re;}  else if(tab12[1]==tab[9]){re.a=1;re.d=9;return re;}}
else if(tab13[2]=='@'){if(tab13[1]==tab[17]){re.a=18;re.d=17; return re;} else if(tab13[3]==tab[19]){re.a=18;re.d=19;return re;}}
else if(tab13[3]=='@'){if(tab13[2]==tab[18]){re.a=19;re.d=18; return re;} else if(tab13[4]==tab[20]){re.a=19;re.d=20;return re;}else if(tab12[3]==tab[11]){re.a=3;re.d=11;return re;}}
else if(tab13[4]=='@'){if(tab13[3]==tab[19]){re.a=20;re.d=19; return re;} else if(tab13[5]==tab[21]){re.a=20;re.d=21;return re;}}
else if(tab13[5]=='@'){if(tab13[4]==tab[20]){re.a=21;re.d=20; return re;} else if(tab13[6]==tab[22]){re.a=21;re.d=22;return re;} else if(tab12[5]==tab[13]){re.a=5;re.d=13;return re;}}
else if(tab13[6]=='@'){if(tab13[5]==tab[21]){re.a=22;re.d=21; return re;} else if(tab13[7]==tab[23]){re.a=22;re.d=23;return re;}}
else if(tab13[7]=='@'){if(tab13[6]==tab[22]){re.a=23;re.d=22; return re;} else if(tab13[0]==tab[16]){re.a=23;re.d=16;return re;} else if(tab12[7]==tab[23]){re.a=7;re.d=15;return re;}}
goto hh;}

}


void deplacement2(char tab11[8],char tab12[8],char tab13[8],int tabm1[100],int tabm[100],char j1[20],char j2[20]){
           char tab[24]="abcdefghijklmnopqrstuvwx";
      char tab1[8]="abcdefgh";
      char tab2[8]="ijklmnop";
      char tab3[8]="qrstuvwx";
char a,d;
  int cout=0,count=0;
  char z;
color(13,0);
printf("\n vous etes  maintenant dans la phase de mouvement ");
M:
      if (test(tab11,tab12,tab13)==0|| test(tab11,tab12,tab13)==1){goto W;}
       struct deplace re=deplacer_machine(tab11,tab12,tab13);
      if (cout%2==0){
            color(10,0);
           printf("\n\t\t le vert  : \n >>deplacer : ")   ; color(14,0);
            //color(15,0);
           scanf("%s",&a);

      }
      else
        {
               color(10,0);
           printf("\n\t\t le vert  : \n >>deplacer : ")   ; color(15,0);
            //color(15,0);

            a=tab[re.a];

}
char ch;
if (cout%2==0)ch='#';
else ch='@';
int p=0;
 for (int i=0;i<24;i++){

      if(a==tab[i]) {

            if (i<8){
                                    if (tab11[i] ==a){printf("\n  invalid------------------ "); goto M;}
                                     else{
                                    tab11[i]=a ;
                                    switch(i){
                              case 0:
                                    tabm[1]=0;tabm[8]=0;
                                    break;
                              case 1:
                                    tabm[1]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[1]=0;tabm[3]=0;
                                     break;
                              case 3:
                                    tabm[3]=0;tabm1[3]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[3]=0;tabm1[3]=0; tabm[5]=0;tabm1[5]=0;
                                     break;
                              case 5:
                                   tabm[5]=0;tabm1[5]=0; tabm[34]=0;tabm1[34]=0;
                                    break;
                              case 6:
                                   tabm[8]=0;tabm1[8]=0; tabm[5]=0;tabm1[5]=0;
                                    break;
                              case 7:
                                  tabm[8]=0;tabm1[8]=0; tabm[36]=0;tabm1[36]=0;
                                   break;
                                    }

                                    }}
            else if (7<i && i<16){ if (tab12[i%8] ==a){printf("\n  invalid --------------------------");goto M;}
                                    else{
                                    tab12[i%8]=a;
                                    switch(i%8){
                              case 0:
                                    tabm[10]=0;tabm[16]=0;
                                     break;
                              case 1:
                                    tabm[10]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[10]=0;tabm[12]=0;
                                     break;
                              case 3:
                                    tabm[12]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[12]=0;tabm[14]=0;
                                    break;
                              case 5:
                                   tabm[14]=0; tabm[34]=0;
                                    break;
                              case 6:
                                   tabm[16]=0; tabm[14]=0;
                                    break;
                              case 7:
                                  tabm[16]=0; tabm[36]=0;
                                  break;
                                  }
                                    }}
            else if (15<i && i<24){ if (tab13[i%8] ==a){printf("\n  invalid------------------------------ ");goto M;}
                                    else{
                                    tab13[i%8]=a;
                                   switch(i%8){
                              case 0:
                                    tabm[20]=0;tabm[26]=0;
                                    break;
                              case 1:
                                    tabm[20]=0;tabm[30]=0;
                                     break;
                              case 2:
                                    tabm[20]=0;tabm[22]=0;
                                     break;
                              case 3:
                                    tabm[22]=0; tabm[32]=0;
                                     break;
                              case 4:
                                    tabm[22]=0;tabm[24]=0;
                                     break;
                              case 5:
                                   tabm[24]=0; tabm[34]=0;
                                    break;
                              case 6:
                                   tabm[26]=0; tabm[24]=0;
                                    break;
                              case 7:
                                  tabm[26]=0; tabm[36]=0;
                                   break;}
                                    }}p++;}
                   }
                   if (p==0){printf("\n invalid============================== ");goto M;}
A:
       if (cout%2==0){
            color(10,0);
            printf ("\t\t >>vers :"); color(14,0);
            scanf("%c",&d);
            scanf("%c",&d);
            color(15,0);

      }
      else{

  d=tab[re.d];


      }
if (condition_dapl(a,d,tab11,tab12,tab13)==1){
   for (int i=0;i<24;i++){
      if(d==tab[i]){
        if (cout%2==0)    {
           if (i<8){
              if (tab11[i]=='#') {printf("\n invalid "); goto A;}
              else
                  tab11[i] ='#';
                  }
           else if (7<i && i<16){
              if (tab12[i%8]=='#') {printf("\n invalid");goto A;}
              else
                  tab12[i%8] ='#';}
           else
              if (tab13[i%8]=='#') {printf("\n invalid");goto A;}
              else
                  {tab13[i%8] ='#';}
                        }
        else {
            if (i<8){
                if (tab11[i]=='@') {printf("\n invalid "); goto A;}
                else
                  tab11[i] ='@';}
           else if (7<i && i<16){
              if (tab12[i%8]=='@') {printf("\n invalid ");goto A;}
              else
                  tab12[i%8] ='@';}
           else
               if (tab13[i%8]=='@') {printf("\n invalid ");goto A;}
                else
                  tab13[i%8] ='@';
            }
                 }
                      }
                      }
            else { //color(4,0); printf("\n invalid !!!\n"); color(15,0);
            goto A;}
 L:
for (int i=0;i<70;i++){tabm1[i]=tabm[i];}
system("cls");

/*char ch;
if (cout%2==0)ch='#';
else ch='@';*/
interface3(tab11,tab12,tab13,tab1,tab2,tab3);
calcul(tab11,tab12,tab13,j1,j2);
if(moulin(tab11,tab12,tab13,ch,cout )==1){
    if (tabm[nmoulin1(tab11 ,tab12,tab13,ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
          printf("1111111111111111111111111111111111");
         tabm[nmoulin1(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
         else if (tabm[nmoulin2(tab11 ,tab12,tab13,ch,cout ,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("222222222222222222222222222222222222222");
         tabm[nmoulin2(tab11 ,tab12,tab13,ch,cout,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin3(tab11 ,tab12,tab13,ch,cout,tabm1  )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("333333333333333333333333333333333333333333333");
         tabm[nmoulin3(tab11 ,tab12,tab13,ch,cout,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin4(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("444444444444444444444444444444444444444");
         tabm[nmoulin4(tab11 ,tab12,tab13,ch,cout,tabm1  )]=1;
         goto L;
        }
        else if (tabm[nmoulin5(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("5555555555555555555555555555555555555");
         tabm[nmoulin5(tab11 ,tab12,tab13,ch,count ,tabm1)]=1;
         goto L;
        }
        else if (tabm[nmoulin6(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("6666666666666666666666666666666666666666666");
         tabm[nmoulin6(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
       else if (tabm[nmoulin7(tab11 ,tab12,tab13,ch,cout,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,cout);
         printf("777777777777777777777777777777777777777777777");
         tabm[nmoulin7(tab11 ,tab12,tab13,ch,cout,tabm1 )]=1;
         goto L;
        }
      }
cout++;
goto M;
W:
if(test(tab11,tab12,tab13)==0)
 {system("cls");
 color(10,0);
 game_over();
 Sleep(2000);
 system("cls");
 vert();
 }
 else {
      system("cls");
      color(12,0);
  game_over();
  Sleep(2000);
  system("cls");
 rouge();
 }
}
/*char deplacer_machine(char *tab11,char *tab12,char *tab13){
for (int i=0;i<24;i++){
int x=i-1;if(x<0) x=7;
int y=i+1;
if(i<8){
       if((tab11[x%8]!='#' || tab11[x%8]!='@') && (tab11[y%8]!='#'||tab11[y%8]!='@')) {
      if (tab11[i%8]=='@') {return tab11[i%8]; break;}}
}
else if(i>7 && i<16){
      //if(tab12[i%8]!='@');
      if((tab12[x%8]!='#' || tab12[x%8]!='@') && (tab12[y%8]!='#'||tab12[y%8]!='@')) {
      if (tab12[i%8]=='@') {return tab12[i%8]; break;}}
}
else if(i<25 && i>15){
      if((tab13[x%8]!='#' || tab13[x%8]!='@') && (tab13[y%8]!='#'||tab13[y%8]!='@')){
      if (tab13[i%8]=='@') {return tab13[i%8]; break;}}
}
      }
}*/
/*int vers_machine(char *tab11,char *tab12,char *tab13){
char tab[24]="abcdefghijklmnopqrstuvwxyz";
//char a=tab[deplacer_machine(tab11,tab12,tab13)];
for(int i=0;i<24;i++){
if(deplacer_machine(tab11,tab12,tab13)==i){
      if(i<8){
    if (tab[i]==tab11[i]){
      return i+1;break;}
}
else if(i>7 && i<16){
      if (tab[i]==tab12[i%8]){
      return i+1;break;}
}
else if(i<25 && i>15){
       if (tab[i]==tab13[i%8]){
      return i+1;break;}
}
}

}
}
*/
/*int deplacer_machine(char *tab11,char *tab12,char *tab13){
       char tab[24]="abcdefghijklmnopqrstuvwxyz";
for (int i=0;i<24;i++){
int x=i-1;
if(i==0) x=7;
int y=i+1;
if(i<8){
       if((  tab[x]==tab11[x%8] ||  tab[y]==tab11[y%8]) ) {
      if (tab11[i%8]=='@') {return i; break;}}
}
else if(i>7 && i<16){
      //if(tab12[i%8]!='@');
      if(  tab[x]==tab12[x%8] ||  tab[y]==tab12[y%8]) {
      if (tab12[i%8]=='@') {return i; break;}}
}
else if(i<25 && i>15){
      if( tab[x]==tab13[x%8] ||  tab[y]==tab13[y%8]) {
      if (tab13[i%8]=='@') {return i; break;}}
}
      }
}*/


////====================difficile :===========================================================================================
struct myDataType inputValue3(char sym[24],int count,char tab11[8],char tab12[8],char tab13[8]){
    char value;
    int i;
    struct myDataType info;
char tab[24]="abcdefghijklmnopqrstuvwxyz";
int etat;
    inputAgain:
    if(count%2 == 0){
        color(10,0);
        printf("\n svp Enter votre Choix :");color(15,0);
        scanf("%s",&value);
    }
    else{

        value=tab[cormp(tab11,tab12,tab13)];
        // value=tab[remplir_aleatoire(tab,tab11,tab12,tab13)];

    }

    for(i=0;i<24;i++){
        if(value == sym[i]){
            info.i = i;

       if (i <8 && tab11[i]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if ((i<16 && i>7 )&& tab12[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
        }
       else if (i>15 && tab13[i%8]!=sym[i]) {
            info.i = -1;
            info.ch = ' ';
       }
            if(count%2 == 0)
                info.ch ='#';

            else
                info.ch = '@';
            break;
        }else{
            info.i = -1;
            info.ch = ' ';
        }
    }
    if(info.i == -1){
        color(4,0);
        printf("\nInput is not Valid");
         color(15,0);
        goto inputAgain;
    }
    return info;
}

struct mestables emplacement3(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]){
      struct mestables TAB;
       int count = 0;
char a,d;
    struct myDataType info;
      char tab[24]="abcdefghijklmnopqrstuvwxyz";
      int tabm[100]={0};
      int tabm1[100]={0};//ppur memoriser les moulins !!
      tabm[99]=99;
      char tab1[8]="abcdefgh";
      char tab2[8]="ijklmnop";
      char tab3[8]="qrstuvwx";
      interface3(tab11,tab12,tab13,tab1,tab2,tab3);
       calcul(tab11,tab12,tab13,j1,j2);
      again:
//-----------------------------------------------
    if(count<18){
    info = inputValue3(tab,count,tab11,tab12,tab13);
    if (info.i<8){
    tab11[info.i] = info.ch;}
    else if (7<info.i && info.i<16){
    tab12[info.i%8] = info.ch;}
   else
   {tab13[info.i%8] = info.ch;}
   N:
         for (int i=0;i<70;i++){tabm1[i]=tabm[i];}
    system("cls");
   interface3(tab11,tab12,tab13,tab1,tab2,tab3);
    calcul(tab11,tab12,tab13,j1,j2);
if(moulin(tab11,tab12,tab13,info.ch,count )==1) {
    if (tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
          printf("1111111111111111111111111111111111");
         tabm[nmoulin1(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
        else if (tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count ,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("222222222222222222222222222222222222222");
         tabm[nmoulin2(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1  )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("333333333333333333333333333333333333333333333");
          tabm[nmoulin3(tab11 ,tab12,tab13,info.ch,count,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("444444444444444444444444444444444444444");
         tabm[nmoulin4(tab11 ,tab12,tab13,info.ch,count,tabm1  )]=1;
         goto N;
        }
        else if (tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("5555555555555555555555555555555555555");
         tabm[nmoulin5(tab11 ,tab12,tab13,info.ch,count ,tabm1)]=1;
         goto N;
        }
        else if (tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("6666666666666666666666666666666666666666666");
         tabm[nmoulin6(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
       else if (tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]==0){
         capturer2(tabm,tab,tab11,tab12,tab13,count);
         printf("777777777777777777777777777777777777777777777");
         tabm[nmoulin7(tab11 ,tab12,tab13,info.ch,count,tabm1 )]=1;
         goto N;
        }
      }
      count++;
  goto again;
       }
       for (int i=0;i<8;i++){
            TAB.tab111[i]=tab11[i];
            TAB.tab112[i]=tab12[i];
            TAB.tab113[i]=tab13[i];
       }
       for (int i=0;i<70;i++){
            TAB.tabm1[i]=tabm1[i];
            TAB.tabm[i]=tabm[i];
       }
      return TAB;
}


int cormp(char *t,char *t1,char *t2){
       char tab[24]="abcdefghijklmnopqrstuvwxyz";
        //char tab2[24]="ijklmnop";
         //char tab2[24]="qrstuvwxyz";

            if(t[0]=='@'&&t[1]=='@'&&t[(2)]==tab[2]) return 2;
              else  if(t[0]=='@'&&t[2]=='@'&&t[(1)]==tab[1])  return 1;
              else  if(t[2]=='@'&&t[1]=='@'&&t[(0)]==tab[0]) return 0;
              // else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

            else if(t[2]=='@'&&t[3]=='@'&&t[4]==tab[4]) return 4;
              else  if(t[2]=='@'&&t[4]=='@'&&t[3]==tab[3])  return 3;
              else  if(t[4]=='@'&&t[3]=='@'&&t[2]==tab[2]) return 2;
              // else if (t[2]=='@'&&tab[3]==t[3]) {return 1;}

               else if(t[4]=='@'&&t[5]=='@'&&t[(6)]==tab[6]) return 6;
              else  if(t[4]=='@'&&t[6]=='@'&&t[(5)]==tab[5])  return 5;
              else  if(t[6]=='@'&&t[5]=='@'&&t[(4)]==tab[4]) return 4;
               //else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

                 else if(t[6]=='@'&&t[7]=='@'&&t[0]==tab[0]) return 0;
              else  if(t[6]=='@'&&t[0]=='@'&&t[(7)]==tab[7])  return 7;
              else  if(t[0]=='@'&&t[7]=='@'&&t[(6)]==tab[6]) return 6;
             //  else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}
//=============================================================================
               else if(t[0]=='#'&&t[1]=='#'&&t[(2)]==tab[2]) {return 2;}
             else if(t[0]=='#'&&t[2]=='#'&&t[(1)]==tab[1]){return 1;}
              else if(t[2]=='#'&&t[1]=='#'&&t[(0)]==tab[0]) {return 0;}

              else if(t[2]=='#'&&t[3]=='#'&&t[4]==tab[4]) {return 4;}
             else if(t[2]=='#'&&t[4]=='#'&&t[(3)]==tab[3]){return 3;}
              else if(t[4]=='#'&&t[3]=='#'&&t[(2)]==tab[2]) {return 2;}

              else if(t[4]=='#'&&t[5]=='#'&&t[(6)]==tab[6]) {return 6;}
             else if(t[4]=='#'&&t[6]=='#'&&t[(5)]==tab[5]){return 5;}
              else if(t[6]=='#'&&t[5]=='#'&&t[(4)]==tab[4]) {return 4;}

                  else if(t[6]=='#'&&t[7]=='#'&&t[(0)]==tab[0]) {return 0;}
             else if(t[6]=='#'&&t[0]=='#'&&t[(7)]==tab[7]){return 7;}
              else if(t[0]=='#'&&t[7]=='#'&&t[(6)]==tab[6]) {return 6;}

//==================pour tab12=========================================================
        else  if(t1[0]=='@'&&t1[1]=='@'&&t1[(2)]==tab[10]) return 10;
              else  if(t1[0]=='@'&&t1[2]=='@'&&t1[(1)]==tab[9])  return 9;
              else  if(t1[2]=='@'&&t1[1]=='@'&&t1[(0)]==tab[8]) return 8;
              // else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

            else if(t1[2]=='@'&&t1[3]=='@'&&t1[4]==tab[12]) return 12;
              else  if(t1[2]=='@'&&t1[4]=='@'&&t1[3]==tab[11])  return 11;
              else  if(t1[4]=='@'&&t1[3]=='@'&&t1[2]==tab[10]) return 10;
              // else if (t[2]=='@'&&tab[3]==t[3]) {return 1;}

               else if(t1[4]=='@'&&t1[5]=='@'&&t1[(6)]==tab[14]) return 14;
              else  if(t1[4]=='@'&&t1[6]=='@'&&t1[(5)]==tab[13])  return 13;
              else  if(t1[6]=='@'&&t1[5]=='@'&&t1[(4)]==tab[12]) return 12;
               //else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

                 else if(t1[6]=='@'&&t1[7]=='@'&&t1[0]==tab[8]) return 8;
              else  if(t1[6]=='@'&&t1[0]=='@'&&t1[(7)]==tab[15])  return 15;
              else  if(t1[0]=='@'&&t1[7]=='@'&&t1[(6)]==tab[14]) return 14;
             //  else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}
//=============================================================================
               else if(t1[0]=='#'&&t1[1]=='#'&&t1[(2)]==tab[10]) {return 10;}
             else if(t1[0]=='#'&&t1[2]=='#'&&t1[(1)]==tab[11]){return 11;}
              else if(t1[2]=='#'&&t1[1]=='#'&&t1[(0)]==tab[8]) {return 8;}

              else if(t1[2]=='#'&&t1[3]=='#'&&t1[4]==tab[12]) {return 12;}
             else if(t1[2]=='#'&&t1[4]=='#'&&t1[(3)]==tab[11]){return 11;}
              else if(t1[4]=='#'&&t1[3]=='#'&&t1[(2)]==tab[10]) {return 10;}

              else if(t1[4]=='#'&&t1[5]=='#'&&t1[(6)]==tab[14]) {return 14;}
             else if(t1[4]=='#'&&t1[6]=='#'&&t1[(5)]==tab[13]){return 13;}
              else if(t1[6]=='#'&&t1[5]=='#'&&t1[(4)]==tab[12]) {return 12;}

                  else if(t1[6]=='#'&&t1[7]=='#'&&t1[(0)]==tab[8]) {return 8;}
             else if(t1[6]=='#'&&t1[0]=='#'&&t1[(7)]==tab[15]){return 15;}
              else if(t1[0]=='#'&&t1[7]=='#'&&t1[(6)]==tab[14]) {return 14;}

//=======================pour tab13========================================================
              else if(t2[0]=='@'&&t2[1]=='@'&&t2[(2)]==tab[18]) return 18;
              else  if(t2[0]=='@'&&t2[2]=='@'&&t2[(1)]==tab[17])  return 17;
              else  if(t2[2]=='@'&&t2[1]=='@'&&t2[(0)]==tab[16]) return 16;
              // else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

            else if(t2[2]=='@'&&t2[3]=='@'&&t[4]==tab[20]) return 20;
              else  if(t2[2]=='@'&&t2[4]=='@'&&t2[3]==tab[19])  return 19;
              else  if(t2[4]=='@'&&t2[3]=='@'&&t2[2]==tab[18]) return 18;
              // else if (t[2]=='@'&&tab[3]==t[3]) {return 1;}

               else if(t2[4]=='@'&&t2[5]=='@'&&t2[(6)]==tab[22]) return 22;
              else  if(t2[4]=='@'&&t2[6]=='@'&&t2[(5)]==tab[21])  return 21;
              else  if(t2[6]=='@'&&t2[5]=='@'&&t2[(4)]==tab[20]) return 20;
               //else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}

                 else if(t2[6]=='@'&&t2[7]=='@'&&t2[0]==tab[16]) return 16;
              else  if(t2[6]=='@'&&t2[0]=='@'&&t2[(7)]==tab[23])  return 23;
              else  if(t2[0]=='@'&&t2[7]=='@'&&t2[(6)]==tab[22]) return 22;
             //  else if (t[0]=='@'&&tab[1]==t[1]) {return 1;}
//=============================================================================
               else if(t2[0]=='#'&&t2[1]=='#'&&t2[(2)]==tab[18]) {return 18;}
             else if(t2[0]=='#'&&t2[2]=='#'&&t2[(1)]==tab[17]){return 17;}
              else if(t2[2]=='#'&&t2[1]=='#'&&t2[(0)]==tab[16]) {return 16;}

              else if(t2[2]=='#'&&t2[3]=='#'&&t2[4]==tab[20]) {return 20;}
             else if(t2[2]=='#'&&t2[4]=='#'&&t2[(3)]==tab[19]){return 19;}
              else if(t2[4]=='#'&&t2[3]=='#'&&t2[(2)]==tab[18]) {return 18;}

              else if(t2[4]=='#'&&t2[5]=='#'&&t2[(6)]==tab[22]) {return 22;}
             else if(t2[4]=='#'&&t2[6]=='#'&&t2[(5)]==tab[21]){return 21;}
              else if(t2[6]=='#'&&t2[5]=='#'&&t2[(4)]==tab[20]) {return 20;}

                  else if(t2[6]=='#'&&t2[7]=='#'&&t2[(0)]==tab[16]) {return 16;}
             else if(t2[6]=='#'&&t2[0]=='#'&&t2[(7)]==tab[23]){return 23;}
              else if(t2[0]=='#'&&t2[7]=='#'&&t2[(6)]==tab[22]) {return 22;}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
          else if (t[1]=='@'&&t1[1]=='@'&&t2[1]==tab[17]) return 17;
            else if (t[1]=='@'&&t2[1]=='@'&&t1[1]==tab[9]) return 9;
            else if (t1[1]=='@'&&t2[1]=='@'&&t[1]==tab[1]) return 1;

              else if (t[3]=='@'&&t1[3]=='@'&&t2[3]==tab[19]) return 19;
            else if (t[3]=='@'&&t2[3]=='@'&&t1[3]==tab[11]) return 11;
            else if (t1[3]=='@'&&t2[3]=='@'&&t[3]==tab[3]) return 3;

             else if (t[5]=='@'&&t1[5]=='@'&&t2[5]==tab[21]) return 21;
            else if (t[5]=='@'&&t2[5]=='@'&&t1[5]==tab[13]) return 13;
            else if (t1[5]=='@'&&t2[5]=='@'&&t[5]==tab[5]) return 5;

             else if (t[7]=='@'&&t1[7]=='@'&&t2[7]==tab[23]) return 23;
            else if (t[7]=='@'&&t2[7]=='@'&&t1[7]==tab[15]) return 15;
            else if (t1[7]=='@'&&t2[7]=='@'&&t[7]==tab[7]) return 7;
//......................................................................................
 else if (t[1]=='#'&&t1[1]=='#'&&t2[1]==tab[17]) return 17;
            else if (t[1]=='#'&&t2[1]=='#'&&t1[1]==tab[9]) return 9;
            else if (t1[1]=='#'&&t2[1]=='#'&&t[1]==tab[1]) return 1;

              else if (t[3]=='#'&&t1[3]=='#'&&t2[3]==tab[19]) return 19;
            else if (t[3]=='#'&&t2[3]=='#'&&t1[3]==tab[11]) return 11;
            else if (t1[3]=='#'&&t2[3]=='#'&&t[3]==tab[3]) return 3;

             else if (t[5]=='#'&&t1[5]=='#'&&t2[5]==tab[21]) return 21;
            else if (t[5]=='#'&&t2[5]=='#'&&t1[5]==tab[13]) return 13;
            else if (t1[5]=='#'&&t2[5]=='#'&&t[5]==tab[5]) return 5;

             else if (t[7]=='#'&&t1[7]=='#'&&t2[7]==tab[23]) return 23;
            else if (t[7]=='#'&&t2[7]=='#'&&t1[7]==tab[15]) return 15;
            else if (t1[7]=='#'&&t2[7]=='#'&&t[7]==tab[7]) return 7;

//============================================================================================

return remplir_aleatoire(tab,t,t1,t2);
}
void regles(){
printf("\n");
color(3 ,0);
printf("\t\t                                                                                                                          \n");
printf("\t\t        _|  _|_|_|_|  _|    _|      _|_|_|    _|_|_|_|      _|      _|    _|_|    _|    _|  _|        _|_|_|  _|      _|  \n");
printf("\t\t        _|  _|        _|    _|      _|    _|  _|            _|_|  _|_|  _|    _|  _|    _|  _|          _|    _|_|    _|  \n");
printf("\t\t        _|  _|_|_|    _|    _|      _|    _|  _|_|_|        _|  _|  _|  _|    _|  _|    _|  _|          _|    _|  _|  _|  \n");
printf("\t\t  _|    _|  _|        _|    _|      _|    _|  _|            _|      _|  _|    _|  _|    _|  _|          _|    _|    _|_|  \n");
printf("\t\t    _|_|    _|_|_|_|    _|_|        _|_|_|    _|_|_|_|      _|      _|    _|_|      _|_|    _|_|_|_|  _|_|_|  _|      _|  \n");
printf("\t\t                                                                                                                          \n");
printf("\n");
color(15,0);
printf("      \n");
color(1,0);
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
color(12,0);
printf("\n\n\n\n");
char t[]="1. Le jeu se déroule en deux temps : la pose puis le mouvement.\n\n2. Dans un premier temps, les joueurs posent à tour de rôle chacun de leurs\npions sur un point vide (intersection) du plateau.\n\n	Le premier joueur est défini aléatoirement par la machine.\n	Lorsqu’il n’y a plus de pion à poser, les joueurs déplacent leurs pions vers\n\nune intersection voisine libre en suivant un chemin prévu. L’objectif est de\nformer des « moulins » ou files de trois pions alignés.\n	Lorsqu’un des joueurs a réussi à réaliser un moulin, il peut capturer un pion\nde son choix à l’adversaire, à la condition que ce pion ne fasse pas déjà\npartie d’un moulin.\n\n3. Une fois sorti du jeu, un pion ne peut plus y rentrer.\n\n4. Le jeu s’achève quand un joueur n’a plus que deux pions ou ne peut plus\njouer, il est alors le perdant.\n5. Une règle optionnelle donne une seconde chance à celui qui ne possède plus\nque trois pions : il peut alors se déplacer en sautant où il veut. Cette dernière\nsera optionnelle pour notre Projet.\n\n";
printf("%s",t);
printf("	\n");
printf("\n");
color(2,0);
printf("\n appuyez sur 1 pour le retour >>>>");
color(15,0);


}

