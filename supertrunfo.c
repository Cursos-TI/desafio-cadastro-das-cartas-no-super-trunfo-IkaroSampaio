#include <stdio.h>

int main() {
    // INICIALIZEI AS VARIÁVEIS PARA EVITAR ERROS COMO LEITURA DE "LIXO".
    char estado = 'A'; 
    char codigo[4]; //Ex. A01, A02...           
    char cidade [50] = "Conquista"; //Nome da cidade.          
    int populacao = 1;        
    float area = 100.500;                  
    float pib = 1.500000;                      
    int pontos_turisticos = 1;   
    int num_cartas = 1; //Número de cartas que será cadastradas.

    printf("QUANTAS CARTAS DESEJA CADASTRAR? ");
    scanf("%d", &num_cartas);    
    // AQUI EU USEI UM LOOP DE REPETIÇAO "for" PARA CADASTRAR VÁRIAS CARTAS E O CÓDIGO NÃO FICAR GRANDE
    for (int i = 0; i < num_cartas; i++) { 
    printf("\n---CADASTRO DA CARTA %d---\n", i + 1);    
    // COLETANDO OS DADOS DAS CIDADES  
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o código da cidade:  ");
    scanf(" %s", &codigo);
    // PARA O NOME DA CIDADE ACEITAR ESPAÇOS É PRECISO USAR A FUNÇAO "fgets", EU NÃO UTILIZEI PORQUE NÃO ESTUDEI ISSO NOS CONTEÚDOS ATÉ AGORA, MAS IREI ATUALIZAR ESSE CÓDIGO NOVAMENTE.
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade);       
    printf("Digite a população: ");
    scanf("%d", &populacao);    
    printf("Digite a área em km²:  ");
    scanf(" %f", &area);
    printf("Digite o pib da cidade: ");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    // EXIBINDO DADOS COLETADOS
    printf("\nINFORMAÇOES DA CIDADE CADASTRADA: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("população: %d\n", populacao);
    printf("Área em km²: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);

    /* ESSE É O MEU TRABALHO. É A PRIMEIRA VEZ QUE TENHO CONTATO COM CÓDIGOS E ESSE DESAFIO 
    EU FIZ COM MUITO EMPENHO. ESPERO QUE EU NÃO TENHA ERRADO TANTO E QUE O RESLTADO SEJA SATISFATÓRIO.
    */
    
    }    

    return 0;

}
