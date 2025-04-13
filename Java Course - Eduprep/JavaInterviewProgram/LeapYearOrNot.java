package Java.JavaInterviewProgram;

import java.util.Scanner;

public class LeapYearOrNot {
    public static void main(String[] args) {
        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            int year = scanner.nextInt();
            if(year%4 == 0)
            {
                if (year % 100 == 0)
                {
                    System.out.println("Leap year");
                }
                else{
                    System.out.println("Not a leap year");
                }
            }
            else {
                System.out.println("Leap year");
            }
            else {
                System.out.println("Not a leap year");
            }
        }
        }
        
}
