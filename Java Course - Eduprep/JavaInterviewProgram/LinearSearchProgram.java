package Java.JavaInterviewProgram;

import java.util.Scanner;

public class LinearSearchProgram {
    public static void main(String[] args) {
        int corpus[] = 
        {
            10, 20, 30, 40, 35, 45, 50
        };

        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            int key = scanner.nextInt();
            int keyPos = -1;
            for (int i=0; i<corpus.length; i++)
            {
                if (corpus[i] == key)
                {
                    keyPos = i;
                    break;
                }
            }
            System.out.println("Key Pos" + keyPos);
        }
    }
}
