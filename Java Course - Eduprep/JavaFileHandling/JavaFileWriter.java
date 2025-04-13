
import java.io.FileWriter;
import java.io.IOException;

public class JavaFileWriter {
    private static String file = "Java-tutorial-code/File.txt";

    public static void main(String[] args) throws IOException
    {
        FileWriter fw = new FileWriter(file);
        fw.write("Rakesh");
        fw.close();
        System.out.println("Task Completed");
    }
}
