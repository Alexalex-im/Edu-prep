package Java.JavaConditionalStatements;

public class SwitchStatement {
    public static void main(String[] args) {
        int a = 0;
        switch (a)
        {
            case 0:
                System.out.println("I am 0");
                break;
            case 1:
                System.out.println("I am 1");
                break;
            case 2:
                System.out.println(" I am 2");
                break;
            default:
                System.out.println("I am unknown");
                break;
        }
        System.out.println("I am at end of the switch");
    }
}
