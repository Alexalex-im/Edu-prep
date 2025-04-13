package Java.JavaInterviewProgram;

import java.util.Scanner;

public class ConvertInchToCms {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter inches");
        double inches = scanner.nextDouble();
        double cms = inches * 2.54;
        System.out.println("Inches" + inches + "cms" + cms);
    }
}
