//  Professor: Marcos Candia
//  Francisco Geneuto - RA: 327485211919
//  Ciencia da Computacao 4ª serie
//  Faculdade Anhanguera - São José dos Campos - SP
//  05 de setembro de 2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ==========================================
// == Primeiro exercicio -  primeira lista ==
// ==========================================
void exercicio01(){
    
    // Variaveis
    float celsius;
    
    // Conteudo
    printf("Bem vindo ao exercicio numero 1 da primeira lista de exercicios do professor Marcos Candia.\n");
    printf("01) Ler uma temperatura em graus Celsius e apresenta-la convertida\n em graus Fahrenheit. A formula de conversao e: F ← (9 * C + 160) / 5, sendo\n F a temperatura em Fahrenheit e C a temperatura em Celsius.\n\n");
    printf("Digite o valor da temperatura em graus Celsius a ser convertida: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (9 * celsius + 160)/5;
    
    // Resultado
    printf("O valor convertido e de: %.2f º Fahrenheit", fahrenheit);
    system("pause");
    
    
}

// =========================================
// == Segundo exercicio -  primeira lista ==
// =========================================
void exercicio02(){
    // Variaveis
    float tempo_gasto;
    float velocidade;
    int consumo = 12;
    
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 4 da primeira lista de exercicios do professor Marcos Candia.\n\n");
    printf("02) Efetuar o calculo da quantidade de litros de combustivel gasta em uma viagem, utilizando\n"
           "um automovel que faz 12 quilômetros por litro. Para obter o calculo, o usuario deve fornecer o\n"
           "tempo gasto (variavel TEMPO) e a velocidade media (variavel VELOCIDADE) durante a viagem.\n"
           "Desta forma, sera possivel obter a distância percorrida com a formula: DISTÂNCIA ← TEMPO *\n"
           "VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de\n"
           "combustivel utilizada na viagem com a formula: LITROS_USADOS ← DISTÂNCIA / 12. O\n"
           "programa deve apresentar os valores da velocidade media, tempo gasto na viagem, a distância\n"
           "percorrida e a quantidade de litros utilizada na viagem.\n\n");
    
    printf("Digite o tempo da viagem em (horas): ");
    scanf("%f", &tempo_gasto);
    
    printf("\nDigite a velocidade media da viagem (Km/h): ");
    scanf("%f", &velocidade);
    
    // Resultado
    float distancia_percorrida = tempo_gasto * velocidade;
    float litros = distancia_percorrida / consumo;
    
    printf("A distancia percorrida pelo carro e de: %.2f Km.", distancia_percorrida);
    printf("\nA quantidade de litros gasto e de: %.2f litros.\n", litros);
    
    system("pause");
    
}

// =======================================
// == Quarto exercicio -  segunda lista ==
// =======================================
void exercicio03(){
    // Variaveis
    float NGERAL = 0;
    float N[4];
    float NE;
    float MD1;
    int i;
    
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 4 da segunda lista de exercicios do professor Marcos Candia.\n\n");
    printf("03) Ler os valores de quatro notas escolares bimestrais de um aluno representadas\n"
           "pelas variaveis N1, N2, N3 e N4. Calcular a media aritmetica (variavel MD1) desse aluno\n"
           "e apresentar a mensagem ""Aprovado"" se a media obtida for maior ou igual a 7; caso\n"
           "contrario, o programa deve solicitar a quinta nota (nota de exame, representada pela\n"
           "variavel NE) do aluno e calcular uma nova media aritmetica (variavel MD2) entre a nota\n"
           "de exame e a primeira media aritmetica. Se o valor da nova media for maior ou igual a\n"
           "cinco, apresentar a mensagem ""Aprovado em exame""; caso contrario, apresentar a\n"
           "mensagem ""Reprovado"". Informar tambem, apos a apresentacao das mensagens, o\n"
           "valor da media obtida pelo aluno.\n\n");
    
    for(i=1; i <= 4; i++){
        printf("\nDigite a %iª nota:\n", i);
        scanf("%f", &N[i]);
        NGERAL += N[i]; // Calcula as 4 notas
    }
    
    MD1 = NGERAL/4; // Calcula a media 1 sem exame
    
    // Resultado
    if (MD1 > 6){
        printf("Aluno APROVADO\n");
        printf("Sua media foi de %.2f", MD1);
    }else{
        printf("\nDigite a nota do Exame:\n");
        scanf("%f", &NE);
        
        float MD2 = (MD1 + NE)/2; // Calcula media 2 com exame
        
        if(MD2 < 5){
            printf("Aluno REPROVADO\n");
            printf("Sua media foi de %.2f\n", MD2);
        }else{
            printf("Aluno APROVADO COM EXAME\n");
            printf("Sua media foi de %.2f\n", MD2);
        }
    }
    
    
}

// =======================================
// == Quarto exercicio -  segunda lista ==
// =======================================
void exercicio04(){
    // Variaveis
    int n[3];
    int i;
    int soma = 0;
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 14 da segunda lista de exercicios do professor Marcos Candia.\n\n");
    printf("04) Efetuar a leitura de tres valores inteiros desconhecidos representados pelas\n"
           "variaveis A, B e C. Somar os valores fornecidos e apresentar o resultado somente se\n"
           "for maior ou igual a 100.\n\n");
    for (i=0; i<3; i++){
        printf("Insira um valor qualquer:\n");
        scanf("%d", &n[i]);
        soma += n[i];
    }
    
    if (soma >= 100){
        printf("A soma dos valores inseridos e: %d\n\n", soma);
    }else{
        printf("A soma dos valores inseridos e menor que 100!\n\n");
    }
    
}

// ========================================
// == Quinto exercicio -  terceira lista ==
// ========================================
void exercicio05(){
    // Variaveis
    int cardapio;
    float preco[5] = {1.2, 1.3, 1.5, 1.2, 1.3}; // Valores dos lanches
    int qnt;
    float total;
    
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 4 da terceira lista de exercicios do professor Marcos Candia.\n\n");
    printf("\n05) O cardapio de uma lanchonete e o seguinte:\n\n"
           "ESPECIFICAcaO        CoDIGO      PREcO\n"
           "Cachorro quente         100       1.20\n"
           "Bauru simples           101       1.30\n"
           "Bauru com ovo           102       1.50\n"
           "Hamburger               103       1.20\n"
           "Cheeseburguer           104       1.30\n\n"
           "Implemente um programa que leia o codigo do item pedido, a quantidade e calcule o\n"
           "valor a ser pago por aquele lanche. Considere que a cada execucao somente sera\n"
           "calculado um item.\n\n");
    printf("\n\n Escolha um item do cardapio inserindo seu numero correspondente:\n");
    scanf("%i", &cardapio);
    
    switch(cardapio){
        case 100:
            printf("Insira a quantidade de Cachorro quente desejado: ");
            scanf("%i", &qnt);
            total = qnt * preco[0];
            printf("\nSeu pedido ficou no total de: R$ %.2f", total);
            break;
            
        case 101:
            printf("Insira a quantidade de Bauru simples desejado: ");
            scanf("%i", &qnt);
            total = qnt * preco[1];
            printf("\nSeu pedido ficou no total de: R$ %.2f", total);
            break;
            
        case 102:
            printf("Insira a quantidade de Bauru com ovo desejado: ");
            scanf("%i", &qnt);
            total = qnt * preco[2];
            printf("\nSeu pedido ficou no total de: R$ %.2f", total);
            break;
            
        case 103:
            printf("Insira a quantidade de Hamburger desejado: ");
            scanf("%i", &qnt);
            total = qnt * preco[3];
            printf("\nSeu pedido ficou no total de: R$ %.2f", total);
            break;
            
        case 104:
            printf("Insira a quantidade de Cheeseburguer desejado: ");
            scanf("%i", &qnt);
            total = qnt * preco[4];
            printf("\nSeu pedido ficou no total de: R$ %.2f", total);
            break;
            
        default:
            printf("\nItem nao encontrado no cardapio");
            break;
    }
    
}

// =======================================
// == Sexto exercicio -  quarta lista ==
// =======================================
void exercicio06(){
    // Variaveis
    int n;
    int i;
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 1 da quarta lista de exercicios do professor Marcos Candia.\n\n");
    printf("06) Elaborar um programa que apresente como resultado os quadrados dos numeros\n"
           "inteiros existentes na faixa de valores de 15 a 200.\n\n");
    
    for (i=15;i < 201; i++){
        n = i*i;
        printf("O quadrado do numero %i e %i\n", i, n);
    }
}

// =======================================
// == Setimo exercicio - sexta lista ==
// =======================================
// Funcao
int fib(int n);
void exercicio07(){

        // Variaveis
        int n = 0;
        
        // Conteudo
        printf("\n\nBem vindo ao exercicio numero 3 da sexta lista de exercicios do professor Marcos Candia.\n\n");
        printf("07) Faca uma funcao recursiva que calcule e retorne o N-esimo termo da sequencia"
               "Fibonacci. Alguns numeros desta sequencia sao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...");
        
        printf("Insira um valor da posicao:\n");
        scanf("%i", &n);
        
        // Resultado
        printf("O termo da sequencia de Fibonacci e: %d\n", fib(n));
        system("pause");
}
// Funcao recursiva de fibonacci
int fib(int n) {
    if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

// =======================================
// == Oitavo exercicio - terceira lista ==
// =======================================
void exercicio08(){
    // Variaveis
    int vetorA[10], numeroX = 0, resetar = 0, maior, c, x;
    
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 7 da setima lista de exercicios do professor Marcos Candia.\n\n");
    printf("08) Considere um vetor de 10 numeros inteiros positivos maiores que zero e\n"
           "um unico numero X inteiro, tambem positivo e maior que zero. Faça um\n"
           "programa para:\n\n"
           "• ler pelo teclado o vetor;\n"
           "• ler pelo teclado o numero X;\n"
           "• encontrar e escrever a posicao;\n"
           "• dizer quantos numeros no vetor sao maiores que X e menores que\n"
           "X.\n\n");
    
    // Resultado
    do{
        printf("Digite um valor para X que seja maior que 0 \n"); // Le o valor de X
        scanf("%i", &numeroX);
    }while(numeroX == 0 || numeroX < 0);
    
    printf("\nDigite o valor a ser inserido nas posicoes do vetor ate 10: \n\n");
    
    // Le o valor do vetor
    for (int contador = 0; contador < 10; contador++ ){
        int armazenado;
        printf("Digite o %i º valor a ser armazenado\n", contador);
        scanf("%i", &armazenado);
        if(armazenado < 1){
            printf("\nATENCAO: Valor digitado menor que 1, favor digitar um numero maior que 0\n\n");
            vetorA[contador] = resetar;
            contador = resetar;
        }else{
            vetorA[contador] = armazenado;
        }
    }
    
    // Imprime o vetor na tela
    for(int i = 0; i < 10; i++){
        printf("\n\nO vetor da posicao [%i] esta com os numeros %d armazenados.\n", i, vetorA[i]);
    }
    
    // Diz quantos numeros sao maiores que X
    x = vetorA[0];
    c = 0;
    maior = 0;
    while(c < 10){
        if (vetorA[c] > numeroX){
            maior++;
        }
        c++;
    }
    if (maior == 0){
        printf("Nenhum numero e maior que X\n");
    }else{
        printf("A quantidade de numeros maior que X e: %i\n", maior);
    }
    
    
}

// =====================================
// == Nove exercicio - terceira lista ==
// =====================================
void exercicio09(){
    // Variaveis
    int matrizA[4][4], matrizB[4][4];
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 1 da oitava lista de exercicios do professor Marcos Candia.\n\n");
    printf("09) Elabore um algoritmo que leia aleatoriamente uma matriz quadrada A 4x4.\n"
           "A partir desta, construir uma matriz B de mesma ordem, onde cada\n"
           "elemento devera ser o dobro do elemento correspondente da matriz A.\n\n\n");
    for(int i = 0; i < 4; i++){
        matrizA[i][i] = i;
        if (matrizA[i][i] == 0){
            matrizA[i][i] = 10;
            printf("\nA matriz A[%d][%d] contem: %d",i,i, matrizA[i][i]);
        }else{
        printf("\nA matriz A[%d][%d] contem: %d",i,i, matrizA[i][i]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < 4; i++){
        matrizB[i][i] = matrizA[i][i] * 2;
        printf("A matriz B[%d][%d] contem: %d\n",i,i, matrizB[i][i]);
    }
}

// ====================================
// == Dez exercicio - terceira lista ==
// ====================================
void exercicio10(){
    // Variaveiso
    int matriz[3][3], vetorCOL[3], soma = 0, i, j;
    // Conteudo
    printf("\n\nBem vindo ao exercicio numero 6 da oitava lista de exercicios do professor Marcos Candia.\n\n");
    printf("10) Faça um programa que permita ao usuario entrar com uma matriz de 3x3\n"
           "numeros inteiros. Em seguida, gere um vetor pela soma dos numeros\n"
           "de cada coluna da matriz e mostrar na tela esse vetor. Por exemplo, a\n"
           "matriz:\n\n"
           "5   -8     10\n"
           "1    2     15\n"
           "25   10    7\n\n"
           "Vai gerar um vetor, onde cada posiçao e a soma das colunas da matriz.\n"
           "A primeira posiçao sera 5 + 1 + 25, e assim por diante. Por fim, o programa\n"
           "devera imprimir o seguinte vetor:\n\n"
           "31   4     3");
    for (i=0; i < 3; i++){
        for(j=0; j < 3; j++){
             printf("\nEscreva o valor da posicao da Matriz [%d] [%d]\n", i, j);
             scanf("%d", &matriz[i][j]);
        }
    }
    // Imprime a Matriz na tela
    printf("\n=================================\n");
    printf("======= A MATRIZ DIGITADA =======\n");
    printf("=================================\n");
    printf("\n [%d]         [%d]        [%d]",matriz[0][0], matriz[0][1],matriz[0][2]);
    printf("\n [%d]         [%d]        [%d]",matriz[1][0], matriz[1][1],matriz[1][2]);
    printf("\n [%d]         [%d]        [%d]",matriz[2][0], matriz[2][1],matriz[2][2]);
    
    // Soma dos valores de cada coluna
    printf("\n\n==================================\n");
    printf("======= A SOMA DAS COLUNAS =======\n");
    printf("==================================\n");
    for (j = 0; j < 3; j++){
        for (i = 0; i < 3; i++){
            soma = soma + matriz[i][j];
        }
        vetorCOL [j] = soma;
    }
    printf("\n [%d]           [%d]          [%d]\n\n",vetorCOL[0], vetorCOL[1],vetorCOL[2]);
}
int main() {
    
    int escolha;
    printf("====================== v1.0 ======================\n");
    printf("==================================================\n");
    printf("=       =====    ====       ======  =======    ===\n");
    printf("=  ====  ===  ==  ===  ====  ====    =====  ==  ==\n");
    printf("=  ====  ==  ====  ==  ====  ===  ==  ===  ====  =\n");
    printf("=  ====  ==  ====  ==  ====  ==  ====  ==  ====  =\n");
    printf("=       ===  ====  ==  ====  ==  ====  ==  ====  =\n");
    printf("=  ====  ==  ====  ==  ====  ==        ==  ====  =\n");
    printf("=  ====  ==  ====  ==  ====  ==  ====  ==  ====  =\n");
    printf("=  ====  ===  ==  ===  ====  ==  ====  ===  ==  ==\n");
    printf("=       =====    ====       ===  ====  ====    ===\n");
    printf("==================================================\n");
    printf("============= Lista de 10 exercicios =============\n");
    printf("==================================================\n");
    printf("=================== By: Chicao ===================\n");
    printf("==================================================\n");
    printf("============== Ciencia da Computacao =============\n");
    printf("==================================================\n");
    printf("====================== MENU ======================\n");
    printf("==================================================\n");
    printf("== 01 p/ Lista 1 -> Exercicio 1                 ==\n");
    printf("== 02 p/ Lista 1 -> Exercicio 4                 ==\n");
    printf("== 03 p/ Lista 2 -> Exercicio 4                 ==\n");
    printf("== 04 p/ Lista 2 -> Exercicio 14                ==\n");
    printf("== 05 p/ Lista 3 -> Exercicio 4                 ==\n");
    printf("== 06 p/ Lista 4 -> Exercicio 1                 ==\n");
    printf("== 07 p/ Lista 6 -> Exercicio 3                 ==\n");
    printf("== 08 p/ Lista 7 -> Exercicio 7                 ==\n");
    printf("== 09 p/ Lista 8 -> Exercicio 1                 ==\n");
    printf("== 10 p/ Lista 8 -> Exercicio 6                 ==\n");
    printf("==================================================\n\n");
    
    printf("Digite o numero do exercicio de 1 a 10: \n");
    scanf("%d", &escolha);
    
    system("cls || clear");
    
    switch(escolha){
        case 1:
            exercicio01();
            break;
            
        case 2:
            exercicio02();
            break;
            
        case 3:
            exercicio03();
            break;
            
        case 4:
            exercicio04();
            break;
            
        case 5:
            exercicio05();
            break;
        
        case 6:
            exercicio06();
            break;
        
        case 7:
            exercicio07();
            break;
        
        case 8:
            exercicio08();
            break;
        
        case 9:
            exercicio09();
            break;
        
        case 10:
            exercicio10();
            break;
        default:
            printf("\n\nOpcao invalida, favor digitar corretamenta o numero de exercio de 1 a 10\n\n");
            return main();
            
    }
    return 0;
}
