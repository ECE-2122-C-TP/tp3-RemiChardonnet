#include <stdio.h>

int main()


/*
{
 //Exercice 1
    int a = 0, b = 0;
    printf("Saisissez deux nombres entiers :\n>");
    scanf("%d %d", &a, &b);
    if (a < b) { //Compare les valeurs pour savoir si a ou b est le plus grand
        printf("%d est la plus grande valeur", b);
    }
    else {
        printf("%d est la plus grande valeur", a);
    }
    return 0;
}
*/


/*
{
 //Exercice 2
    int largeur = 0, longueur = 0;
    printf("Saisissez la largeur du rectangle :\n>");
    scanf("%d",&largeur);
    printf("Saisissez la longeur du rectangle :\n>");
    scanf(" %d",&longueur);
    printf("Le perimetre du rectangle est %d et son aire est %d", (2 * largeur + 2 * longueur),(largeur * longueur)); //Calcule le perimetre et l'aire
    return 0;
}
*/


/*
{
 //Exercice 3
    const int cte = 3;
    int a = 0;
    printf("Saisissez un entier :\n>");
    scanf("%d", &a);
    if(a % cte == 0){ //Permet de savoir si l'entier est divisible par la constante ici 3
        printf("%d est multipe de %d", a, cte);
    }
    else{
        printf("%d n'est pas multipe de %d", a, cte);
    }
    if(a >= 10){ //Permet de savoir si l'entier est superieur a 10 ou non
        printf("\n%d est superieur ou egal a 10", a);
    }
    else{
        printf("\n%d n'est pas superieur ou egal a 10", a);
    }
    return 0;
}
*/


/*
{
 //Exercice 4
    int age = 0, ste_etudiant = 0;
    printf("Saisisssez votre age :\n>");
    scanf("%d", &age);
    if(age < 0){
        printf("Un age ne peut pas etre negatif ;)");
    }
    else if(age < 12 && age >= 0){
        printf("Tarif enfant : 4 euros");
    }
    else if(age >= 12 && age <= 17){
        printf("Tarif jeune : 6 euros");
    }
    else if(age < 27){
        printf("Etes-vous etudiant : 1 = oui 0 = non\n>");
        scanf(" %d", &ste_etudiant);
        if(ste_etudiant == 1){
            printf("Tarif jeune : 6 euros");
        }
    }
    else if(age >= 65){
        printf("Tarif senior : 6 euros");
    }
    else{
        printf("Plein tarif : 9 euros");
    }
    return 0;
}
*/


/*
{
//Exercice 5
    int n = 0;
    printf("Choisissez le numero de la boisson :\n>");
    scanf("%d", &n);
    switch (n) { //Permet de choisir le numero de la boisson et de renvoyer a la bonne boisson ou pas
        case 1 :{
            printf("Vous avez choisi le Coca cola");
            break;
        }
        case 2 :{
            printf("Vous avez choisi le Fanta");
            break;
        }
        case 3 :{
            printf("Vous avez choisi le Ice Tea");
            break;
        }
        case 10 :{
            printf("Vous avez choisi le The");
            break;
        }
        case 11 :{
            printf("Vous avez choisi le Cafe");
            break;
        }
        default :{
            printf("Erreur, vous n'avez pas selectionner de boisson");
            break;
        }
    }
    return 0;
}
*/


/*
{
 //Exercice 6
    float Note1 = 0.0f, Note2 = 0.0f, Note3 = 0.0f;
    printf("Saisissez trois notes :\n>");
    scanf("%f %f %f", &Note1, &Note2, &Note3);
    while(Note1 < 0 || Note1 > 20){ //Permet de redefinir la Note1 en cas de valeur negative ou superieur a 20
        printf("Erreur, resaissir la premiere note :\n>");
        scanf("%f", &Note1);
    }
    while(Note2 < 0 || Note2 > 20){ //Permet de redefinir la Note2 en cas de valeur negative ou superieur a 20
        printf("Erreur, resaissir la deuxieme note :\n>");
        scanf("%f", &Note2);
    }
    while(Note3 < 0 || Note3 > 20){ //Permet de redefinir la Note3 en cas de valeur negative ou superieur a 20
        printf("Erreur, resaissir la deniere note :\n>");
        scanf("%f", &Note3);
    }
    printf("%f", (Note1 + Note2 + Note3) / 3); //Calcul de la moyenne des 3 Notes
    return 0;
}
*/


/*
{
 //Exercice 7
    int NbClasse = 0, i = 0, NbTotalEleve = 0, NbEleveClasse = 0;
    printf("Saisir le nombre de classe ouverte :\n>");
    scanf("%d", &NbClasse);
    for(i = 1; i < NbClasse + 1 ; i++){ //Boucle pour demander et additioner le nombre d'eleves total de l'ecole
        printf("Saisir le nombre d'eleve dans la classe %d :\n>", i);
        scanf(" %d", &NbEleveClasse);
        NbTotalEleve = NbTotalEleve + NbEleveClasse;
    }
    printf("Il y a %d eleve dans l'ecole", NbTotalEleve);
    return 0;
}
*/


/*
{
 //Exercice 8
    int n = 0, cte7 = 7, cte2 = 2;
    printf("Saisissez un nombre multiple de %d et de %d :\n>", cte7, cte2);
    scanf("%d", &n);
    while(n % cte7 != 0 || n % cte2 != 0){ //Permet de savoir si le nombre est multipe de 7 et de 2
        printf("Saisissez un nombre multiple de %d et de %d :\n>", cte7, cte2);
        scanf("%d",&n);
    }
    printf("%d est un multiple de %d et de %d", n, cte7, cte2);
    return 0;
}
*/


/*
{
 //Exercice 9
    int Pierre = 0, Etage =-1, PierreRestante = 0, i = 1, PierreDisponible;
    printf("Saisissez le nombre de pierres disponibles :\n>");
    scanf("%d", &PierreDisponible);
    Pierre = PierreDisponible; //Permet de garder le nombre de pierre initial
    while(Pierre > 0){ //Permet de soustraire les etages car chaque etage est composé de 1, 2*2, 4*4, ... d'ou i*i
        PierreRestante = Pierre;
        Pierre = Pierre - (i * i);
        Etage = Etage + 1;
        i = i + 1;
    }
    printf("Il est possible de construire %d etage avec les %d pierres disponibles et il restera %d pierres.", Etage, PierreDisponible, PierreRestante);
    return 0;
}
*/


/*
{
 //Exercice 10
    int somme = 0, NouvelleValeur = 1, i = -1;
    while(NouvelleValeur > 0){ //Permet de rajouter une nouvelle valeur tant qu'elle est pas negative
        somme = somme + NouvelleValeur;
        printf("Saisissez une nouvelle valeur :\n>");
        scanf("%d", &NouvelleValeur);
        i = i +1;
    }
    printf("La moyenne des valeur est %d", ((somme) / i));
    return 0;
}
*/