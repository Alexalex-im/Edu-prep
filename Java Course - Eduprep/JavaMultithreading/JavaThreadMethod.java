package Java.JavaMultithreading;

public class JavaThreadMethod {
    public static int Counter = 0;
    @override 
    public void run()
    {
        for (int i=0; i<10; i++)
        {
            Counter = Counter + 1;
            System.out.println(Counter);
        }
    }
}

// class AlphaThread extends Thread 
{
    Public static char character = 'A';
    @override 
    public void run()
    {
        for (int i=0; i<26; i++)
        {
            System.out.println(character);
            character = (char) (character + 1);
        }
    }
}

// public class ThreadClassMethods
{
    public static void main(String[] args)
    {
        //  create a thread instance
        NumericThread numericThread = numericThread();
        AlphaThread alphaThread = new AlphaThread();

        //  start the thread
        //  During this step the thread moves to new state to Runnable state

        numericThread.start();
        numericThread.start();

        //  Get the state of the thread
        System.out.println("Numeric thread state =" +numericThread.getState());
        System.out.println("Alpha Thread state = " + alphaThread.getPriority());


        //  Print the thread priority
        System.out.println("Numeric thread priority =" +numericThread.getState());
        System.out.println("Alpha Thread priority = " + alphaThread.getPriority());


        //  Get the Thread Name
        System.out.println("Numeric thread Name =" +numericThread.getName());
        System.out.println("Alpha Thread Name = " + alphaThread.getName());



        //  Set the thread Name
        numericThread.setName("Numeric Thread");
        alphaThread.SetName("Alpha Thread");
        System.out.println("Thread Name =" +numericThread.getName());
        System.out.println("Thread Name = " + alphaThread.getName());

        //  Get the current Thread
        System.out.println("Current Thread = " + Thread.currentThread().getName());

        // Get the thread ID
        System.out.println("Numeric Thread ID = " + numericThread.getId());
        System.out.println("Alpha Thread ID = " + alphaThread.getId());

        // Get the state of the Thread 
        System.out.println("numeric Thread state = " + numericThread.getstate());

        System.out.println("Alpha Thread state = " + alphaThread.getstate());

        if (numericThread.isAlive())
        {
            System.out.println("Numeric thread is Alive");
        }
        else 
        {
            System.out.println("Numeric thread is not Alive");
        }
        if (alphaThread.isAlive())
        {
            System.out.println("Alpha thread is Alive");
        }
        else
        {
            System.out.println("Alpha thread is not Alive");
        }

    }
}
