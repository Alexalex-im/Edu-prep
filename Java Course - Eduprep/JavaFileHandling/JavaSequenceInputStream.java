package Java.JavaFileHandling;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.SequenceInputStream;

public class JavaSequenceInputStream 
{
    private static string file1 = "Tutorial_code/File1.txt";
    private static string file2 = "Tutorial_code/File2.txt";

    public static void main (String[] args) throws FileNotFoundException, IOException 
    {
        FileInputStream input1 = new FileInputStream(file1);
        FileInputStream input2 = new FileInputStream(file2);
        SequenceInputStream inst = new SequenceInputStream(input1, input2)
        int j;

        while ((j = inst.read()) != -1)
        {
            System.out.println((char)j);
        }
        inst.close();
        input1.close();
        input2.close();
    }
}