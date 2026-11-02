Mini-Jeu-π

Le programme affiche une série de décimales pendant quelques instants, puis les masque. Le joueur doit ensuite restituer les chiffres dans le bon ordre. À chaque bonne réponse, une nouvelle décimale vient s'ajouter au défi. L'objectif est d'aller le plus loin possible sans se tromper !

⚠️ Problème avec le fichier .exe

Pour le moment, Windows Defender détecte le fichier .exe comme une menace sous le nom Trojan:Win32/Ulthar.A!ml.

Il peut s'agir d'un faux positif lié à la compilation du programme. Cependant, cette détection n'ayant pas encore été écartée, je vous recommande de ne pas exécuter le fichier .exe pour le moment.

Deux possibilités pour tester le jeu :

1) Compiler le programme vous-même ;
Le projet est écrit en langage C et peut être compilé avec GCC (MinGW).
Prérequis
Installer MinGW-w64 ou un environnement contenant GCC.
Ajouter GCC à la variable d'environnement PATH de Windows.
Compilation
Ouvrez un terminal dans le dossier contenant le fichier source .c, puis exécutez :
gcc main.c -o Mini-Jeu-Pi.exe
Remplacez main.c par le nom réel du fichier source si nécessaire.
Exécution
Une fois la compilation terminée, lancez le programme avec :
.\Mini-Jeu-Pi.exe

2) Attendre une version vérifiée : je mettrai à jour le projet dès que j'aurai obtenu un retour de Microsoft concernant cette détection.


Merci de votre compréhension !
