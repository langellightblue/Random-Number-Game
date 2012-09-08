#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mystere = 0;
int menudifficulte = 0;

/*void difficulte(int level)
{
	int i;
	if (i = 1)
	{
		const int MAX = 100, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
	}
	else if (i = 2)
	{
		const int MAX = 1000, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
	}
	else if (i = 3)
	{
		const int MAX = 10000, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
	}
	else
		printf("BUG in void difficulte");
}
*/
void difficulte()
{
	printf("\n\nNiveau de difficulté\n");
	printf("Veuillez choisir un niveau de difficulté\n");
	printf("Niveau 1 : nombre entre 1 et 100\n");
	printf("Niveau 2 : nombre entre 1 et 1 000\n");
	printf("Niveau 3 : nombre entre 1 et 10 000\n");
	printf("Votre choix : ");
	scanf("%d", &menudifficulte);
	if ( menudifficulte == 1)
	{
		const int MAX = 100, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
		printf("Vous avez choisi la difficulté 1.\n");
	}
	else if ( menudifficulte == 2)
	{
		const int MAX = 1000, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
		printf("Vous avez choisi la difficulté 2.\n");
	}
	else if ( menudifficulte == 3)
	{
		const int MAX = 10000, MIN = 1;
		srand(time(NULL));
		mystere = (rand() % (MAX - MIN + 1)) + MIN;
		printf("Vous avez choisi la difficulté 3.\n");
	}
	else
	{
	printf("Vous n'avez pas entré un chiffre, ou vous n'avez pas choisi de difficulté.\n");
                        printf("Entrez un nombre : ");
                        scanf("%d", &menudifficulte);
			return 1;
	}
}
int main( int argc, char** argv )
{
	int entremystere = 0;
	int menu = 0;
	
	printf("Plus ou moins\n");
	printf("Auteur : Bertrand Caplet\n");
	printf("Date : 31/07/2012\n");
	printf("Version : 0.02\n\n");
	printf("Pour afficher le but de ce jeu tapez 1\n");
	printf("Pour choisir la difficulté taper 2\n\n");
	printf("Menu : ");
	scanf("%d", &menu);
	if (menu == 1)
	{
		printf("\n\nLe but du jeu:\n");
		printf("Un nombre est généré, soit entre 1 et 100, 1 et 1 000 ou 1 et 10 000\n");
		printf("Il vous faut trouver ce nombre.\n");
		printf("Tapez 1 pour retourner au menu de selection de difficulté\n");
		printf("Menu : ");
		int menubut = 0;
		scanf("%d", &menubut);
		while (menubut != 1)
		{
			printf ("Vous n'avez pas entré le bon chiffre : ");
			scanf("%d", &menubut);
		}
		/*else if (menubut == 1)
		{
			difficulte();
		}*/
		
		difficulte();
	}
	else if (menu == 2)
	{
	difficulte();
	}
	else
	{
		printf("Bug in if (menu == x)");
		return 1;
	}
	do
	{
		printf("\n\nEntrez un nombre : ");
		scanf("%d", &entremystere);
		if (entremystere < mystere)
		{
			printf("C'est plus !\n");
		}
		else if (entremystere > mystere)
		{
			printf("C'est moins !\n");
		}
		else if (entremystere = mystere)
		{
			printf("Bravo vous avez trouvé !\n");
		}
		else
		{
			printf("Vous n'avez pas entré un chiffre, ou vous n'avez pas entré le bon chiffre.\n");
			printf("Entrez un nombre : ");
			scanf("%d", &entremystere);
			return 1;
		}
	} while (entremystere != mystere);

	return 0;
}
