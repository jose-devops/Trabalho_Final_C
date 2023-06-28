#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>



//======================== VOID INICIO CALULA MEDIA ============================================

void valida_media() {

  

  char materia[20], instituicao[30];
  double nota1, nota2, nota3, soma;
  int porcent1, porcent2, porcent3;

  printf("Olá estudante, faça o calculo de suas notas.\n");


  printf("\n-------------------------------------------------------------------"
         "*\n");

  printf("\nPrecisamos coletar algumas informações para fazer a somatoria "
         "desejada .\n");


  printf("\nDigite o nome da sua instituição\n");
  scanf("%s", instituicao);

  printf("\nInforme o nome de sua matéria.\n");
  scanf("%s", &materia);



  printf("\nInforme sua primeira nota\n");
  scanf("%lf", &nota1);
  printf("Qual é a porcentagem atribuida a nota 1?\n");
  scanf("%d", &porcent1);
  printf("\n------------------------------------------------------------\n");
  

  printf("\nInforme sua segunda nota\n");
  scanf("%lf", &nota2);
  printf("Qual é a porcentagem atribuida a nota 2?\n");
  scanf("%d", &porcent2);
  printf("\n------------------------------------------------------------\n");

  printf("\nInforme sua terceira nota\n");
  scanf("%lf", &nota3);
  printf("Qual é a porcentagem atribuida a nota 3?\n");
  scanf("%d", &porcent3);
  printf("\n------------------------------------------------------------\n");

  printf("\nNota 1: * %0.2lf * tera o peso de %d%%\n", nota1, porcent1);
  printf("Nota 2: * %0.2lf * terá o peso de %d%%\n", nota2, porcent2);
  printf("Nota 3: * %0.2lf * tera o peso de %d%%\n\n", nota3, porcent3);


  soma = (nota1 + nota2 + nota3) / 3;

  system("clear");

  printf("\nSua media total é: %0.2lf em %s na instituição %s\n", soma, materia, instituicao);

  if (soma >= 7) {
    printf("\nParabens!\nVocê foi aprovado! :D\n");
    
  } else {
    printf("\nVocê foi reprovado :(\n");
    printf("\nAlcanse a media 7 ou acima para ser aprovado.\n");
  }

  

  
}


//======================= VOID CALCULA MEDIA FIM ===============================================//












//==================== VOID CALCULADORA INICIO ================================================//

void calculadora() {

  double adicao, divisao, multiplicacao, subtracao, sair, q;
  double num1, num2;
  char operador, validacao;

  printf("Digite um operador (+ , - , *, /) ou q para encerrar\n");
  scanf("%s", &operador);

  // validação
  while (operador != '+' && operador != '-' && operador != '*' &&
         operador != '/' && operador != 'q') {
    printf("Operador invalido, tente novamente!\n\n");
    printf("-------------------------------------------------\n\n");

    printf("Digite um operador (+ , - , *, /)\n");
    fflush(stdin);
    scanf("%s", &operador);
    system("clear");
  }

  // Encerra o programa
  if (operador == 'q') {
    printf("Sistema de calculadora encerrado\n");
    printf("----------------------------------------\n");

  } else {

    // Vezes
    if (operador == '*') {
      printf("Operador de MULTIPLICAÇÃO selecionado!\n\n");

      printf("Digite o primeiro numero:\n");
      scanf("%lf", &num1);

      printf("Digite o segundo numero:\n");
      scanf("%lf", &num2);

      multiplicacao = num1 * num2;
      // system("clear");

      printf("--------------------------------------\n\n");
      printf("O resultado de %0.2lf * %0.2lf é :%0.2lf\n\n", num1, num2,
             multiplicacao);
    }

    // dividir
    if (operador == '/') {
      printf("Operador de DIVISÃO selecionado!\n\n");

      printf("Digite o primeiro numero:\n");
      scanf("%lf", &num1);

      printf("Digite o segundo numero:\n");
      scanf("%lf", &num2);

      divisao = num1 / num2;
      // system("clear");

      printf("O resultado de %0.2lf / %0.2lf é : %0.2lf\n", num1, num2,
             divisao);
    }

    // menos
    if (operador == '-') {
      printf("Operador de SUBTRAÇÃO selecionado!\n\n");

      printf("Digite o primeiro numero:\n");
      scanf("%lf", &num1);

      printf("Digite o segundo numero:\n");
      scanf("%lf", &num2);

      subtracao = num1 - num2;

      // system("clear");

      printf("O resultado de %0.2lf - %0.2lf é : %0.2lf\n", num1, num2,
             subtracao);
    }

    // mais
    if (operador == '+') {
      printf("Operador de ADIÇÃO selecionado!\n\n");

      printf("Digite o primeiro numero:\n");
      scanf("%lf", &num1);

      printf("Digite o segundo numero:\n");
      scanf("%lf", &num2);

      adicao = num1 + num2;

      // system("clear");

      printf("O resultado de %0.2lf + %0.2lf é : %0.2lf\n", num1, num2, adicao);
    }

  } // fim do else
}

//======================== VOID CALCULADORA FIM ==============================================









//====================== INICIO DO PROGRAMA ==================================================

struct tipo_form{
  int menu;
  char nome[70], sobrenome[70], cidade[70], estado[70], pais[70], sexo[70];
  char idade[70];


};

typedef struct tipo_form tipo_form;

int validarString(const char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (!isalpha(str[i]) && !isspace(str[i])) {
      return 0; 
    }
  }
  return 1; 
}

int validarIdade(const char *str) {
  for (int i = 0; i < strlen(str); i++) {
    if (!isdigit(str[i])) {
      return 0;
    }
  }
  return 1; 
}



int main() {


  tipo_form form;

  printf("Seja bem vindo ao programa Calc-C\n");
  printf("Programa elaborado pelos alunos:\n");
  printf("José Roberto da Silva & Maicon Teixeira\n");
  printf("Estudantes da Instituicao UniSenai Campus Chapecó-Sc\n");
  printf("Pela materia de: Algoritmos e Programacao\n");

  printf("\n------------------FORMULARIO ELETRONICO--------------------\n");

  //------------------------------------------------------------------------

  while (1) {
    printf("\nDigite seu NOME:\n");
    scanf("%s", &form.nome);

    if (validarString(form.nome)) {
      break;
    }

    printf("Por favor, digite um nome válido sem números.\n");
  }

  //------------------------------------------------------------------------

  while (1) {
    printf("\nDigite seu SOBRENOME:\n");
    scanf("%s", &form.sobrenome);

    if (validarString(form.sobrenome)) {
      break;
    }

    printf("Por favor, digite um sobrenome válido sem números.\n");
  }

  //-------------------------------------------------------------------------

  while (1) {
    printf("\nDigite a sua IDADE:\n");
    scanf("%s", &form.idade);

    if (validarIdade(form.idade)) {
      break;
    }

    printf("Por favor, digite uma idade válida com apenas números.\n");
  }

  //--------------------------------------------------------------------------

  while (1) {
    printf("\nDigite seu GENERO:\n");
    scanf("%s", &form.sexo);

    if (validarString(form.sexo)) {
      break;
    }

    printf("Por favor, digite um GENERO válido sem números.\n");
  }

  //-------------------------------------------------------------------------

  while (1) {

    printf("\nDigite sua CIDADE:\n");
    scanf("%s", &form.cidade);

    if (validarString(form.cidade)) {
      break;
    }

    printf("Por favor, digite uma cidade válida sem números.\n");
  }

  //------------------------------------------------------------------------

  while (1) {

    printf("\nQual ESTADO em que reside?(SIGLA)\n");
    scanf("%s", &form.estado);

    if (validarString(form.estado)) {
      break;
    }

    printf("Por favor, digite um ESTADO válido sem números.\n");
  }

  //-------------------------------------------------------------------------

  while (1) {
    printf("\nDigite seu PAÍS\n");
    scanf("%s", &form.pais);

    if (validarString(form.pais)) {
      break;
    }

    printf("Por favor, digite um PAÍS válido sem números.\n");
  }


  system("clear");
  printf("\n------------------------------------------------------------\n");

  printf("\n** FORMULARIO PREENCHIDO COM SUCESSO! **\n");

  printf("\nNome completo : %s %s\nIdade: %s anos\n", form.nome, form.sobrenome, form.idade);
  printf("Sexo: %s\n", form.sexo);
  printf("Cidade: %s\n", form.cidade);
  printf("Estado: %s\n", form.estado);
  printf("País: %s\n", form.pais);
  

  //============================ FIM DO FORMULARIO DE INICIO ==================================







  //========================== INICIO DO MENU ==================================================
  do {

    printf("\n%s %s Escolha uma opção desejada no menu abaixo:\n", form.nome,
           form.sobrenome);
    printf("1 - Calculadora / 2 - Somar minhas medias / 3 - Encerrar\n");
    scanf("%d", &form.menu);

    switch (form.menu) {
    case 1:
      printf("\nCalculadora "
             "selecionada!\n\n*************************************************"
             "*****\n");
      system("clear");
      calculadora();

      break;

    case 2:
      printf("\nCalculo de medias\n");
      system("clear");
      valida_media();

      break;

    case 3:
      break;
    }
  } while (form.menu != 3);
  printf("Sistema encerrado!\n\n");

  return 0;
}