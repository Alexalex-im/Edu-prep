package Java.JavaLoopControlStatements;

public class WhileLoop {
    public static void main(String[] args) {
        int tableNumber = 3;
        int tableIndex = 1;
        while (tableIndex <= 10)
        {
            System.out.println(tableNumber + " * " + tableIndex+ " = " + (tableNumber * tableIndex));
            tableIndex++;
        }
    }
}
