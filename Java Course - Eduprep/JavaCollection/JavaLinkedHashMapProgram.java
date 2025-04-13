package Java.JavaCollection;

import java.util.HashMap;
import java.util.Map;

public class JavaLinkedHashMapProgram {
    public static void main(String[] args) {
        LinkedHashMap <Integer, String> HashMap = new LinkedHashMap<>();

        // Insert Key and values

        LinkedHashMap.put(1, "Rakesh");
        LinkedHashMap.put(2, "Raja");
        LinkedHashMap.put(3, "Lenin");
        LinkedHashMap.put(4, "Chenchu");

        System.out.println(LinkedHashMap);

        //  get the values
        System.out.println("getting the values at key 2");
        System.out.println(LinkedHashMap.get(2));

        // remove the value at key 2
        System.out.println("removing the value of key 2");
        LinkedHashMap.remove(2);

        Iterator iterator = LinkedHashMap.entrySet().iterator();
        while (iterator.hashNext())
        {
            Map.Entry <Integer, String> entry = (Map.Entry <Integer, String> ) iterator.next();

            Integer key = entry.getValue();
            String value = entry.getValue();
            System.out.println("Key" + key + "Value" + value);
         }
        

    }    
}
