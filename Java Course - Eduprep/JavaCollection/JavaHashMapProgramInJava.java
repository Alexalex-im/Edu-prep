package Java.JavaCollection;

import java.util.HashMap;

public class JavaHashMapProgramInJava {
    public static void main(String[] args) {
        HashMap <Integer, String> hashMap = new HashMap<>();

        // Insert Key and values

        hashMap.put(1, "Rakesh");
        hashMap.put(2, "Raja");
        hashMap.put(3, "Lenin");
        hashMap.put(4, "Chenchu");

        System.out.println(hashMap);

        //  get the values
        System.out.println("getting the values at key 2");
        System.out.println(hashMap.get(2));

        // remove the value at key 2
        System.out.println("removing the value of key 2");
        hashMap.remove(2);

        Iterator iterator = hashMap.entrySet().iterator();
        while (iterator.hashNext())
        {
            Map.Entry <Integer, String> entry = (Map.Entry <Integer, String> ) iterator.next();

            Integer key = entry.getValue();
            String value = entry.getValue();
            System.out.println("Key" + key + "Value" + value);
         }
        

    }    
}
