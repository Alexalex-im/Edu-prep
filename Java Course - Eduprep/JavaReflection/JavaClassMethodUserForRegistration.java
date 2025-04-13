package Java.JavaReflection;

import java.lang.reflect.Method;

public class JavaClassMethodUserForRegistration {
    public classUsesSample()
    {

    }

    // class classUserSample2
    {
        public void dummyMethod()
        {
            System.out.println("Hello");
        }
    }

    // public class classUser
    {
        public static void main(String[] args)
        {
            classUseSample test = new classUsesSample();
            System.out.println(test.getclass());
            class testclass = test.getClass();
            System.out.println(testclass.isInstance(test));
            Syste.out.println(testClass.isArray());

            Method[] methods = testclass.getMethod();
            System.out.println(methods.length);

            for (Method method : methods)
            {
                System.out.println(method.getName());
            }

            constructor[] constructors = test class.getconstructors();
            System.out.println("Constructor total : " constructors.length);
        }
    }
}
