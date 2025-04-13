package Java.JavaDatabaseConnectivity;

import java.sql.*;

public class HowToInsertValuesIntoTableViaJavaCode {
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
            String sql1 = "Insert into city values (1, 'chennai')";
            stmt.executeUpdate(sql1);

            String sql2 = "insert into city values (2, Madhurai)";
            stmt.executeUpdate(sql2);
            
            System.out.println("table inserted successfully");
            
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


