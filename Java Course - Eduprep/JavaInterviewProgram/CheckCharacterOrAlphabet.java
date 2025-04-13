package Java.JavaInterviewProgram;

import java.util.Scanner;

public class CheckCharacterOrAlphabet {
    public static void main(String[] args) {
        while (true)
        {
            Scanner scanner = new Scanner(System.in);
            String test = scanner.nextLine();
            
            for (int i=0; i<test.length(); i++)
            {
                char c = test.charAt(i);
                if ( (c >= 65 && c <= 70) || (c > 97 && c<= 122) )
                {
                    System.out.println(c + "It is an alphabet");
                }
                else
                {
                    System.out.println(c + "It is not an alphabet");
                }
            }
        }
    }
}
