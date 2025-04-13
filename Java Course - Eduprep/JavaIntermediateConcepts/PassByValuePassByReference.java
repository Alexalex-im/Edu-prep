package Java.JavaIntermediateConcepts;

public class PassByValuePassByReference {
    private int studentID;
    private String studentName;
    private int mark1;
    private int mark2;
    private int totalMarks;

    public student (int SID, string SName) {
        this.studentID = SID;
        this.studentName = SName;
    }

    public void setMarks (int m1, int m2) {
        this.mark1 = m1;
        this.mark2 = m2;
        this.totalMarks = this.mark1 = this.mark2;
    }
    public int getTotalMarks()
    {
        return this.totalMarks;
    }

    public int getMark1()
    {
        return this.mark1;
    }

    public int getMark2()
    {
        return this.mark2;
    }

    public int getstudentID()
    {
        return this.studentID;
    }

    public String getstudentName()
    {
        return this.studentName;
    }

    public static void main(String[] args) {
        student s1 = new student(1, "Rakesh");
        s1.setMarks(90, 95);
        System.out.println("Student Id :" s1.getstudentID() + 
        "Name :" + s1.getstudentName() + 
        "Mark1:" + s1.getMarks1() + 
        "Mark2" + s1.getMark2() + 
        "Total Marks:" + s1.getTotalMarks());

        Student s2 = new student(1, "Lenin");
        s2.setMarks(80, 85);
        System.out.println("Student Id :" s2.getstudentID() + 
        "Name :" + s2.getstudentName() + 
        "Mark1:" + s2.getMarks1() + 
        "Mark2" + s2.getMark2() + 
        "Total Marks:" + s2.getTotalMarks());


        s1 = s2;    // Pass by reference
        System.out.println("Student Id :" s1.getstudentID() + 
        "Name :" + s1.getstudentName() + 
        "Mark1:" + s1.getMarks1() + 
        "Mark2" + s1.getMark2() + 
        "Total Marks:" + s1.getTotalMarks());

        System.out.println("Student Id :" s2.getstudentID() + 
        "Name :" + s2.getstudentName() + 
        "Mark1:" + s2.getMarks1() + 
        "Mark2" + s2.getMark2() + 
        "Total Marks:" + s2.getTotalMarks());

        s1.setMarks(10, 20);
        System.out.println("Student Id :" s1.getstudentID() + 
        "Name :" + s1.getstudentName() + 
        "Mark1:" + s1.getMarks1() + 
        "Mark2" + s2.getMark2() + 
        "Total Marks:" + s2.getTotalMarks());

        int x = 2;
        int y = 3;
        System.out.println("X = " + x);
        System.out.println("Y = " + y);

        x = y;     // Pass by value
        System.out.println("X = " + x);
        System.out.println("Y =" + y);

        x =1;
        System.out.println("X = " + x);
        System.out.println("Y =" + y);

    }
}
