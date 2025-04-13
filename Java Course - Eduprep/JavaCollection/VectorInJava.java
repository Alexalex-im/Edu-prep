package Java.JavaCollection;

import java.util.Vector;

public class VectorInJava {
    public static void main(String[] args) {
        Vector <String> books = new Vector <>();
        System.out.println("Booking size" + books.size());

        books.add("C");
        books.add("C++");
        books.add("Java");

        System.out.println("Books size" + books.size());
        System.out.println(books.toString());

        //  C[0]    C++[1]  Java[2] existing

        books.add(1, "python"); // C[0] python[1] Java[3] new

        System.out.println(books.toString());

        //  C[0] python[1] C++[2] Java[3] Existing 

        System.out.println("Removing C Book");
        books.remove("C");

        //  Python C[0] C++[1] Java[2] New

        System.out.println("Books after removing C = " +books.toString());
    }
}
