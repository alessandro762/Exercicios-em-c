#include <stdio.h>

int main(){
//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
//distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor
//seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro,
//calcular e escrever o custo final ao consumidor.
double custo_de_fabrica;
double imposto;
double percentual_distribuidor;
double custo_para_consumidor;

printf("O custo de fabrica e:");

scanf("%lf",&custo_de_fabrica);

percentual_distribuidor=(custo_de_fabrica*0.28);

imposto=(custo_de_fabrica*0.45);

custo_para_consumidor=percentual_distribuidor+imposto+custo_de_fabrica;

printf("O valor do veiculo e:%.2lf",custo_para_consumidor);



}
