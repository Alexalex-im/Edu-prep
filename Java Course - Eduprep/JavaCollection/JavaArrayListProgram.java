package Java.JavaCollection;

import java.util.ArrayList;

public class JavaArrayListProgram {
    public static void main(String[] args) {
        ArrayList<String> books = new ArrayList<>();
        books.add("C");
        books.add("C++");
        books.add("Java");

        System.out.println("books" + books.toString());
        books.add(1, "python");

        System.out.println("books" + books.toString());
        books.remove("c");

        System.out.println("books" + books.toString());
    }
}
