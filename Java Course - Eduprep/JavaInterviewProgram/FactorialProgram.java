package Java.JavaInterviewProgram;

import java.util.Scanner;

public class FactorialProgram {
    public static void main(String[] args) {
        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            int n = scanner.nextInt();
            int fact = 1;
            for (int i=1; i<=n; i++)
            {
                fact = fact * i;
            }
            System.out.println("Factorial" + fact);
        }
    }
}
