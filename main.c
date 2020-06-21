#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choix=0;
    char quit='n';
    
    do
   	{	
   		printf("\n🕮  ==== Menu by CED ==== 🏷\n\n ❶ Riz \n ❷ Harico \n ❸ Tot \n ❹ Couscous \n ❺ Quiter le programme \n\n faites votre choix : "); 
   		scanf("%d",&choix);
		switch (choix)
		{
		case 1 :
			system("clear");
			printf("\n     ♨ Le Riz ♨ \n\n");
			printf("Le riz est un plat tres consommer\nau burkina. il se mange gras ou\naccompagner de sauce\n\n");
			//printf(" ♳ Retour au Menu ❔ ☑Y/N☒ : ");
			//scanf("%s",quit);
			break;
		case 2 :
			system("clear");
			printf("\n     ♨ Le harico ♨ \n\n");
			printf("Le Harico est un plat tres consommer\nau burkina. il se mange gras ou\naccompagner de sauce\n\n");
			//printf(" ♴ Retour au Menu ❔ ☑Y/N☒ : ");
			//scanf("%s",quit);
			break;
		case 3 :
			system("clear");
			printf("\n     ♨ Le Tot ♨ \n\n");
			printf("Le Tot est un plat tres consommer\nau burkina. il se mange gras ou\naccompagner de sauce\n\n");
			//printf(" ♵ Retour au Menu ❔ ☑Y/N☒ : ");
			//scanf("%s",quit);
			break;
		case 4:
			system("clear");
			printf("\n     ♨ Le Couscous ♨ \n\n");
			printf("Le Couscous est un plat tres consommer\nau burkina. il se mange gras ou\naccompagner de sauce\n\n");
			//printf(" ♶ Retour au Menu ❔ ☑Y/N☒ : ");
			//scanf("%s",quit);
			break;
		case 5 :
			system("clear");
			printf(" ♼ check 5");
			 //\n Revenir au Menu ❔ ☑Y/N☒ : ");
			//scanf("%s",quit);
			break;
		default :
			printf("\n C'est quoi comme plats ?\n je ne connais pas! est ce que c est bon ❔ \n");
			//scanf("%s",quit);
			break;
		}
		printf(" ♳ Retour au Menu ❔ ☑Y/N☒ : ");
		scanf("%s",&quit);
		system("clear");
	}
	
	while(quit != 'n');
    /*if (choix == 1){
        printf("check 1 \n vouler quiter ? Y/N : ");
        scanf("%d",&quit);

    }
    else if (choix == 2){
		printf("check 2 \n vouler quiter ? Y/N : ");
        scanf("%d",&quit);
    }
    
    else if (choix == 3){
       printf("check 3 \n vouler quiter ? Y/N : ");
       scanf("%d",&quit);
    }
    else if (choix == 4 ){
        printf("check 4 \n vouler quiter ? Y/N : ");
        scanf("%d",&quit);
    }
    else if(choix == 5){
        printf("check 5 \n vouler quiter ? Y/N : ");
        scanf("%d",&quit);
    }
    else{
        printf(" C'est quoi comme plats ?\n je ne connais pas! Vouler vous m'en parler ? Y/N : \n");
    }
   	copy rigth © 2020 - cedric tapsoba - tous droit reserver.
    */
    printf("\n🕮  ==== Menu by CED ==== 🏷");
    printf("\n***************************");
    printf("\n    CopyRigth © 2020 \n   #_Cedric TAPSOBA_# \n   Tous droit reserver.\n\n");
    return 0;
    //puts("fin");
    //getchar();
}
