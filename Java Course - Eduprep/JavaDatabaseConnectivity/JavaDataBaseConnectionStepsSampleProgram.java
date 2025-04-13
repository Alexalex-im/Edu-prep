package Java.JavaDatabaseConnectivity;

import java.sql.*;

public class JavaDataBaseConnectionStepsSampleProgram {
    public static void main(String[] args) {
        Connection con = null;
        try {
            // 1.Register the driver
            Class.forName("com.mysql.jdbc.Driver");

            // 2.Connection object creation 
            Connection con = DriverManager.getConnection("jdbc : mysql : // localhost : 3306 /world", "root", "Alex");

            // 3. Statement Object Creation
            Statement stmt = con.createStatement();

            // 4.Execute Query
            ResultSet rs = stmt.executeQuery("select * from city");

            while (rs.next())
            {
                int id = rs.getInt("ID");

                String name = rs.getString("Name");
                System.out.println("ID" + id + "Name" + name);
            }
        } catch(Exception e)
        {
            System.out.println(e);
        } finally {
            // 5. Close the connection
            if (con != null)
            {
                con.close();
            }
        }
    }
}
