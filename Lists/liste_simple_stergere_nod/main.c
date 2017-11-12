#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct elem
        {
            int val;
            struct nod *next;
        }nod;

    nod *primul, *ultimul;

    nod *curent = (nod*) malloc(sizeof(nod));

    printf("Dati prima valoare din lista: ");
    scanf("%d",&curent->val);
    curent->next = NULL;
    primul = curent;
    ultimul = curent;

    while(curent->val!=0)
        {
            curent = (nod*) malloc(sizeof(nod));
            printf("\nDati inca o valoare pt lista: ");
            scanf("%d",&curent->val);
            if(curent->val!=0)
                {
                    curent->next = NULL;
                    ultimul->next = curent;
                    ultimul = curent;

                }
        }

    printf("\n\nLista este: ");

    curent = primul;

    while(curent)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    int x;

    nod *aux;

    printf("\n\nCe valoare vreti sa eliminam?\nRaspuns: ");
    scanf("%d",&x);

    while(primul->val == x)
        {
            aux = primul;
            primul = primul->next;
            free(aux);
        }

    curent = primul;

    nod *urmator;

    while(curent->next!=NULL)
        {

            urmator = curent->next;
            if(curent->next!=ultimul)
                {
                    if(urmator->val == x)
                        {
                            curent->next = urmator->next;
                        }
                    curent=curent->next;
                }
            else
                {
                    if(ultimul->val == x)
                        curent->next = NULL;
                }
        }

    printf("\n\nLista modificata este: ");

    curent = primul;

    while(curent)
        {
            printf("%d ",curent->val);
            curent = curent->next;
        }

    return 0;
}
