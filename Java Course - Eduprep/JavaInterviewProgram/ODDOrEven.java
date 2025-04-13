package Java.JavaInterviewProgram;

import java.util.Scanner;

public class ODDOrEven {
    public static void main(String[] args) {
        while (true)
        {
            Scanner sc = new Scanner (System.in);
            int number = sc.nextInt();

            int rem = number % 2;
            if (rem == 0)
            {
                System.out.println("Even");
            } else if (rem == 1)
            {
                System.out.println("Odd");
            }
        }
    }
}
