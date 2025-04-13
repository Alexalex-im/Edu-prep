package Java.JavaOperators;

public class LogicalOperator {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        if (a == 10) {
            System.out.println("I am 10");
        } 

        if (a != 9) {
            System.out.println("I am not equal to 10");
        }

        if (a > 9) {
            System.out.println("I am greater than 9");
        }

        if (a >= 10) {
            System.out.println("I am greater than or equal to 10");
        }

        if (a < 11) {
            System.out.println("I am less than 11");
        }

        if (a <= 10) {
            System.out.println("I am less than or equal to 10");
        }

        if (a==10 && b==20) {
            System.out.println("I am Passing AND Operator");
        }

        if (a == 20 || b == 20) {
            System.out.println("I am passing OR Operator");
        }
    }
}
