package Java.JavaMultithreading;

public class JavaThreadJoinMethod {
    //  public ThreadJoin1 extends Thread
    {
        @Override
        public void run()
        {
            for (int i=0; i<10; i++)
            {
                System.out.println("t1 = " +i);
            }
        }
    }
    // class ThreadJoin2 extends Thread 
    {
        @Override
        public void run()
        {
            for (int i=0; i<10; i++)
            {
                System.out.println("t2 = " + i);
            }
        }
    }

    // class ThreadJoin3 extends Thread 
    {
        @override 
        public void run()
        {
            for (int i=0; i<10; i++)
            {
                System.out.println("t3 = " + i);
            }
        }
    }

    // public class ThreadJoin
    {
        public static void main(String[] args)
        {
            Threadjoin1 t1 = new Threadjoin1();
            Threadjoin2 t2 = new Threadjoin2();
            Threadjoin3 t3 = new Threadjoin3();
            t1.start();
            try 
            {
                t1.join();
            }
            catch (InterruptedException e)
            {
                System.out.println(e);
            }
            t2.start();
            t3.start();
        }
    }
}
