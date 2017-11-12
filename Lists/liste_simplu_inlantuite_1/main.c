#include <stdio.h>
#include <stdlib.h>

int main()
{
    //creare prin fata a listei

    /*
    struct nod
        {
            int info;
            struct nod *next;
        };

    struct nod *primul, *ultim;


    struct nod *curent =(struct nod*) malloc(sizeof(struct nod)) ;
    printf("Dati primul element al listei: ");
    scanf("%d",&curent->info);
    primul = curent;
    ultim = curent;
    curent->next = NULL;

    while(curent->info != 0)
        {
            curent =(struct nod*) malloc(sizeof(struct nod));
            printf("\nDati inca un element al listei: ");
            scanf("%d",&curent->info);
            ultim->next = curent;
            ultim = curent;
            curent->next = NULL;
        }

    curent = primul;

    printf("\nElementele listei sunt: ");

    while(curent->info!=0)
        {
           printf("%d ",curent->info);
           curent = curent->next;
        }
    */


    //creare prin spate a listei

    /*
    typedef struct lista
        {
            int val;
            struct lista *next;
        }nod;

    nod *primul, *ultim;

    nod *curent = (nod*) malloc(sizeof(nod));

    printf("Dati prima valoare a listei: ");
    scanf("%d",&curent->val);
    curent->next = NULL;
    primul = curent;
    ultim = curent;

    while(curent->val != 0)
        {
            curent = (nod*) malloc(sizeof(nod));
            printf("\nDati inca o valoare a listei: ");
            scanf("%d",&curent->val);
            curent->next = primul;
            primul = curent;

        }

    printf("\n\nElementele listei sunt: ");

    while(primul != NULL)
        {
            printf("%d ",primul->val);
            primul = primul->next;
        }
    */

    //creare lista prin fata cu typedef

    typedef struct lista
        {
            int val;
            struct lista *next;
        }nod;

    nod *primul, *ultim;

    nod *curent = (nod*) malloc(sizeof(nod));

    printf("Dati prima valoare din lista: ");
    scanf("%d",&curent->val);
    curent->next = NULL;
    primul = curent;
    ultim = curent;

    while(curent->val != 0)
        {
            curent = (nod*) malloc(sizeof(nod));
            printf("\nDati alta valoare pt lista: ");
            scanf("%d",&curent->val);
            curent->next = NULL;
            ultim->next = curent;
            ultim = curent;
        }

    curent = primul;

    printf("\n\nLista este: ");

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    return 0;
}
