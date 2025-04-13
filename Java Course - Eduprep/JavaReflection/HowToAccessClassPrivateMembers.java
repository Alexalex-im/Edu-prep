package Java.JavaReflection;

public class HowToAccessClassPrivateMembers {
    private void privateMethod()
    {
        System.out.println("I am private");
    }
    public void publicMethod() {
        System.out.println("I am public");
    }
}

// public class privateMethod 
{
    public static void main(String[] args)
    {
        // privateMethodTest test1 = new privateMethodTest();

        // test1.publicMethod();
        // test1.privateMethod();

        class c = class.forName("Programmingline.privateMethodTest");

        privateMethodTest test2 = (privateMethodTest)c.newInstance();

        Method method = c.getDeclareMethod("privateMethod", null);

        method.setAccessible(true);
        method.invoke(test2, null);
    }
}
