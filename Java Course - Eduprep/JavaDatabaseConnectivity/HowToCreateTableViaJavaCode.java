package Java.JavaDatabaseConnectivity;

import java.sql.*;

public class HowToCreateTableViaJavaCode {
    public static void main(String[] args) throws SQLException {
        Connection con = null;
        try {
            // 1.Register the driver
            Class.forName("com.mysql.jdbc.Driver");

            // 2.Connection object creation 
            Connection con = DriverManager.getConnection("jdbc : mysql : // localhost : 3306 /pltest", "root", "Alex");

            // 3. Statement Object Creation
            Statement stmt = con.createStatement();

            // 4.Execute Query
            String CreateSQL = "Create table city (id Integer Not Null, Name varChar(255))";
            stmt.executeUpdate(CreateSQL);
            System.out.println("table created successfully");

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

