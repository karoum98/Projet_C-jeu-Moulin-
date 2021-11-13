#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
void color(int t,int f);
void  interface1();
void  interface2();
void interfaces3();
void interface4();
int moulin(char sym1[8],char sym2[8],char sym3[8],char ch,int count );
void capturer(int tabm[100],char *tab,char *tab11,char *tab12,char *tab13,int cout);
void capturer2(int tabm[100],char *tab,char *tab11,char *tab12,char *tab13,int cout);
int nmoulin(char sym1[8],char sym2[8],char sym3[8],char ch,int count );
int dejaexiste(int *tab,int *tab11,int *tab12,int *tab13,int i);
//void interface3(char tab11[8],char tab12[8],char tab13      [8],char tab1[8],char tab2[8],char tab3[8]);
void interface3(char *tab11,char *tab12,char *tab13,char *tab1,char *tab2,char *tab3);
struct mestables emplacement(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]);
struct mestables emplacement2(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]);
struct mestables emplacement3(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]);
struct myDataType inputValue(char sym[24],int count,char *tab11,char *tab12,char *tab13);
struct myDataType inputValue2(char sym[24],int count,char *tab11,char *tab12,char *tab13);
struct myDataType inputValue3(char sym[24],int count,char *tab11,char *tab12,char *tab13);
char c1(int i);char c1(int i);
char c1(int i);
void print(char *tab,char *tab1,int i);
void deplacer2(int *tab,int *tab11,int *tab12,int *tab13,int cout );
int  effacer(int *tab,int *tab11,int *tab12,int *tab13,char a );
void deplacement(char tab11[8],char tab12[8],char tab13[8],int tabm1[70],int tabm[70],char j1[20],char j2[20]);
void deplacement2(char tab11[8],char tab12[8],char tab13[8],int tabm1[70],int tabm[70],char j1[20],char j2[20]);
int nmoulin1(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70]);
int nmoulin2(char sym1[8],char sym2[8],char sym3[8],char ch,int count,int tabm1[70]);
int nmoulin3(char sym1[8],char sym2[8],char sym3[8],char ch,int count ,int tabm1[70]);
int nmoulin4(char sym1[8],char sym2[8],char sym3[8],char ch,int count ,int tabm1[70]);
int nmoulin5(char sym1[8],char sym2[8],char sym3[8],char ch,int count ,int tabm1[70]);
int nmoulin6(char sym1[8],char sym2[8],char sym3[8],char ch,int count ,int tabm1[70]);
int nmoulin7(char sym1[8],char sym2[8],char sym3[8],char ch,int count ,int tabm1[70]);
int condition_dapl(char a,char, char *tab11,char *tab12,char *tab13 );
 int compter(char chaine[8],char a);
 void calcul(char tab11[8],char tab12[8],char tab13[8],char j1[20],char j2[20]);
 struct myDataType inputValue2(char sym[24],int count,char tab11[8],char tab12[8],char tab13[8]);
int  test(char *tab11,char *tab12,char *tab13);
void game_over();
int remplir_aleatoire(char tab[24],char *tab11,char *tab12,char *tab13);
struct deplace deplacer_machine(char *tab11,char *tab12,char *tab13);
int vers_machine(char *tab11,char *tab12,char *tab13);
void joueur_machine(char j1[20]);
int cormp(char *t,char *t2,char *t3);
//int moulin(char sym[24],char ch/*,int count*/);


#endif // FUNCTIONS_H_INCLUDED
