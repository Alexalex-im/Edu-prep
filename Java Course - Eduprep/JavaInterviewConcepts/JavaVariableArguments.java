package Java.JavaInterviewConcepts;

public class JavaVariableArguments {
    public static void main(String[] args) {
        int total = 0;
        for (int i=0; i<Variables.length; i++)
        {
            total = total + Variables[i];
        }
        System.out.println("Total = " + total);
    }
}
// public class MethodUsingVariableArgs
{
    public static void main(String[] args)
    {
        Add a = new Add();
        a.PerformAddition (1,2);
        a.PerformAddition (1,2,3);
        a.PerformAddition (1,2,3,4);

    }
}
