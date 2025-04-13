package Java.JavaCollection;

import java.util.PriorityQueue;
import java.util.Queue;

public class PriorityQueueInJava {
    public static void main(String[] args) {
        PriorityQueue <String> Queue = new PriorityQueue<> ();

        //  1.Add element at the end
        Queue.add("Rakesh");
        Queue.add("Lenin");
        Queue.add("Chenchu");

        //  2.Displaying the elements
        System.out.println(" ");
        System.out.println(Queue);

        System.out.println("Peek .....");

        //  3.Peek - return the head of the element but it doesn't remove it.

        System.out.println("Poll ..........");

        //  4.Poll returns the head of the elements and removes it.

        System.out.println(Queue.poll());
        System.out.println(Queue);
    }
}
