42 - EXAM 05 (CPP)

( Remerciements a Mlormois qui m'aura donné de précieux conseils pour la validation de l'exam )

Salut a toi qui souhaite réviser l'exam 05.
Je vais essayer de donner tous les tips qui pourront t'aider a gagner du temps précieux en debug.

CPP_MODULE_00

Pas vraiment de piege. IL faut juste penser a mettre le constructeur par default, le constructeur par copie et la surcharge d'opérateur d'assignation en private
pour ne pouvoir instancier que grace au constructeur parametrique.

CPP_MODULE_01

Ne réécrivez pas chque classe mais copiez collez ASpell dans ATarget qui sont sensiblement pareils a quelques details pres.
Comme il n'y a pas de norme, vous pouvez utiliser la STL. Dans ma classe Warlock, j'utilise map et les itérateurs pour stocker les sorts dans l'inventaire de mon Warlock.
Avec les iterateurs et la fonction find de map, vous pouvez plus simplement utiliser les fonctions learnSpell, forgetSpell, launchSpell.
Les typedef  permettent de simplifier la syntaxe.

CPP_MODULE_02

Pour Fireball et Polymorph, il suffit juste de copier Fwoosh.hpp et Fwoosh.cpp.
Pareil pour BrickWall, il faut copier Dummy.
Le spellbook sera finalement ce qu'on avait implémenté dans l'exercice d'avant dans Warlock.
Il y aura juste la fonction createSpell en plus. La fonction launchSpell de Warlock sera modifiée aussi.
Pour TargetGenerator, c'est a peu pres une copie de SpellBook, donc ne vous embetez pas et copiez SpellBook.hpp et .cpp dans TargetGenerator
en modifiant ce qu'il faut.

AUTRE

Si vous décidez de coder directement dans le .hpp pour gagner du temps, n'oubliez pas d'include les .hpp dans les .cpp !
Pour ASpell et ATarget, n'oubliez pas au'il y a une inclusion circulaire (ASpell inclut dans ATarget et ATarget inclut dans ASpell). Il faudra donc penser a ecrire
class NOM_DE_CLASS_A; dans le .hpp de la classe B et inversement.
A cause de cette inclusion circulaire, la fonction de la classe ASpell qui utilisera ATarget ne peut pas etre directement codé dans la classe. Il faudra mettre
cette fonction soit dans le .cpp, soit apres la definition de la classe.

Bon courage pour ton exam, j'espere avoir pu t'aider !
