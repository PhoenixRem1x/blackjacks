

import random
def getRandomInt(min,max):
    out = random.randint(min,max)
    return out

def main():

    dhand = getRandomInt(1,11)
    print(f"Dealers's Value: {dhand}")

    hand = getRandomInt(1,11)
    print(f"Your Hand: {hand}")


    while (hand < 21):
        print("Hit or stand (h/s)?: ")
        choice = input()

        if choice == 'd':
            break
        

        if choice == 'h':
            card = getRandomInt(1,11)
            hand = hand + card
            print(f"Your Hand: {hand}")
            if hand > 21:
                print("Dealers Hand: {dhand}")
                while dhand < 17:
                    print("Dealer Hit!")
                    card = getRandomInt(1,11)
                    dhand = dhand + card
                    print(f"Dealers Hand: {dhand}")
                
                if dhand > 21:
                    print("You both busted, Dealer wins!")
                    break



                print("You busted, Dealer wins!")
                break


        if choice == 's':
            print(f"Your hand: {hand}")
            print(f"Dealer's hand: {dhand}")
            dcard = getRandomInt(1,11)
            dhand = dhand + dcard
            print(f"Dealer's Hand: {dhand}")
            while dhand < 17:
                dcard = getRandomInt(1,11)
                dhand = dhand + dcard
                print(f"Dealer's Hand: {dhand}")
            
            if dhand > 21:
                print("Dealer busted, You win!")
                break

            if hand > dhand:
                print("You win!")
                break

            if dhand > hand:
                print("Dealer wins!")
                break






    return 0
main()
