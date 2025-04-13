package Java.JavaConditionalStatements;

import java.util.Scanner;

public class Ifelse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter age");
        int age = scanner.nextInt();

        if (age == 18) {
            System.out.println("Your are a major");
        }
        else {
            System.out.println("You are a miner");
        }
        System.out.println("Bye");
    }
}
