//Projeto 1 - [CSF13-S72] - João Pedro Maciel de Souza

#include <stdio.h>

int main(){

    //declaração das variáveis necessárias
    int mesDoRendimento; //inteiro por representar o valor do mês em [1, 12]
    float rendimento, imposto = 0; //valor do rendimento no mês e valor do imposto que será calculado

    //recebe os valores do mês e em seguida, o rendimento
    scanf("%d", &mesDoRendimento);
    scanf("%f", &rendimento);

    //ifs aninhados para o programa operar com as alíquotas do mês correto
    if(mesDoRendimento <= 4){

        //podemos utilizar vários if's pois o imposto começa em 0 para qualquer entrada, e vai sendo acrescentado
        if(rendimento > 4000){ //testamos com o maior valor primeiro para irmos somando o valor do imposto progressivamente
            imposto = (rendimento - 4000) * 0.275; //parcial do imposto referente a essa faixa de alíquota
            rendimento = 4000; //setamos o rendimento para 4000 pois é o que sobra para as próximas faixas de alíquota

            //O raciocínio dessa parte é valido para as subsequentes

        }

        if(rendimento>3500.75){
            imposto = imposto + (rendimento - 3500.75) * 0.225;
            rendimento = 3500.75;
        }

        if(rendimento > 2300.5){
            imposto = imposto + (rendimento - 2300.5) * 0.15;
            rendimento = 2300.5;
        }

        if(rendimento > 1200.25){
            imposto = imposto + (rendimento - 1200.25) * 0.075;
            rendimento = 1200.25;
        }

        if(rendimento <= 1200.25){
            imposto = imposto;
        }

    }else if(mesDoRendimento <= 8){

            if(rendimento > 4300.75){
                imposto = (rendimento - 4300.75) * 0.275;
                rendimento = 4300.75;
            }

            if(rendimento>3500.5){
                imposto = imposto + (rendimento - 3500.5) * 0.225;
                rendimento = 3500.5;
            }

            if(rendimento > 2800.25){
                imposto = imposto + (rendimento - 2800.25) * 0.15;
                rendimento = 2800.25;
            }

            if(rendimento > 1500){
                imposto = imposto + (rendimento - 1500) * 0.075;
                rendimento = 1500;
            }

            if(rendimento <= 1500){
                imposto = imposto;
            }

        }else if(mesDoRendimento <= 12){

                if(rendimento > 4600.25){
                    imposto = (rendimento - 4600.25) * 0.275;
                    rendimento = 4600.25;
                }

                if(rendimento>3900.25){
                    imposto = imposto + (rendimento - 3900.25) * 0.225;
                    rendimento = 3900.25;
                }

                if(rendimento > 3400.5){
                    imposto = imposto + (rendimento - 3400.5) * 0.15;
                    rendimento = 3400.5;
                }

                if(rendimento > 1875){
                    imposto = imposto + (rendimento - 1875) * 0.075;
                    rendimento = 1875;
                }

                if(rendimento <= 1875){
                    imposto = imposto;
                }

        }

    //saída do dado calculado
    printf("%.2f", imposto);

    return 0;
}
