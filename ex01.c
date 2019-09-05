//
//  Francisco Geneuto - RA: 327485211919
//  Ciência da Computação 4ª série

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ==========================================
// == Primeiro exercicio -  primeira lista ==
// ==========================================
void exercicio01(){
    
    // Váriaveis
    float celsius;
    
    // Conteudo
    printf("Bem vindo ao exercício numero 1 da primeira lista de exercicios do professor Marcos Candia.\n");
    printf("01) Ler uma temperatura em graus Celsius e apresentá-la convertida\n em graus Fahrenheit. A fórmula de conversão é: F ← (9 * C + 160) / 5, sendo\n F a temperatura em Fahrenheit e C a temperatura em Celsius.\n\n");
    printf("Digite o valor da temperatura em graus Celsius a ser convertida: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (9 * celsius + 160)/5;
    
    // Resultado
    printf("O valor convertido é de: %.2f º Fahrenheit", fahrenheit);
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
    printf("\n\nBem vindo ao exercício numero 4 da primeira lista de exercicios do professor Marcos Candia.\n\n");
    printf("02) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando\n"
           "um automóvel que faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o\n"
           "tempo gasto (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem.\n"
           "Desta forma, será possível obter a distância percorrida com a fórmula: DISTÂNCIA ← TEMPO *\n"
           "VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de\n"
           "combustível utilizada na viagem com a fórmula: LITROS_USADOS ← DISTÂNCIA / 12. O\n"
           "programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância\n"
           "percorrida e a quantidade de litros utilizada na viagem.\n\n");
    
    printf("Digite o tempo da viagem em (horas): ");
    scanf("%f", &tempo_gasto);
    
    printf("\nDigite a velocidade média da viagem (Km/h): ");
    scanf("%f", &velocidade);
    
    // Resultado
    float distancia_percorrida = tempo_gasto * velocidade;
    float litros = distancia_percorrida / consumo;
    
    printf("A distancia percorrida pelo carro é de: %.2f Km.", distancia_percorrida);
    printf("\nA quantidade de litros gasto é de: %.2f litros.\n", litros);
    
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
    printf("\n\nBem vindo ao exercício numero 4 da segunda lista de exercicios do professor Marcos Candia.\n\n");
    printf("03) Ler os valores de quatro notas escolares bimestrais de um aluno representadas\n"
           "pelas variáveis N1, N2, N3 e N4. Calcular a média aritmética (variável MD1) desse aluno\n"
           "e apresentar a mensagem ""Aprovado"" se a média obtida for maior ou igual a 7; caso\n"
           "contrário, o programa deve solicitar a quinta nota (nota de exame, representada pela\n"
           "variável NE) do aluno e calcular uma nova média aritmética (variável MD2) entre a nota\n"
           "de exame e a primeira média aritmética. Se o valor da nova média for maior ou igual a\n"
           "cinco, apresentar a mensagem ""Aprovado em exame""; caso contrário, apresentar a\n"
           "mensagem ""Reprovado"". Informar também, após a apresentação das mensagens, o\n"
           "valor da média obtida pelo aluno.\n\n");
    
    for(i=1; i <= 4; i++){
        printf("\nDigite a %iª nota:\n", i);
        scanf("%f", &N[i]);
        NGERAL += N[i]; // Calcula as 4 notas
    }
    
    MD1 = NGERAL/4; // Calcula a média 1 sem exame
    
    // Resultado
    if (MD1 > 6){
        printf("Aluno APROVADO\n");
        printf("Sua média foi de %.2f", MD1);
    }else{
        printf("\nDigite a nota do Exame:\n");
        scanf("%f", &NE);
        
        float MD2 = (MD1 + NE)/2; // Calcula média 2 com exame
        
        if(MD2 < 5){
            printf("Aluno REPROVADO\n");
            printf("Sua média foi de %.2f\n", MD2);
        }else{
            printf("Aluno APROVADO COM EXAME\n");
            printf("Sua média foi de %.2f\n", MD2);
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
    printf("\n\nBem vindo ao exercício numero 14 da segunda lista de exercicios do professor Marcos Candia.\n\n");
    printf("04) Efetuar a leitura de três valores inteiros desconhecidos representados pelas\n"
           "variáveis A, B e C. Somar os valores fornecidos e apresentar o resultado somente se\n"
           "for maior ou igual a 100.\n\n");
    for (i=0; i<3; i++){
        printf("Insira um valor qualquer:\n");
        scanf("%d", &n[i]);
        soma += n[i];
    }
    
    if (soma >= 100){
        printf("A soma dos valores inseridos é: %d\n\n", soma);
    }else{
        printf("A soma dos valores inseridos é menor que 100!\n\n");
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
    printf("\n\nBem vindo ao exercício numero 4 da terceira lista de exercicios do professor Marcos Candia.\n\n");
    printf("\n05) O cardápio de uma lanchonete é o seguinte:\n\n"
           "ESPECIFICAÇÃO        CÓDIGO      PREÇO\n"
           "Cachorro quente         100       1.20\n"
           "Bauru simples           101       1.30\n"
           "Bauru com ovo           102       1.50\n"
           "Hambúrger               103       1.20\n"
           "Cheeseburguer           104       1.30\n\n"
           "Implemente um programa que leia o código do item pedido, a quantidade e calcule o\n"
           "valor a ser pago por aquele lanche. Considere que a cada execução somente será\n"
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
            printf("Insira a quantidade de Hambúrger desejado: ");
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
            printf("\nItém não encontrado no cardápio");
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
    printf("\n\nBem vindo ao exercício numero 1 da quarta lista de exercicios do professor Marcos Candia.\n\n");
    printf("06) Elaborar um programa que apresente como resultado os quadrados dos números\n"
           "inteiros existentes na faixa de valores de 15 a 200.\n\n");
    
    for (i=15;i < 201; i++){
        n = i*i;
        printf("O quadrado do número %i é %i\n", i, n);
    }
}

// =======================================
// == Setimo exercicio - sexta lista ==
// =======================================
int exercicio07(){

}

// =======================================
// == Oitavo exercicio - terceira lista ==
// =======================================
void exercicio08(){
    
}
void exercicio09(){
    
}
void exercicio10(){
    
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
    printf("== 1 p/ Conversão de graus                      ==\n");
    printf("== 2 p/ Consumo de combustivel                  ==\n");
    printf("== 3 p/ Calcular média do aluno                 ==\n");
    printf("== 4 p/ Aparecer numero maior que 100           ==\n");
    printf("== 5 p/ Cardápio de lanchonete                  ==\n");
    printf("== 6 p/ Quadrado dos numeros inteiros            ==\n");
    printf("== 7 p/ Consumo de combustivel                  ==\n");
    printf("== 8 p/ Consumo de combustivel                  ==\n");
    printf("== 9 p/ Consumo de combustivel                  ==\n");
    printf("== 10 p/ Consumo de combustivel                 ==\n");
    printf("==================================================\n\n");
    
    printf("Digite o numero do exercicio de 1 a 10: ");
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
        
        default:
            printf("Opcao inválida, favor digitar corretamenta o numero de exercio de 1 a 10");
            
    }
    return 0;
}

