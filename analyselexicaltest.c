#include<stdio.h> //il indique au compilateur d'utiliser les fonctions les structures
#include<conio.h> //fournir des entres sorties de console
#include<ctype.h> // les fonctions de tests de caractères
#include<string.h> //pour les chaines de caractères

//ANALYSEUR LEXICAL DE L'EXERCICE 4 SERIE 1.
/*
program test var n: int function fib (i : int, j: int): int begin if n = 0 then return i else if n = 1 then return j else begin n := n-1; fib(j,i+j) end end;
*/

void main(){

int i,ic=0,m,cc=0,oc=0,mc=0,sp=0,j;
char chaine[500],operators[30],identifiers[30],constants[30],motcle[30],separators[30];

printf(" TAPEZ LE CODE ICI : ");
scanf("%[^\n]s",&chaine);
for(i=0;i<strlen(chaine);i++){

    if(isspace(chaine[i])){
        continue;
    }// dans le cas ou c'est vide
    else if(isalpha(chaine[i])){
        if((chaine[i]=='n')|| (chaine[i]=='i')&&(chaine[i+1]!='n')||(chaine[i]=='j')){
        identifiers[ic]=chaine[i];
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
         else if((chaine[i]=='f')&&(chaine[i+1]=='u')&&(chaine[i+2]=='n')&&(chaine[i+3]=='c')&&(chaine[i+4]=='t')&&(chaine[i+5]=='i')&&(chaine[i+6]=='o')&&(chaine[i+7])=='n'){
          j=0;
          while(j<8){
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
         else printf("ERREUR! %c N'EXSITE PAS DANS CET ANALYSEUR LEXICALE \n", chaine[i]);

         }
// dans le cas ou c'est un nombre
    else if(isdigit(chaine[i])){//tester les constantes on accepte seulement 0 et 1
        m=(chaine[i]-'0'); //pour le code ascii
        i=i+1; //dans le cas ou on a 90 on va passer au 0 m=9 et chaine[i+1]=0
        while(isdigit(chaine[i])){
            m=m*10/*obtenir le 90*/ + (chaine[i]-'0'); //on multiplie *10 pour par exemple si on 90
            i++;
        }
        i=i-1;
        if(m==0||m==1){
        constants[cc]=m;
        cc++;}
        else printf("ERREUR! %d EST UNE CONSTANTE NON RECONNU, ON ACCEPTE SEULEMENT 0 ET 1 \n", m);
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
         else if((chaine[i-1]!=':')&&(chaine[i]=='=')){
            operators[oc]='=';
            oc++;
        }
        else if((chaine[i]==':')&& (chaine[i+1]=='=')){
            operators[oc]=':';
            oc++;
            operators[oc]='=';
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

    printf(" \n\n  ||IDENTIFICATEURS||   ");
     for(j=0;j<ic;j++){ //pour afficher un truc du genre test fib... i n j
        if((identifiers[j]=='t')&&(identifiers[j+1]=='e')&&(identifiers[j+2]=='s')&&(identifiers[j+3]=='t')){
         printf(" test ");
        } else if ((identifiers[j]=='f')&&(identifiers[j+1]=='i')&&(identifiers[j+2]=='b')){
         printf(" fib ");
        } else if (identifiers[j]=='i') /*&& (identifiers[j+1]==" "))*/{
        printf(" i ");
        } else if (identifiers[j]=='j'){
        printf(" j ");
        }else if ((identifiers[j]=='n')&& (identifiers[j+1]== " ")){
        printf(" n ");
        }
     }
     if(ic==0) printf(" C EST VIDE!");
     //CONSTANTES
    printf("\n\n   ||CONSTANTES||  ");
     for(j=0;j<cc;j++){
        printf("%d ",constants[j]);
     } if(cc==0) printf(" C EST VIDE!");
     //OPERATEUR
    printf("\n\n  ||OPERATEURS||   ");
      for(j=0;j<oc;j++){
        if((operators[j]==':')&&(operators[j+1]=='=')){
            printf(" := ");
        } else if((operators[j-1]!=':')&&(operators[j]=='=')){
            printf(" = ");
        } else if(operators[j]=='+'){
            printf(" + ");
        } else if(operators[j]=='-'){
            printf(" - ");
        }
      } if(oc==0) printf(" C EST VIDE!");
      //MOT CLE
      printf("\n\n ||MOT CLE|| ");
      for(i=0;i<mc;i++){//program var int if else begin then return
            if((motcle[i]=='p')&&(motcle[i+1]=='r')&&(motcle[i+2]=='o')&&(motcle[i+3]=='g')&&(motcle[i+4]=='r')&&(motcle[i+5]=='a')&&(motcle[i+6]=='m')){
                printf(" program ");
            } else if((motcle[i]=='v')&&(motcle[i+1]=='a')&&(motcle[i+2]=='r')){
                printf(" var ");
            }else if ((chaine[i]=='i')&&(chaine[i+1]=='n')&&(chaine[i+2]=='t')){
            printf(" int ");
            }else if ((motcle[i]=='i')&&(motcle[i+1]=='f')){
            printf(" if ");
            }else if ((motcle[i]=='b')&&(motcle[i+1]=='e')&&(motcle[i+2]=='g')&&(motcle[i+3]=='i')&&(motcle[i+4]=='n')){
                printf(" begin ");
            } else if ((motcle[i]=='e')&&(motcle[i+1]=='l')&&(motcle[i+2]=='s')&&(motcle[i+3]=='e')){
                printf(" else ");
            } else if ((motcle[i]=='r')&&(motcle[i+1]=='e')&&(motcle[i+2]=='t')&&(motcle[i+3]=='u')&&(motcle[i+4]=='r')&&(motcle[i+5]=='n')){
                printf(" return ");
            }else if((motcle[i]=='f')&&(motcle[i+1]=='u')&&(motcle[i+2]=='n')&&(motcle[i+3]=='c')&&(motcle[i+4]=='t')&&(motcle[i+5]=='i')&&(motcle[i+6]=='o')&&(motcle[i+7]=='n')){
                printf(" function ");
            }else if ((motcle[i]=='t')&&(motcle[i+1]=='h')&&(motcle[i+2]=='e')&&(motcle[i+3]=='n')){
                printf(" then ");
            }else if ((motcle[i]=='e')&&(motcle[i+1]=='n')&&(motcle[i+2]=='d')){
                printf(" end ");
            }


      } if(mc==0) printf(" C EST VIDE!");
      //SEPARATEUR
       printf("\n\n ||SEPARATEURS||  ");
      for(j=0;j<sp;j++){
        printf("%c ",separators[j]);
      } if(sp==0) printf(" C EST VIDE!");



}
