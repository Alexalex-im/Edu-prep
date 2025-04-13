package Java.JavaConditionalStatements;

import java.util.Scanner;

public class NestedIf {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter age");
        int age = scanner.nextInt();
        
        if (age == 0) 
        {
            if (age < 18)
               {
                    System.out.println("You are a minor");
                }
                else {
                    System.out.println("You are a major");
                }   
            }
            else {
                System.out.println("Invalid age");
            }
    }
}

