package Java.JavaInterviewConcepts;

import java.util.Scanner;

public class JavaInstanceOfOperator {
private int i = 0;    
}

// public class InstanceOfExample
{
    public static void main(String[] args)
    {
        InstanceExample a = new InstanceExample();
        if (a instanceof InstanceExample)
        {
            System.out.println("I am an instance of Instance Example");
        }
        else 
        {
            System.out.println("I am not an instance of InstanceExample");
        }
        InstanceExample c = null;
        if (c instanceof InstanceExample)
        {
            System.out.println("I am not an instance of Instance Example");
        }
        else{
            System.out.println("I am not an instance of instance Example");
        }
    }
}
