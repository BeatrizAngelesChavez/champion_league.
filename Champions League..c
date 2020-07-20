#include <stdio.h>
#include <stdlib.h>

int main (){
	int op;
	
	printf("\n    Champions League \n\n");
	printf("  1.Octavos de Final\n\n");
	printf("  2.Cuartos de Final \n\n");
	printf("  3.Final\n\n");
	printf("  4.Campeon\n\n");
	printf("  5.Salir del Menu\n\n");
	scanf("%d",&op); 
	switch (op){
	case 1:
			printf("    Ocatavos de Final (Ida)\n\n");
			printf("   Tottenham Hotspur    4-0    Borussia Dortmund\n");
			printf("   Schalke 04           2-10   Manchester City \n");
			printf("   Ajax                 5-3    Real Madrid \n");
			printf("   Atlético de Madrid   2-3    Juventus \n");
			printf("   Manchester United    3-3    Paris Saint-Germain\n");
			printf("   Olympique de Lyon    1-5    Barcelona\n");
			printf("   Liverpool            3-1    Bayern Múnich \n");
			printf("   Roma	                3-4    Porto\n\n");
		    break;
	case 2:
			printf("\n  Cuartos de Final \n\n");
			printf("    Tottenham Hotspur   4-4    Manchester City \n");
			printf("    Ajax                3-2    Juventud\n");
			printf("    Manchester          0-4    Barcelona\n");
			printf("    Liverpool           6-1     Porto\n");
			break;
	case 3:
			printf("\n  Semifinal \n\n");
			printf("    Tottenham Hotspur   1-2    Ajax\n");
			printf("    Barcelona           0-4    Liverpool\n");
			break;
	case 4:
			printf("\n  Final \n\n");
			printf("	Tottenham Hotspur   0-2    Liverpool\n");
			break;
	case 5:
			printf("\n Salir del Menu");
			break;
	return 0;
}
}
