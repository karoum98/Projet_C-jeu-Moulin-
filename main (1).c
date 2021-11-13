#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include <string.h>
#include "functions.c"
#include "joueurVSmachine.c"


int main()
{
    system("mode 850");
char c;
      char tab11[8]="abcdefgh";
      char tab12[8]="ijklmnop";
      char tab13[8]="qrstuvwx";
      char j1[20];
      char j2[20]="la machine";
    int a,b,q,e,end;
    debut:
system("cls");
    interface1();
    scanf("%d",&a);
       switch(a){
          case 1:{
                avant:
            system("cls");
            interface2();
            scanf("%d",&b);
                 switch(b){
                 case 1:{
                 system("cls");
                 joueurs(j1,j2);
                       system("cls");
                    struct mestables T;
                  T=emplacement(tab11,tab12,tab13,j1,j2);
                  deplacement(T.tab111,T.tab112,T.tab113,T.tabm1,T.tabm,j1,j2);
                  scanf("%d",&end);
                  if(end==1) goto debut;
                   color(0,0);
                   Sleep(100000);
                   break;}
                     case 2:{

                        system("cls");
                        interface4();
                  scanf("%d",&q);
                  switch(q){
                     case 1:
                       system("cls");
                       joueur_machine(j1);
                       system("cls");
                    struct mestables T2;
                  T2=emplacement2(tab11,tab12,tab13,j1,j2);
                  deplacement2(T2.tab111,T2.tab112,T2.tab113,T2.tabm1,T2.tabm,j1,j2);
                   color(0,0);
                   break;
                        case 2:
                                 system("cls");
                       joueur_machine(j1);
                              system("cls");
                    struct mestables T3;
                  T3=emplacement3(tab11,tab12,tab13,j1,j2);
                  deplacement2(T3.tab111,T3.tab112,T3.tab113,T3.tabm1,T3.tabm,j1,j2);
                   color(0,0);
                   break;
                        case 3:
                              goto avant;
                   }}
                        case 3:
                              goto debut;
                   }
                   }
                   case 2:

                         system("cls");
                         regles();
                         scanf("%d",&e);
                         if(e==1) goto debut;
                   }
 return 0 ;}


