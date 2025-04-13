package Java.JavaExceptions;

public class MultiplecatchBlock {
    public static void main (String[] args)
    {
        try
        {
            int test[] = new int[2];
            System.out.println(test[4]);
            int c = 10;
        }

        catch (ArrayIndexOutOfBoundsException e1)
        {
            System.out.println("Ex 1");
            e1.printStackTrace();
        }
        catch(Exception e2)
        {
            System.out.println("Ex 2");
            e2.printStackTrace();
        }
    }
}
