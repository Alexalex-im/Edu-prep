package Java.JavaInterviewProgram;

import java.util.Scanner;

public class PrimeOrNot {
    public static void main(String[] args) {
        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            int number = scanner.nextInt();
            if (number < 0)
            {
                System.out.println("Numbers Must be Positive");
            }
            else {
                Boolean flag = Boolean.TRUE;
                for (int i=2; i<number; i++)
                {
                    if (number % 1 == 0)
                    {
                        flag = Boolean.FALSE;
                        break;
                    }
                }
                if (flag == Boolean.TRUE)
                {
                    System.out.println("Prime NUmber");
                }
                else
                {
                    System.out.println("Not a prime Number");
                }

            }
        }
    }
}
