# ft_printf

Premier projet de la branche Algorithmie de l'école 42. Recoder la fonction printf de la bibliothèque stadard du C.

Voici les différents comportements que gère ce printf :

* Conversion: sSpdDioOuUxXcC
* %%
* Flags: #0-+ et espace
* Taille minimum du champ
* Précision
* Flags: hh h l ll j z

## Pour commencer

Ces instructions vous aideront à avoir une copie du projet et de pouvoir le faire marcher sur votre ordinateur.

### Prérequis

**Attention: A partir de maintenant, toutes les étapes (téléchargement, installation/compilation, exécution) seront à effectuer sur un terminal.**

#### Système d'exploitation

```
GNU/Linux, Mac OS X ou macOS Sierra
```

#### Téléchargement

Ce que vous devez faire pour télécharger les fichiers sources afin de pouvoir les compiler par la suite

```
git clone https://github.com/dcooray42/ft_printf.git [nom du PATH/dossier]
```

### Installation

Se placer dans le dossier dans lequel vous avez fait la copie des fichiers sources du projet puis rentrer la commande suivante

```
make
```
Plusieurs fichiers .o auront fait leur apparitions dans le dossier que vous avez cloné ainsi que la librairie statique

```
libftprintf.a
```
### Suppression

Pour supprimer les fichiers objets .o généré lors de la création de la librairie

```
make clean
```

Pour supprimer les fichiers objets .o et la librairie libftprintf.a

```
make fclean
```

Pour tout supprimer puis recompiler la librairie

```
make re
```

## Faire des tests

Aucun test n'est fourni avec ce projet. Toutefois vous pouvez créé un binaire avec vos propres fichiers sources et la 
librairie précédemment créé.

### Compilation avec le fichier libftprintf.a

Aménager vos fichiers sources et headers dans un dossier unique de tel sorte à ce que la commande suivante fonctionne

```
gcc -Wall -Werror -Wextra -I [PATH du dossier cloné/includes] -L [PATH du dossier cloné] -lftprintf *.c -o [nom de votre binaire]
```

## Note
98/100

## Auteur

* **Dimitri Cooray** - [Lien vers github](https://github.com/konamifox)
