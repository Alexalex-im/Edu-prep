package Java.JavaSerialization;

// public class shape implements java.io.serializable 
{
    public String size;
    public transient int value;

    public shape (String name, int size, int value)
    {
        this.name = name;
        this.size = size;
        this.value = value;
    }

    public String getName() {
        return name;
    }

    public int getsize()
    {
        return size;
    }

    public int getvalue()
    {
        return value;
    }

}


public static void main(String[] args)
{
    shape s = new shape ("Square" , 2, 4);
    try 
    {
        FileOutputStream fout = new FileOutputStream (" ");
        ObjectOutputStream out = new ObjectOutputStream(fout);
        out.writeObject(s);
        out.close();
        fout.close();

        System.out.println("Object serialized");
    }
    catch (IOException i)
    {
        System.out.println(i);
    }
    finally
    {

    }
}
