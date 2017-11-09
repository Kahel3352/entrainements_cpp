#include "application.h"


Application::Application()
{
	isRunning = false;

	//jeu d'essai
}

//méthodes privées
void Application::displayMenu()
{
	cout<<"1: créer une section,\
	 2: afficher les sections, \
	 3: choisir une section, \
	 4: créer une matière, \
	 5: afficher les matières, \
	 6: quitter"<<endl;
}

int Application::inputChoix()
{
	char choix;
	cin>>choix;
	return choix;
}

void Application::actionEnFonctionDuChoix(int choix);
{
		switch(choix)
		{
			case '1':
				createSection();
			break;
			case '2':
			break;
			case '3':
			break;
			case '4':
			break;
			default:
				cout<<"choix invalide"<<endl;
			break;
		}
}

void Application::createSection();
{

}

void Application::displaySections()
{

}

void Application::pickSection()
{

}

void Application::createMatiere()


void Application::run()
{
	isRunning = true;
	do
	{
		displayMenu();
		actionEnFonctionDuChoix(inputChoix());
	}while(isRunning);
}

void Application::stop()
{
	isRunning = false;
}
