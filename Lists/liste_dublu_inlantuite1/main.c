#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct elem
        {
            int val;
            struct elem *urmator, *anterior;
        }nod;

    nod *primul, *ultim;

    nod *curent = (nod*) malloc(sizeof(nod));

    printf("Dati prima informatie din lista: ");
    scanf("%d",&curent->val);

    curent->urmator = NULL;
    curent->anterior = NULL;
    primul = curent;
    ultim = curent;

    while(curent->val!=0)
        {
            curent = (nod*) malloc(sizeof(nod));
            printf("\nDati inca un element in lista: ");
            scanf("%d",&curent->val);
            curent->urmator = NULL;
            curent->anterior = ultim;
            ultim->urmator = curent;
            ultim = curent;
        }

    int opt = 12;


    while(opt)
        {
            printf("\n\nCuma vreit sa parcurgem lista?\n 1 -> Inceput spre Sfarsit\n 2 -> Sfarsit spre Inceput\n 0 -> Iesire\nRaspuns: ");
            scanf("%d",&opt);

            switch(opt)
                {
                    case 1:
                        {
                            printf("\n\nLista este: ");
                            curent = primul;
                            while(curent!=NULL)
                                {
                                    printf("%d ",curent->val);
                                    curent = curent->urmator;
                                }
                            break;
                        }
                    case 2:
                        {
                            printf("\n\nLista este: ");
                            curent = ultim;
                            while(curent!=NULL)
                                {
                                    printf("%d ",curent->val);
                                    curent = curent->anterior;
                                }
                            break;
                        }
                    case 0 : break;
                    default: printf("\n\n->Alegere gresita!<-\n\n");
                }
        }


    return 0;
}
