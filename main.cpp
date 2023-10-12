/*#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    Personne sarko, carlita, manu, bibi; // Création de 4 objets de type Personne, créé par leurs surnoms
    carlita.marier("SARKOZY"); //Carla Bruni se marie avec Nicolas SARKOZY
    bibi.marier("MACRON"); //Brigitte se marie avec Emmanuel MACRON
    manu.demenager("Palais de l'elysée, 75000 PARIS"); // Manu déménage à l'Elysée
    bibi.demenager("Palais de l'elysée, 75000 PARIS"); // brigitte déménage à l'Elysée
    sarko.anniversaire(); // Nicolas SARKOZY a 1 an de plus
    sarko.changer_travail("Homme d'affaire"); //Nicolas SARKOZY a toujours aimé l'argent !
    carlita.changer_travail("Chnateurse"); // Faut croire que Carla BRUNI sait chanter !
    manu.changer_travail("Président de la République"); //Emmanuel MACROn devient président
    bibi.changer_travail("Première Dame"); //Brigitte MACRON devient la prmeière Dame de France
    return 0;
}*/

#include <iostream> 
#include "Personne.h"

using namespace std;

int main ()
{
Personne flanby ("HOLLANDE", "Francois", 67, "Fonctionnaire"); // Création de l'objet sarko 
Personne sego("ROYAL", "Segolene", 68, "Ministre"); // Création de l'objet carlita 
Personne jeanmimi("BLANQUER", "Jean-Michel", 57, "Ministre"); // Création de l'objet manu 
Personne aure("DEVOS", "Aurelia", 42, "Magistrate"); // Création de l'objet bibi

// Affichage des informations des 4 personnages avant l'utilisation des objets
cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();

// Action sur les objets
sego.changer_travail("Retraite");
flanby.changer_travail("Retraite");
aure.marier("BLANQUER");
sego.anniversaire();
jeanmimi.anniversaire();
sego.marier("ROYAL");
aure.marier("DEVOS");

// Affichage des informations des 4 personnages après l'utilisation des objets
cout << "On afficheles informations des 4 personnages après l'utilisation des objets" << endl;
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();

return 0;
}