package Java.JavaInterviewConcepts;

import java.util.Scanner;

// public class JavaFinalKeyword {
// public class Dept
    public final String dept;
    public Dept (String dept)
    {
        this.dept = dept;
    }
    public final void showDept()
    {
        System.out.println("Welcome to" +this.dept + "department");
    }
class CSEDept extends Dept 
{
    public CSEDept(String dept)
    {
        super (dept);
    }

    public class FinalExample
    {
        public static void main(String[] args) {
            CSEDept c = new CSEDept("CSE");
            c.ShowDept();
        }
    }
}


// @override 
// public void showDept()
// {
//
// }


