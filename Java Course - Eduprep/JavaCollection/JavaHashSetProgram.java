package Java.JavaCollection;

import java.util.HashSet;
import java.util.iterator;

public class JavaHashSetProgram {
    HashSet <String> hashset = new HashSet<>();
    hashset.add("Lenin");
    hashset.add("Rakesh");
    hashset.add("Raja");
    hashset.add("Rakesh");
    System.out.println(hashSet);

    //  2.contains()
    if (hashSet.contains ("rakesh"))
    {
        System.out.println("rakesh is present in hashset");
    }
    else 
    {
        System.out.println("rakesh is not present in hashset");
    }

    // 3. isempty()
    if (hashset.isEmpty())
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
    Iterable <String> iterable = hashset.iterator();
    while (iterator.hashNext())
    {
        String value = iterator.next();
        System.out.println(value);
    }
    System.out.println(" ");

    //  5. Size 
    System.out.println(hashset.size());

    //  6. remove
    System.out.println(hashset.remove("Rakesh"));
    System.out.println(hashset);


}
