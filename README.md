# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code..
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

# Question 1

Une notion que j’ai découverte et utilisée dans ce projet est la gestion du temps en C++ avec ctime. J’ai appris comment récupérer la date et l’heure actuelles du système et les convertir en un texte lisible pour l’utilisateur. Dans mon projet, dans logActivite(), j'ai appris à récupérer le temps complet (année-mois-jour et heure-minutes-secondes) avec time_t et ensuite à la convertir en texte lisible avec localtime et strftime. J’aurais aimé que ce sujet soit plus expliqué dans le cours, parce que comprendre comment manipuler/afficher le temps rend les programmes beaucoup plus dynamiques et réalistes, donc selon moi, plus professionnel et beaux aux yeux de l'utilisateur.

# Question 2 

Si la bibliothèque atteindrait les millions de livres, je pense que la meilleure solution serait d'utiliser une base de données, puisque ,pour les grands nombres de de données, les fichiers de texte compliqueraient trop le travail car le code deviendrait lent et surtout difficile à gérer. Tandis qu'avec MySQL ou phpMyAdmin par exemple, le gestion des livres, des utilisateurs, les emprunts/retours serait fait de facon plus facile, rapide mais surtout fiable comparément aux fichiers texte. Je ne sais pas comment cela pourrait être possible mais pour le moment je dirais une extension de vscode qui permet de connecter notre code C++ à nos base de données externes.