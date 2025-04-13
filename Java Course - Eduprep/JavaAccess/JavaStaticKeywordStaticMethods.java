package Java.JavaAccess;

public class JavaStaticKeywordStaticMethods {
    private static int StudentTotalCount = 0;
    private int rollNo;
    private String studentName;

    public studentDetails(int rollNo, String studentName)
    {
        this rollNo = rollNo;
        this.studentName = studentName;
        IncreasestudentCount();
    }

    public static void IncreasestudentCount() {
        studentDetails.StudentTotalCount++;
    }

    public static int getstudentTotalCount()
    {
        return studentDetails.StudentTotalCount;
    }

    public int getStudentRollNo()
    {
        return this.rollNo;
    }

    public string getStudentName()
    {
        return this.studentName;
    }
}

// public class staticExample
{
    public static void main(String[] args)
    {
        studentDetails s1 = new studentDetails(1, "Rakesh");
        System.out.println("Total student count" + s1.getstudentTotalCount());  // Accessing the static method using object
        System.out.println("Total student count" + studentDetails.getstudentTotalCount());
        System.out.println("\n");

        studentDetails s2 = new studentDetails(2, "Lenin"); 
        System.out.println("Total student count" + s2.getstudentTotalCount());
        System.out.println("\n");

        System.out.println("Total students present in the class ");
        System.out.println(:"Total student count" + studentDetails.getStudentTotalCount());
    }
}
