package Java.JavaExceptions;

public class TryCatchblockInJava {
    public static void main(String[] args)
    {
        try 
        {
            int test[] = new int [2];
            System.out.println(test[4]);
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}
