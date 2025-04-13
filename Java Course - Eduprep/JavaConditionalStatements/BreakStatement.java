package Java.JavaConditionalStatements;

// public class BreakStatement {
//     public static void main(String[] args) {
//         for (int i=0; i<10; i++) {
//             System.out.println("Hello");
//         }
//     }
// }

public class BreakStatement{
    public static void main(String[] args) {
        for (int i=0; i<10; i++)
        {
            System.out.println("Hello");
            if (i == 5)
            {
                System.out.println("I am in danger");
                break;
            }
        }
        System.out.println("I got escaped");
    }
}
