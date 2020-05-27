import java.util.Scanner;

public class Old_pi_to_new_pi{
    public static void main(final String[] args) {
        // Number used as diamiter
        final Double diamiter = 10.0;
        // Radius number
        final Double radius = diamiter/2;
        // Scanner Decleration
        final Scanner input = new Scanner(System.in);

        // First displayed line
        System.out.println("Input the variarion of pi you want to convert to new pi");
        // Input under the line
        final Double pi_num_var = input.nextDouble();
        // Calculation
        final Double calculation1 = ((radius * radius) * pi_num_var) / 100;
        // Display Result
        System.out.println("New pi is: " + calculation1);
        System.out.println("Thank you for using Seiling Old to new pi converter");
    } 
}
