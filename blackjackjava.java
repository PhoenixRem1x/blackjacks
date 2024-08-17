

import java.util.Scanner;


public class blackjackjava
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in); 		//String in = input.nextLine();
        int dhand = (int)(Math.random()*11);
        System.out.println("Dealer's Value: " + dhand);

        int hand = (int)(Math.random()*11);
        System.out.println("Your Hand: " + hand);

        while (hand < 21) {
            System.out.println("Hit or stand (h/s)?: ");
            String choice = input.nextLine();

            if (choice.equals("d")){
                break;
                }

            if (choice.equals("h")){
                int card = (int)(Math.random()*11);
                hand = hand + card;
                System.out.println("Your Hand: "+hand);
                if (hand > 21){
                    System.out.println("Dealers Hand: " + dhand);
                    while (dhand < 17){
                        System.out.println("Dealer Hit!");
                        card = (int)(Math.random()*11);
                        dhand = dhand + card;
                        System.out.println("Dealers Hand: "+dhand);
                        }
                    if (dhand > 21){
                        System.out.println("You both busted, Dealer wins!");
                        break;
                        }


                    System.out.println("You busted, Dealer wins!");
                    break;
                    }
                }
            if (choice.equals("s")){
                System.out.println("Your hand: "+hand);
                System.out.println("Dealer's hand: "+dhand);
                int dcard = (int)(Math.random()*11);
                dhand = dhand + dcard;
                System.out.println("Dealer's Hand : "+dhand);
                while (dhand < 17){
                    dcard = (int)(Math.random()*11);
                    dhand = dhand + dcard;
                    System.out.println("Dealer's Hand: "+dhand);
                    }
                if (dhand > 21){
                    System.out.println("Dealer busted, You win!");
                    break;
                    }
                if (hand > dhand){
                    System.out.println("You win!");
                    break;
                    }
                if (dhand > hand){
                    System.out.println("Dealer wins!");
                    break;
                    }
                }
        }
	}
}
