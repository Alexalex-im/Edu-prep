package Java.JavaLoopControlStatements;

public class DoWhileLoop {
    public static void main(String[] args) {
        int tableNumber = 8;
        int tableIndex = 1;

        do {
            System.out.println(tableNumber + " * " + tableIndex + " = " + (tableNumber * tableIndex));
            tableIndex++;
        } while (tableIndex <= 10);
        
    }
}
