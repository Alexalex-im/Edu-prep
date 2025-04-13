package Java.JavaInterviewProgram;

import java.util.Scanner;

public class ArmstrongNumberOrNot {
    public static void main (String[] args)
    {
        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            int number = scanner.nextInt();

            int cloneNumber = number;
            int totalDigits = 0;
            while (cloneNumber > 0)
            {
                cloneNumber = number/10;
                totalDigits ++;
            }

            cloneNumber = number;
            int totalValue = 0;
            while (cloneNumber > 0)
            {
                int rem = cloneNumber % 10;
                totalValue = totalValue + (int) Math.pow(rem, totalDigits);
                cloneNumber = cloneNumber/10;
            }
            if (totalValue == number)
            {
                System.out.println("Armstrong");
            }
            else
            {
                System.out.println("Not an Armstrong");
            }

        }
    }
}
