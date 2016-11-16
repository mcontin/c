#include <stdio.h>
#include <malloc.h>
#include <mem.h>

int amount;

void printAmount() {
    printf("Hai %d euro nel conto.\n", amount);
}

void printWrongInput() {
    printf("Non esiste questa funzione.");
}

void requestAction() {
    printf("Cosa vuoi fare?\n1 - preleva\n2 - deposita\n3 - storico movimenti");
}

int input() {
    int value = 0;
    int nItems = scanf("%d", &value);

    if (nItems == EOF) {
        printf("Errore end of file, hai inserito un numero?");
        return -1;
    } else if (nItems == 0) {
        printf("Input non corretto.");
        return -1;
    }

    return value;
}

int withdraw() {
    printf("-- Prelievo --\n");

    if(amount <= 0) {
        printf("Non hai soldi sul conto.");
        return -1;
    }

    printf("Quanto vuoi prelevare?");
    int request = 0;

    request = input();

    if(request <= 0) {
        printf("Devi prelevare almeno 1 euro.");
        return -1;
    } else if(request == -1) {
        return request;
    } else {
        if (request > amount) {
            printf("Non hai abbastanza soldi nel conto. Puoi ritirare fino a %d euro.", amount);
            return -1;
        } else {
            amount -= request;
        }
    }

    printf("Hai prelevato %d euro.\n", request);

    return request;
}

int deposit() {
    printf("-- Deposito --\n");

    printf("Quanto vuoi depositare?");
    int request = input();

    if(request <= 0) {
        printf("Devi depositare almeno 1 euro.");
        return -1;
    }

    amount += request;

    printf("Hai depositato %d euro.\n", request);

    return request;
}

typedef struct movement {
    char type[9]; // 0 = prelievo, 1 = deposito
    int amount;
    struct movement * next;
} movement_t;

void recordMovement(movement_t ** head, char * type, int amount) {
    if((*head) == NULL) {
        (*head) = malloc(sizeof(movement_t));
        strncpy((*head)->type, type, 9);
        (*head)->amount = amount;
        (*head)->next = NULL;
    } else {
        movement_t * current = *head;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = malloc(sizeof(movement_t));
        strncpy(current->next->type, type, 9);
        current->next->amount = amount;
        current->next->next = NULL;
    }
}

void printHistory(movement_t * head) {
    movement_t * current = head;

    printf("-- Movimenti --\n");

    while (current != NULL) {
        printf("%s di %d euro.", current->type, current->amount);
        current = current->next;
    }
}

void main() {
    amount = 10000;
    movement_t * head = NULL;

    int action = 0;
    int request = 0;

    while(1) {
        printAmount();
        requestAction();

        scanf("%d", &action);

        switch(action) {
            case 1:
                request = withdraw();
                if(request > 0) {
                    recordMovement(&head, "Prelievo", request);
                }
                break;
            case 2:
                request = deposit();
                if(request > 0) {
                    recordMovement(&head, "Deposito", request);
                }
                break;
            case 3:
                printHistory(head);
                break;
            default:
                printWrongInput();
        }
    }
}
