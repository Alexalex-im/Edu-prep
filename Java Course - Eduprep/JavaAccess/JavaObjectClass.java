package Java.JavaAccess;

import java.util.Arrays;

public class JavaObjectClass {
    private int empID;
    private String empName;
    private long salary;

    public Employee(int empID, String empName, long salary)
    {
        this.empID = empID;
        this.empName = empName;
        this.salary = salary;
    }

    public int getEmpID()
    {
        return this.empID;
    }

    public String getEmpName()
    {
        return this.empName;
    }

    public long getSalary()
    {
        return this.salary;
    }

    @override 
    public String toString()
    {
        return "Emp ID : " + empID + "Emp Name = " + empName + "Salary = " + salary;
    }

    @override 
    public boolean equals (object obj)
    {
        Employee employee = (employee) obj; // Type casting object to Employee
        return this.empID == employee.empID;
    }

    @override 
    public int hashcode()
    {
        int hash = 8;
        hash = 13 * hash + this.empID;
        return hash;
    }
}
//  class Manager extends Employee 
{
    private String[] TeamMembers;
    Public Manager (int empID, String empName, long salary, String[] TeamMembers)
    {
        super (empID, empName, salary);
        this.TeamMembers = teamMembers;
    }

    public String[] getTeamMembers()
    {
        return this.TeamMembers;
    }

    public int getTeamMembersCount()
    {
        return this.TeamMembers.length;
    }

    @override 
    public string toString()
    {
        return "EMP ID = " +getEmpID() + "EMP NAME =" +getEmpName() + "SALARY = " + getSalary() + "MANAGING MEMBERS = " + Arrays.asList(TeamMembers);
    }

    @override 
    public boolean equals (object obj)
    {
        Manager manager = (Manager) obj;
        return getEMPID() == manager.getEMPID();
    }

    @override 
    public int hashcode()
    {
        int hash = 7;
        hash = 13 * hash + Arrays.deepHashCode( this.TeamMembers );
        return hash;
    }
}

// public class singleInheritance
{
    public static void main(String[] args)
    {
        Employee raja = new Employee(2, "Raja", 30000);
        Employee Lenin = new Employee (3, "Lenin", 35000);
        String rakeshTeamMembers[]
        {
            "Raja", "Lenin"
        };

        Manager rakesh = new Manager (1, "Rakesh", 75000, rakeshTeamMembers);
        Object a = new object();
        System.out.println("Printing Raja details");
        System.out.println(raja.tostring());
        System.out.println("\n");
        System.out.println(Lenin.toString());
        System.out.println("\n");
        System.out.println(rakesh.toString());
        System.out.println("\n");
        if (raja.equals(Lenin))
        {
            System.out.println("Raja and lenin are equal");
        }
        else
        {
            System.out.println("Raja and Lenin are not equal");
        }
    }
}