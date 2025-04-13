package Java.JavaCollection;

import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.TreeSet;

public class JavaTreesetProgram {
    public static void main(String[] args) {
        TreeSet <String> treeset = new Treeset<>();
        treeset.add("Rakesh");
        treeset.add("Lenin");
        treeset.add("Rakesh");
        treeset.add("Raja");
        System.out.println(treeset);

        //  2.contains()
    if (treeSet.contains ("rakesh"))
    {
        System.out.println("rakesh is present in hashset");
    }
    else 
    {
        System.out.println("rakesh is not present in hashset");
    }

    // 3. isempty()
    if (treeset.isEmpty())
    {
        System.out.println("set is empty");
    }
    else 
    {
        System.out.println("Set is not empty");
    }
    System.out.println("");
    System.out.println("Values are displayed using iterable");

    //  4.iterable 
    Iterable <String> iterable = treeset.iterator();
    while (iterator.hashNext())
    {
        String value = iterator.next();
        System.out.println(value);
    }
    System.out.println(" ");

    //  5. Size 
    System.out.println(treeset.size());

    //  6. remove
    System.out.println(treeset.remove("Rakesh"));
    System.out.println(treeset);

    }
}
