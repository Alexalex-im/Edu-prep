package Java.JavaDataTypeHandling;

import java.time.LocalDate;

public class JavaLocalDate {
    public static void main(String[] args) {
        LocalDate localDate = LocalDate.now();
        System.out.println(localDate);
    }
}

// public class LocalDateTest 
{
    LocalDate localDate = LocalDate.now();
    System.out.println(localDate);
    System.out.println(LocalDate.isLeapYear());

    LocalDate yest = localDate.minusDays(1);
    System.out.println(yest);

    LocalDate tomo = localDate.plusDays(1);
    System.put.println(tomo);
}