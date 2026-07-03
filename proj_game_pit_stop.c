// usar o inglês tecnico como linguagem principal para estudos de duas linguas
#include <stdio.h>
#include <string.h>
#define VOLTAS_TOTAL 50  // total of laps in race (depeding the track using more or less);
#define TEMPO_DE_PIT 22.0 // time lost in pits
#define DEGRADACAO 0.08 //per lap
struct pilot {
	char nome[40];
	char equipe[40];
	int volta_atual;
	float tempo_total;
	float voltas_no_pneu;
	char composto_atual;
	int numero_de_pits;
	float desgaste;
	float tempo_volta;
	int trocar_composto;
	int used_soft;
	int used_medium;
	int used_hard;
};
//function create a pilot and select a team 
void pilotandteam(struct pilot *player){
    printf("VAMOS CRIAR SEU CHEFE DE EQUIPE \n");
    printf("INSIRA O NOME DO SEU CHEFE DE EQUIPE: \n");
    scanf("%39s", player -> nome);
    printf("INSIRA O NOME DA EQUIPE: \n");
    scanf("%39s", player -> equipe);
}
void reset(struct pilot *player){
    printf("Insira o Composta de pneu da sua largada \n MACIO - S \n MEDIO - M \n DURO - H \n");
    scanf(" %c", &player -> composto_atual);
    player -> volta_atual = 0;
    player -> voltas_no_pneu = 0;
    player -> tempo_total = 0;
    player -> numero_de_pits = 0;
    player -> trocar_composto = 0;
    player -> used_soft = 0;
    player -> used_medium = 0;
	player -> used_hard = 0;
	if(player -> composto_atual == 'S'){
	    player -> used_soft++;
	}else if(player -> composto_atual == 'M'){
	    player -> used_medium++;
	}else if(player -> composto_atual == 'H'){
	    player -> used_hard++;
	}
}
// using function degradacao for calculing the degradecion per lap
void degradacao(struct pilot *player) {
	char tyres = player -> composto_atual;
	int soft_life = 15;
	int medium_life = 20;
	int hard_life = 25;
	float soft_tyre = 88.0;
	float medium_tyre = 92.0;
	float hard_tyre = 96.0;
	if(tyres == 'S') {
		player -> desgaste = (player -> voltas_no_pneu / 15) * 100;
		player -> voltas_no_pneu++;
		if(soft_life - player -> voltas_no_pneu < 3 && soft_life - player -> voltas_no_pneu >=0){ //inverter os valores do IF
		    player -> tempo_volta = soft_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: Meus pneus estão mortos \n");
		}else if(player -> voltas_no_pneu - soft_life == 0 ||  soft_life - player -> voltas_no_pneu < 0){
		    player -> tempo_volta = (5 + soft_tyre + (player -> voltas_no_pneu * DEGRADACAO)) + 5;
		    printf("PILOTO: MEU PNEU ESTOUROU!!!!! \n");  
		}else{
		    player -> tempo_volta = soft_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: MEUS PNEUS ESTÃO OKs AINDA \n");
		}
	} else if(tyres == 'M') {
		
		player -> desgaste = (player -> voltas_no_pneu / 20) * 100;
		player -> voltas_no_pneu++;
		if(medium_life - player -> voltas_no_pneu < 3 && medium_life -  player -> voltas_no_pneu >= 0){
		    player -> tempo_volta = medium_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: Meus pneus estão mortos \n");
		}else if(medium_life - player -> voltas_no_pneu == 0 ||  medium_life - player -> voltas_no_pneu < 0){
		    player -> tempo_volta = (5 + medium_tyre + (player -> voltas_no_pneu * DEGRADACAO));
		    printf("PILOTO: MEU PNEU ESTOUROU!!!!! \n");  
		}else{
		    player -> tempo_volta = medium_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: MEUS PNEUS ESTÃO OKs AINDA \n");
		}
	} else if(tyres == 'H'){
		player -> desgaste = (player -> voltas_no_pneu / 25) * 100;
		player -> voltas_no_pneu++;
		if(hard_life - player -> voltas_no_pneu < 3 && hard_life -  player -> voltas_no_pneu >= 0){
		    player -> tempo_volta = hard_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: Meus pneus estão mortos \n");
		}else if(hard_life - player -> voltas_no_pneu == 0 ||  hard_life - player -> voltas_no_pneu < 0){
		    player -> tempo_volta = (5 + hard_tyre + (player -> voltas_no_pneu * DEGRADACAO));
		    printf("PILOTO: MEU PNEU ESTOUROU!!!!! \n");  
		}else{
		    player -> tempo_volta = hard_tyre + (player -> voltas_no_pneu * DEGRADACAO);
		    printf("PILOTO: MEUS PNEUS ESTÃO OKs AINDA \n");
		}
	} else {
		printf("INVALID TYRE \n");
	}
	printf ("\n O tempo da ultima volta e: %.2f \n", player -> tempo_volta);
}
void totallaptime(struct pilot *player){
    player -> tempo_total = player -> tempo_volta + player -> tempo_total;
}
// function pit stop
void pitting(struct pilot *player){
    char composto_novo;
    printf("Insira o Composto de pneu da sua parada \n MACIO - S \n MEDIO - M \n DURO - H \n");
    scanf(" %c", &composto_novo);
    player -> tempo_total = player -> tempo_total + TEMPO_DE_PIT;
    player -> numero_de_pits++;
    if(composto_novo =='S'){
        player -> used_soft++;
    }else if(composto_novo == 'M'){
        player -> used_medium++;
    }else if(composto_novo == 'H'){
        player -> used_hard++;
    }
    if(composto_novo == player -> composto_atual){
        player -> composto_atual = composto_novo;
        player -> desgaste = 0;
        player -> voltas_no_pneu = 0;
    }else{
        player -> composto_atual = composto_novo;
        player -> desgaste = 0;
        player -> trocar_composto = 1;
        player -> voltas_no_pneu = 0;
    }
}
//Function list their all results after race
void racedirector(struct pilot *player){
    if(player -> trocar_composto != 0){
        printf("Nome do piloto:  %s \n", player -> nome);
        printf("Equipe do piloto:  %s \n", player -> equipe);
        printf("NUMERO DE PARADAS: %d \n", player -> numero_de_pits);
        printf("Compostos usados: \n MACIO:%d \n MEDIO:%d \n DURO:%d \n", player -> used_soft, player -> used_medium, player -> used_hard);
    }else{
        printf("Você foi Desclassificado por não seguir a regra da troca de compostos");
    }
}
//main: used for a head the code, functions and their all part in code looping in main
int main(){
	struct pilot p1;
	int istrue = 1;
	int i = 0;
	int select;
	pilotandteam(&p1);
	reset(&p1);
	int minutos = 0;
	float segundos = 0;
    do{
        printf("VOLTA ATUAL: %d \n", p1.volta_atual);
        printf("Numero de paradas: %d \n", p1.numero_de_pits);
        printf("COMPOSTO ATUAL: %c \n", p1.composto_atual);
        printf("VOLTAS NO PNEU: %.0f \n", p1.voltas_no_pneu);
        printf("VOCE DESEJA: \n 1 - CONTINUAR POR MAIS UMA VOLTA \n 2 - REALIZAR UM PIT STOP \n");
        scanf("%d", &select);
        switch(select){
            case 1:
                degradacao(&p1);
                break;
            case 2:
                degradacao(&p1);
                pitting(&p1);
                break;
            default:
                printf("Opção invalida");
                break;
        }
        i++;
        p1.volta_atual++;
        totallaptime(&p1);
    }while(i <= VOLTAS_TOTAL);
	racedirector(&p1);
	minutos = p1.tempo_total/60;
	segundos = p1.tempo_total - (minutos * 60);
	printf("TEMPO TOTAL DE CORRIDA: %d:%.3f", minutos, segundos);

	return 0;
}
