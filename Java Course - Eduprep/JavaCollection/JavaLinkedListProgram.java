package Java.JavaCollection;

import java.util.LinkedList;

public class JavaLinkedListProgram {
    public static void main(String[] args) {
        LinkedList <String> books = new LinkedList<>();
        System.out.println("Book size" + books.size());

        books.add("C");
        books.add("C++");
        books.add("Java");

        System.out.println("Book size" + books.size());
        System.out.println(books.toString());

        //  c[0] C++ [1] Java[2] existing 
        books.add(1, "Pyhton"); // C[0] python[1] c++[2] Java[3] new
        System.out.println(books.toString());

        //  c[0] python[1] c++[2] Java[3] existing
        System.out.println("Removing C book");
        books.remove("c");

        // Python[0] c++[1] Java[2] New
        System.out.println("Books after removing c = " +books.toString());


    }
}
