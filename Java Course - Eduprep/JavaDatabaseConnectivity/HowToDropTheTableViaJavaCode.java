package Java.JavaDatabaseConnectivity;

import java.sql.*;

public class HowToDropTheTableViaJavaCode {
    public static void main(String[] args) throws SQLException {
        Connection con = null;
        try {
            // 1.Register the driver
            Class.forName("com.mysql.jdbc.Driver");

            // 2.Connection object creation 
            con = DriverManager.getConnection("jdbc : mysql : // localhost : 3306 /pltes", "root", "Alex");

            // 3. create statement
            Statement stmt = con.createStatement();

            // 4.Execute
            String dropQuery = "drop table test";
            stmt.executeUpdate(dropQuery);
            System.out.println("table dropped successfully");
            
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



