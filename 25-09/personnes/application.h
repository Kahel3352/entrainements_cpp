#include "person.h"
#include <vector>
#include <iostream>
using namespace std;

class Application
{
	private:
		//attributs
		vector<Person*> vectPerson;
		bool isRunning;
		
		//méthodes privées
		void afficherMenu();
		char saisirChoix();

		void realiserActionCorrespondantAuChoix(char choix);
		void ajouter();
		void afficher();
		Person rechercher(string chaineAChercher);

		void stop();
		
	
	public:
		Application();
		void run();
};
