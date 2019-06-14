#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main (void){

	// definição de variaveis

   char num_1 = '2';
   char num_2 = '5';
   char num_3 = '6';

   // soma de resultado dos numeros binarios corresondetes a senha

   int total = num_1+num_1+num_2+num_1+num_3+num_2;

   char senha[6];
   int pass_confirm;
   int i =0;
   int decoder; 

  	printf("Ola amigo! digite a sua senha... \n");

    scanf("%s",&senha);
    // verificação de senha
    while(i != 6) {

   	  i++;

    	decoder = (int)senha[i];

    	pass_confirm = decoder + pass_confirm;


    }
      if(total == pass_confirm){
        printf("SENHA CONFIRMADA \n");
      }
	

return 0;
}