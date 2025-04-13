package Java.JavaCollection;

import java.util.iterator;
import java.util.LinkedHashSet;
import java.util.LinkedhashSet;

public class LinkedHashSetProgramInJava {
    public static void main(String[] args) {
        LinkedHashSet <String> LinkedHashSet = new LinkedHashSet<>();

        LinkedHashSet.add("Rakesh");
        LinkedHashSet.add("Lenin");
        LinkedHashSet.add("Rakesh");
        LinkedHashSet.add("Raja");

        System.out.println(LinkedHashSet);

        // 2. contains()
        if (LinkedHashSet.contains("rakesh"))
        {
            System.out.println("rakesh is present in hashset");
        }
        else 
        {
            System.out.println("rakesh is not present in hashset");
        }

        //  3. isEmpty()
        if (LinkedHashSet.isEmpty())
        {
            System.out.println("Set is empty");
        }
        else 
        {
            System.out.println("Set is not empty");
        }
        System.out.println("");
        System.out.println("Values are displayed using iterator");

        //  4.iterator
        Iterable <String> iterable = hashset.iterator();
            while (iterator.hashNext())
                {
                    String value = iterator.next();
                    System.out.println(value);
                }
                System.out.println(" ");
            }
}
