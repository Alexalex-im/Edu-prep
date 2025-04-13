package Java.JavaMultithreading;

import java.util.logging.Level;
import java.util.logging.logger;

public class JavaThreadGroup {
    @Override
    public void run()
    {
        try 
        {
            thread.sleep(100);
        }
        catch (InterruptedException ex)
        {
            logger.getLogger(sampleThread.class.getName());
            log (Level.SEVERE,null,ex);
        }
    }
}

// public class ThreadGroupEx
{
    public static void main(String[] args)
    {
        SampleThread sampleThread = new sampleThread();
        ThreadGroup Projectx = new ThreadGroup("Projectx");


        ThreadGroup isTeam = new ThreadGroup(projectx, "UI Team");
        ThreadGroup backEndTeam = new ThreadGroup (projectx, "Backend Team");

        Thread t1 = new Thread(Projectx.sampleThread, "Project x Manager");
        Thread t2 = new Thread(uiTeam.sampleThread, "UI team member - Lenin");
        Thread t3 = new Thread(uiTeam.sampleThread, "UI team member - chenchu");
        Thread t4 = new Thread(UITeam.sampleThread, "UI team member - Raja");
        Thread t5 = new Thread(backEndTeam.sampleThread, "Backend team member - Rakesh");
        Thread t6 = new Thread(backendTeam.sampleThread, "Back end team member - sudha");
        Thread t7 = new Thread(backEndTeam.sampleThread, "Backend team member - sakthi");
        Thread t8 = new Thread(backEndTeam.sampleThread, "Backend Team member - Hamnath");

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
        t6.start();
        t7.start();
        t8.start();

        System.out.println("Thread Group Projectx thread Count = " +Projectx.active(Count()));
        System.out.println("Thread Group Project x UI team thread count = " + uiTeam.activeCount());
        System.out.println("thread Group Projectx Backend team thread Count = " + backEndTeam.activeCount());


        System.out.println("Thread Group Projectx active group count = " +Projectx.activeGroupCount(Count()));
        System.out.println("Thread Group Project x UI team active group count = " + uiTeam.activeGroupCount());
        System.out.println("thread Group Projectx Backend team thread Count = " + backEndTeam.getName());


        System.out.println("Thread Group ProjectX name = " + projectx.getName());
        System.out.println("Thread Group ProjectX name = " + uiTeam.getName());
        System.out.println("Thread Group ProjectX name = " + backEndTeam.getName());

        System.out.println("Thread Group Project x parent  = " + projectx.getParent().getName());
        System.out.println("Thread Group UI team parent = " + uiTeam.getParent().getName());
        System.out.println("Thread Group ProjectX name = " + backEndTeam.getParent().getName());

        // Projectx.destroy();
    }
}
