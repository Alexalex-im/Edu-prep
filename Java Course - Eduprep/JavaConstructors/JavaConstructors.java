package Java.JavaConstructors;

public class JavaConstructors {
        int test;
        public ConstructorEx()
        {
            this.test=0;
        }
        public ConstructorEx(int test)
        {
            this.test = test;
        }

        public static void main(String[] args)
        {
            ConstructorEx obj1 = new ConstructorEx();
            ConstructorEx obj2 = new ConstructorEx(10);

            System.out.println("Obj1" + obj1.test);
            System.out.println("Obj1" + obj2.test);

        }
    }

