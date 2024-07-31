#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRandomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0));
    int dhand = getRandomInt(1, 11);
    printf("Dealer's Value: %d\n", dhand);
    
    int hand = getRandomInt(1, 11);
    printf("Your Hand: %d\n", hand);
    
    char choice;
    while (hand < 21){
        printf("Hit or stand (h/s)?:  ");
        scanf(" %c", &choice);
        printf("\n");
        if (choice == 'd'){
            break;
        }

        if (choice == 'h'){
            int card = getRandomInt(1, 11);
            hand = hand + card;
            printf("Your Hand: %d\n", hand);
            if (hand > 21){
                printf("Dealers Hand: %d\n", dhand);
                while (dhand < 17){
                    printf("Dealer: Hit!\n");
                    int dcard = getRandomInt(1, 11);
                    dhand = dhand + dcard;
                    printf("Dealer's hand: %d\n", dhand);
                }
                if (dhand > 21){
                    printf("You both busted, Dealer wins!\n");
                    break;
                }


                printf("You busted, Dealer wins!\n");
                break;
            }
        }
        if (choice == 's'){
            printf("Your hand: %d\n", hand);
            printf("Dealer's hand: %d\n", dhand);
            int dcard = getRandomInt(1, 11);
            dhand = dhand + dcard;
            printf("Dealer's hand: %d\n", dhand);
            while (dhand < 17){
                int dcard = getRandomInt(1, 11);
                dhand = dhand + dcard;
                printf("Dealer's hand: %d\n", dhand);
            }
            if (dhand > 21){
                printf("Dealer Busted, You Win!\n");
                break;
            }
            if (hand > dhand){
                printf("You Win!\n");
                break;
            }
            if (dhand > hand){
                printf("Dealer Wins!\n");
                break;
            }
        }
        
    }
    

    return 0;
}

