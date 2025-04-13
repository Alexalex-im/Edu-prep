package Java.JavaCollection;

import java.util.Stack;

public class StackInJava {
    public static void main(String[] args)
    {
        Stack <String> stack = new Stack<> ();
        stack.push("1");
        stack.push("2");
        stack.push("3");

        System.out.println("Top most element" + stack.peek());
        
        // Return the top most element withou removing it

        System.out.println("Top most element and then remove it" +stack.pop());

        // Return the top most element and then remove it.
        
        System.out.println("After removing top most element" +stack);
    }
}
