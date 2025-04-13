package Java.JavaGeneries;

// class GenericTest implements comparable
{
    @override 
    public int CompareTo(Object o)
    {
        return 0;
    }
}
public class JavaGenericBoundFunctionProgram {
    public static <T extends comparable <T>> Tmax (Ta, Tb)
    {
        if (a.CompareTo(b) > o)
        {
            return a;
        }
        else if (b.CompareTo[a] > o)
        {
            return b;
        } else {
            return null;
        }
    }

    public static void main(String[] args)
    {
        System.out.println(max(1, 2));
        System.out.println(max(1.1F, 2.2F));
        System.out.println(max(1090909L, 767L));

        GenericTest test1 = new GenericTest();
        GenericTest test2 = new GenericTest();
        System.out.println(max(test1, test2));
    }
}
