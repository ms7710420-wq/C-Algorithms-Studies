import java.util.Scanner;

public class SampleHelllo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 2 numbers");

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = a + b;

        System.out.println("Result: " + c);

        // ALWAYS add this at the end to fix the warning
        scanner.close(); 

        // New Logic: Compare the two numbers
if (a > b) {
    System.out.println(a + " is greater than " + b);
} else if (b > a) {
    System.out.println(b + " is greater than " + a);
} else {
    System.out.println("Both numbers are equal.");
}
    }
}



