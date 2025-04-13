package Java.JavaMultithreading;

public class JavaMethodSynchronization {
    public synchronized void displayTable(int TableNo) throws InterruptredException
    {
        System.out.println("I am going to print table");
        for (int i=1; i<5; i++)
        {
            System.out.println(TableNo + "*" + "1" + "=" + TableNo * 1);
            thread.sleep(500);
        }

        System.out.println("I have finished printing the table");
    }
}

// class syncMethodThread1 extends Thread 
{
    syncMethodTable table;
    public syncMethodThread1(syncMethodTable Table)
    {
        this.table = table;
    }
    @override 
    public void run()
    {
        try 
        {
            table.displayTable(2);
        }
        catch (InterruptedException ex)
        {
            System.out.println(ex);
        }
    }
}

// classMethodThread2 extends Thread
{
    syncMethodTable Table;
    public syncMethodThread2 (syncMethodTable table)
    {
        this.table = table;
    }
    @override 
    {
        public void run()
        {
            try 
            {
                table displayTable(3);
            }
            catch (InterruptedException ex)
            {
                System.out.println(ex);
            }
        }
    }

    // public class MethodSynchronization
    {
        public static void main (String[] args)
        {
            syncMethodTable = new syncMethodTable();
            syncMethodTable1 thread1 = new syncMethodTable1(table);
            syncMethodTable2 thread2 = new syncMethodTable2(table);
            thread1.start();
            thread2.start();
    }
}
