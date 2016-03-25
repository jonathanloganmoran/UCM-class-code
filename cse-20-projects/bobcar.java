import java.util.Scanner; //This allows for user input
public class bobcar {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in); //this sets up scanner for input variables
         
        int cartype;    //variables assigned for cars, rental days, and price
        int base_price = 0, new_price = 0, platinum_choice, cost_of_plat = 0, car_rate = 0, rental_days = 0, member_choice, discount = 0;
        String car_choice = null;
         
        System.out.print("Available cars: 1 for Economy, " + "2 for Compact, " + "3 for Standard.");
        System.out.println("Economy: $25 per day " + "Compact: $55 per day " + "Standard: $100 per day");
        System.out.println("Please choose the rental car: ");
        cartype = scnr.nextInt();
         
        if (cartype == 1) {     //Checks for what type of car from user input
            System.out.println("You picked: Economy car");
            car_rate = 25;
            car_choice = "Economy";
        }
        else if (cartype == 2) {
            System.out.println("You picked: Compact car");
            car_rate = 55;
            car_choice = "Compact";
        }
        else if (cartype == 3) {
            System.out.println("You picked: Standard car");
            car_rate = 100;
            car_choice = "Standard";
        }
        else {      // Accounts for any numbers that aren't 1-3.
            System.out.println("Invalid choice, bruh");
            System.exit(0);
        }
             
        System.out.println("Enter the number of rental days, please: ");
        rental_days = scnr.nextInt();
         
        base_price = car_rate * rental_days;    //Calculates price of car type with number of days rented.
         
        System.out.println("Are you a club member?  " + "Input 1 for yes, 0 for no");
        System.out.println("Input 1 for yes, 0 for no");
        member_choice = scnr.nextInt();
 
        if (member_choice == 1) {
            if (rental_days / 5 >= 1) {
                discount = (rental_days / 5) * car_rate;
            }
            new_price = base_price;
            System.out.println("Would you like to purchase the Platinum Executive Package for 20% of base price?");
            System.out.println("1 for yes, 0 for no");
            platinum_choice = scnr.nextInt();
            if (platinum_choice == 1) {   //This handles the price addition for platinum executive package choice.
                cost_of_plat = (int) (base_price * .20);
                new_price = base_price + cost_of_plat - discount;
            }
            else if (platinum_choice == 0) {
                new_price = new_price - discount;
            }
            else {
                System.out.println("It is a yes or no question.");
                System.exit(0);
            }
        }
        else if (member_choice == 0) {
            new_price = base_price;
        }
         
        System.out.println("Base: " + rental_days + " days for " + car_choice + " @ " + car_rate + " per day: " + base_price );
        System.out.println("Club member discount:   -" + " $ " + discount);
        System.out.println("Platinum Executive Package:  + " + " $ " + cost_of_plat);
        System.out.println("Total estimate for rental:  " + " $ " + new_price);
         
        System.out.println("Have a nice day!");
        scnr.close();
    }
}
