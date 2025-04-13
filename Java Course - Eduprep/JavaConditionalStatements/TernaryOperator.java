package Java.JavaConditionalStatements;

import java.util.Scanner;

public class TernaryOperator {
    public static void main (String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter age");
        int age = scanner.nextInt();
        
        boolean major = age=18? true : false;
        System.out.println(major);
    }
}
