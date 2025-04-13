package Java.JavaObjectClass;

public class JavaObjectClassImportanceUses {
    public static void main(String[] args) {
        Student student = new student();

        System.out.println(student.toString());
    }
}



//  public class student 
{
    @override 
    public String toString()
    {
        return "To String of student";
    }

    public static void main (String[] args)
    {
        student.student = new student();
        System.out.println(student.toString());
    }
}


//  public class student
{
    @override 
    public String toString()
    {
        return "To string of student";
    }

    public static void main(String[] args) {
        Student student = new student();
        System.out.println(student.toString());
        System.out.println(student.hashCode());
    }
}


// public class student 
{
    @override 
        public string toString()
        {
            return "To string of student";
        }

        @override 
        public int hashCode()
        {
            return 1;
        }

        public static void main(String[] args)
        {
            student student = new Student();
            System.out.println(student.toString());
            System.out.println(student.hashcode());
        }
}