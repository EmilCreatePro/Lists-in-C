#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct elem
        {
            int val;
            struct elem *next;
        }nod;

    nod *primul, *ultimul;

    nod *curent = (nod*) malloc(sizeof(nod));

    if(!curent)
        {
            printf("EROARE! Nu s-a putut aloca memorie!");
            exit(0);
        }

    printf("Dati prima valoarea a listei: ");
    scanf("%d",&curent->val);

    curent->next = NULL;
    primul = curent;
    ultimul = curent;

    while(curent->val!=0)
        {
            curent = (nod*) malloc(sizeof(nod));
            printf("\nDati inca o valoare pt lista: ");
            scanf("%d",&curent->val);
            curent->next = NULL;
            ultimul->next = curent;
            ultimul = curent;

        }

    curent = primul;

    printf("\nLista este: ");

    int nr_noduri = 0;

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
            nr_noduri++;
        }
    int x, nod_de_adaug;

    printf("\n\nCe valoarea vreti sa adaugati?\nRaspuns: ");
    scanf("%d",&nod_de_adaug);


    //adugare nod prin fata sau prin spate
    /*
    curent = (nod*) malloc(sizeof(nod));

     if(!curent)
        {
            printf("EROARE! Nu s-a putut aloca memorie!");
            exit(0);
        }

    printf("\n\nUnde sa-l inseram?\n1 -> In fata listei\n2 -> In spatele liste\nRaspuns: ");
    scanf("%d",&x);

    switch(x)
        {
        case 2:
                {
                    curent->val = nod_de_adaug;
                    curent->next = primul;
                    primul = curent;
                    break;
                }
        case 1:
                {
                    curent->val = nod_de_adaug;
                    curent->next = NULL;
                    ultimul->next = curent;
                    ultimul = curent;
                    break;
                }
        default:
                {
                    printf("\nVarianta gresita!");
                    getchar();
                }
        }


    while((x!=1) && (x!=2))
    {
        printf("\n\nUnde sa-l inseram?\n1 -> In fata listei\n2 -> In spatele liste\nRaspuns: ");
        scanf("%d",&x);
        switch(x)
        {
        case 2:
                {
                    curent->val = nod_de_adaug;
                    curent->next = primul;
                    primul = curent;
                    break;
                }
        case 1:
                {
                    curent->val = nod_de_adaug;
                    curent->next = NULL;
                    ultimul->next = curent;
                    ultimul = curent;
                    break;
                }
        default:
                {
                    printf("\nVarianta gresita!");
                    getchar();
                }
        }
    }
    printf("\n\nLista modificata este: ");

    curent = primul;

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    free(curent);
    */

    curent = (nod*) malloc(sizeof(nod));

     if(!curent)
        {
            printf("EROARE! Nu s-a putut aloca memorie!");
            exit(0);
        }

    printf("\n\nUnde sa-l inseram?\nRaspuns: ");
    scanf("%d",&x);

    nod *inter1, *inter2;

    int gata = 0;

    if(x == 0)
        {
            gata = 1;
            curent->val = nod_de_adaug;
            curent->next = primul;
            primul = curent;
        }

    if(x == nr_noduri)
        {
            gata = 1;
            curent->val = nod_de_adaug;
            curent->next = NULL;
            ultimul->next = curent;
            ultimul = curent;
        }

    curent = primul->next;
    inter1 = primul;

    int i = 1;

    nod *element_nou = (nod*) malloc(sizeof(nod));

    element_nou->val = nod_de_adaug;

    if(gata == 0)
        {
            while(i!=x)
                {
                    inter1 = curent;
                    curent = curent->next;
                    i++;
                }

            inter1->next = element_nou;
            element_nou->next = curent;
        }

    printf("\n\nLista modificata este: ");

    curent = primul;

    while(curent!=NULL)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    free(curent);
    free(element_nou);

    return 0;
}
