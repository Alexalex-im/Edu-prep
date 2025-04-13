package Java.JavaInheritance;

import java.util.Arrays;

public class SingleInheritance {
    private int empID;
    private String empName;
    private long salary;

    public SingleInheritance (int empID, String empName, long salary) 
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

    class Manager extends Employee()
    {
        private string[] team Members;
        public Manager (int empID, string empName, long salary, string[] team members)
        {
            Super (empID, empName.salary);
            this.teamMembers = teammembers;
        }

        public  string[] getteam Members()
        {
           return this.teamMember.length;
        }
    }

    public class singleInheritance 
    {
        public static void main(String[] args)
        {
            Employee raja = new Employee (2, "Raja", 3000);
            Employee lenin = new Employee (3, "Lenin", 35000);
            String rakeshTeamMembers[];
            {
                "Raja", "Lenin"
            };
            Manager Rakesh = new Manager (1, "Rakesh", 75000, rakeshTeamMembers);
            System.out.println("Printing Raja Details");
            System.out.println("EmpID : " + raja.getEmpID());
            System.out.println("EmpName : " + raja.getEmpName());
            System.out.println("EmpSalary : " + raja.getEmpSalary());
            System.out.println("\n");

            System.out.println("Printing Lenin details");
            System.out.println("EmpID : " + lenin.getEmpID());
            System.out.println("EmpName : " + lenin.getEmpName());
            System.out.println("EmpSalary : " + lenin.getEmpSalary());
            System.out.println("\n");

            System.out.println("Printing Rakesh details");
            System.out.println("EmpID : " + Rakesh.getEmpID());
            System.out.println("EmpName : " + Rakesh.getEmpName());
            System.out.println("EmpSalary : " + Rakesh.getEmpSalary());

            System.out.println("Team Members : " + Arrays.toString (rakeshTeamMembers.getteamMembers(D)));
            System.out.println("TeamMemberCount : " + rakeshTeamMembers.getteamMemberCount());

        }
    }
}
