#include <stdio.h>
int main()
{
    int i, taille, t[100], pos;
    printf("Veuillez entrer la taille du tableau: \n");
    scanf("%d", &taille);
    printf("Veuillez saisir les élèments du tableau: \n");
    i=0;
    while(i<taille)
    {
        printf("Element n°%d:\n", i+1);
        scanf("%d", &t[i]);
        i++;
    }
    i=0;
    while(i<taille)
    {
        printf("%d, ", t[i]);
        i++;
    }
    printf("\nVoulez-vous supprimer l'élèment à quel position?\n");
    scanf("%d", &pos);
    pos=pos-1;
    if(pos<0 || pos>taille)
    {
        while (pos<0 ||pos>taille)
        {
           printf("Cette position n'existe pas. Veuillez essayer une autre\n");
            scanf("%d", &pos);
        }
    }
    else if(pos>=0 && pos<taille)
    {
        i=taille;
         i=0;
        while(t[i]<taille)
        {
          if(i>=pos)
          {
            t[i] = t[i+1];
            i++;
          }
            else
            i++;
        } 
        taille--;
    }
    i=0;
    printf("Voici le nouveau tableau: ");
    while (i<taille)
    {
        printf("%d", t[i]);
        i++;
    }
    
}