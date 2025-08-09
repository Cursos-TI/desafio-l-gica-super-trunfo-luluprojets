#include <stdio.h>
struct Carta{
char estado[3];
char codigo[5];
char nomeCidade[50];
int populacao;
float area;
float pib;
int pontosturisticos;
float densidadepopulacional;
float pibpercapita;
};
void cadrastarCarta(struct Carta*carta){
printf("Estado:");
scanf("%s", carta->estado);

printf("Codigo da carta:");
scanf("%s", carta->codigo);

printf("Nome da cidade:");
scanf("%s", carta-> nomeCidade);

printf("População:");
scanf("%d", &carta->populacao);

printf("Área(em km²):");
scanf("%f", &carta->area);

printf("PIB(em bilhões): ");
scanf("%f", &carta->pib);

printf("Númerosde pontos turisticos:");
scanf("%d", &carta->pontosturisticos);

carta->densidadepopulacional = carta->populacao / carta->area;
carta->pibpercapita = (carta->pib * 1000000000) / carta->populacao;
}

void exibirCarta(struct Carta carta) {
printf("\n--Carta%s\n", carta.codigo);
printf("Estado: %s\n", carta.estado);
printf("Cidade: %s\n", carta.nomeCidade);
printf("População:%d\n", carta.populacao);
printf("Área:%.2f km²\n",carta.area);
printf("PIB:%.2f bilhões\n", carta.pib);
printf("Pontos turisticos: %d\n", carta.pontosturisticos);
printf("Densidade populacional: %.2f hab/km²\n",carta.densidadepopulacional);
printf("PIB per capita: %.2f reais\n", carta.pibpercapita);
}
void compararCartas(struct Carta c1,struct Carta c2){
printf("\nComparando as cartas pelo atributo: PIB per capita\n");
printf("%s:%.2freais\n", c1.nomeCidade, c1.pibpercapita);
printf("%s:%.2freais\n", c2.nomeCidade, c2.pibpercapita);

if(c1.pibpercapita > c2.pibpercapita){
printf("Vencedora:%s (Pib per capita maior)\n", c1.nomeCidade);
}else if (c2.pibpercapita>c1.pibpercapita){
printf("Vencedora:%s(Pib per capita maior)\n", c2.nomeCidade);
}else{
printf("Empate! AS duas cidades possuem o mesmo pib.\n");
}
}

int main(){
struct Carta carta1, carta2;
printf("\nCadastro da carta1:\n");
cadrastarCarta(&carta1);
printf("\nCadastro da carta2:\n");
cadrastarCarta(&carta2);
exibirCarta(carta1);
exibirCarta(carta2);

compararCartas(carta1,carta2);

return 0;
}

















