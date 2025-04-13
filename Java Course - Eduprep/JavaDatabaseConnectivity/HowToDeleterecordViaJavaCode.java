package Java.JavaDatabaseConnectivity;

import java.sql.*;

public class HowToDeleterecordViaJavaCode {
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
            String deleteRecQuery = "delete from city where id = 2";
            stmt.executeUpdate(deleteRecQuery);
            System.out.println("Deleted Records successfully");
            
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




