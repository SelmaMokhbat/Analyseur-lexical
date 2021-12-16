#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main(){

int i,ic=0,m,cc=0,oc=0,mc=0,sp=0,j;
char chaine[30],operators[30],identifiers[30],constants[30],motcle[30],separators[30];

printf(" TAPEZ LE CODE ICI : ");
scanf("%[^\n]s",&chaine);
for(i=0;i<strlen(chaine);i++){

    if(isspace(chaine[i])){
        continue;
    }
    else if(isalpha(chaine[i])){
        if((chaine[i]=='n')|| (chaine[i]=='i')&&(chaine[i+1]=="")||(chaine[i]=='j')){
        identifiers[ic] =chaine[i];
         ic++;}
         else if((chaine[i]=='f')&&(chaine[i+1]=='i')&&(chaine[i+2]=='b')){
        j=0;
        while(j<3){
        identifiers[ic] =chaine[i];
        i++;
        j++;
         ic++;
         }
         }

         else if((chaine[i]=='t')&&(chaine[i+1]=='e')&&(chaine[i+2]=='s')&&(chaine[i+3]=='t')){
          j=0;
          while(j<4){
        identifiers[ic] =chaine[i];
        i++;
        j++;
         ic++;}
         }
         else if((chaine[i]=='b')&&(chaine[i+1]=='e')&&(chaine[i+2]=='g')&&(chaine[i+3]=='i')&&(chaine[i+4]=='n')){
          j=0;
          while(j<5){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='p')&&(chaine[i+1]=='r')&&(chaine[i+2]=='o')&&(chaine[i+3]=='g')&&(chaine[i+4]=='r')&&(chaine[i+5]=='a')&&(chaine[i+6]=='m')){
          j=0;
          while(j<7){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='v')&&(chaine[i+1]=='a')&&(chaine[i+2]=='r')){
          j=0;
          while(j<3){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='i')&&(chaine[i+1]=='n')&&(chaine[i+2]=='t')){
          j=0;
          while(j<4){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='i')&&(chaine[i+1]=='f')){
          j=0;
          while(j<2){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='e')&&(chaine[i+1]=='l')&&(chaine[i+2]=='s')&&(chaine[i+3]=='e')){
          j=0;
          while(j<4){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else if((chaine[i]=='e')&&(chaine[i+1]=='n')&&(chaine[i+2]=='d')){
          j=0;
          while(j<3){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
          else if((chaine[i]=='t')&&(chaine[i+1]=='h')&&(chaine[i+2]=='e')&&(chaine[i+3]=='n')){
          j=0;
          while(j<4){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
          else if((chaine[i]=='r')&&(chaine[i+1]=='e')&&(chaine[i+2]=='t')&&(chaine[i+3]=='u')&&(chaine[i+4]=='r')&&(chaine[i+5]=='n')){
          j=0;
          while(j<6){
        motcle[mc] =chaine[i];
        i++;
        j++;
        mc++;}
         }
         else printf("ERREUR! %c EXSITE PAS DANS CET ANALYSEUR LEXICALE \n", chaine[i]);

         }

    else if(isdigit(chaine[i])){
        m=(chaine[i]-'0');
        i=i+1;
        while(isdigit(chaine[i])){
            m=m*10 + (chaine[i]-'0');
            i++;
        }
        i=i-1;
        if(m==0||m==1){
        constants[cc]=m;
        cc++;} else printf("ERREUR! %d EST UNE CONSTANTE NON RECONNU ON ACCEPTE SEULEMENT 0 ET 1 \n", m);
    }
     else{
        /*if(chaine[i]=='*'){
            operators[oc]='*';
            oc++;
        }
        else*/ if(chaine[i]=='-'){
            operators[oc]='-';
            oc++;
        }
        else if(chaine[i]=='+'){
            operators[oc]='+';
            oc++;
        }
         else if(chaine[i]=='='){
            operators[oc]='=';
            oc++;
        }
        else if(chaine[i]==':='){
            operators[oc]=':=';
            oc++;
        }
        else if(chaine[i]==';'){
            separators[sp]=';';
            sp++;
        }
        else if(chaine[i]==','){
            separators[sp]=',';
            sp++;
        }
        else if(chaine[i]=='('){
            separators[sp]='(';
            sp++;
        }
        else if(chaine[i]==')'){
            separators[sp]=')';
            sp++;
        }
        else if(chaine[i]==':'){
            separators[sp]=':';
            sp++;
        }
  } }

//****************************L AFFICHAGE**********************************

    printf(" \n\n| identificateurs | ");
     for(j=0;j<ic;j++){
        printf("%c ",identifiers[j]);
     }
     if(ic==0) printf(" C EST VIDE!");
    printf("\n\n  | constantes | ");
     for(j=0;j<cc;j++){
        printf("%d ",constants[j]);
     } if(cc==0) printf(" C EST VIDE!");
    printf("\n\n | operateurs | ");
      for(j=0;j<oc;j++){
        printf("%c ",operators[j]);
      } if(oc==0) printf(" C EST VIDE!");
      printf("\n\n | mot cle | ");
      for(j=0;j<mc;j++){
        printf("%c ",motcle[j]);
      } if(mc==0) printf(" C EST VIDE!");
       printf("\n\n | separateurs | ");
      for(j=0;j<sp;j++){
        printf("%c ",separators[j]);
      } if(sp==0) printf(" C EST VIDE!");



}
