package Java.JavaDatabaseConnectivity;

import java.sql.*;
import java.sql.DriverManager;
import java.sql.SQLException;

public class JavaDataBaseConnectionStepsSampleProgram {
    public static void main(String[] args) throws SQLException{
        Connection con = null;
        try {
            // 1.Register the driver
            Class.forName("com.mysql.jdbc.Driver");

            // 2.Connection object creation 
            con = DriverManager.getConnection("jdbc : mysql : // localhost : 3306 /pltest", "root", "Alex");

            // 3.Create Statement
            Statement stmt = con.createstatement();
            String query = "Create database pites";

            // 4.Execute Query
            stmt.executeUpdate(query);
        } 
        catch(Exception e)
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
