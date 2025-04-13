package Java.JavaExceptions;

public class FinallyBlockInJava {
    public static void main(String[] args) {
        try 
        {
            int a = 1/0;
        }
        catch (Exception e)
        {
            System.out.println("Ex");
            e.printStackTrace();
        }
        finally 
        {
            System.out.println("Finally block");
        }
    }
}
