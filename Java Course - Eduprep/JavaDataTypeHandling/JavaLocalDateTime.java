package Java.JavaDataTypeHandling;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class JavaLocalDateTime {
    public static void main(String[] args) {
        LocalDateTime localDateTime = LocalDateTime.now();
        System.out.println(localDateTime);

        localDateTime = LocalDateTime.minusDays(10);

        DateTimeFormatter format = DateTimeFormatter.ofPattern("YYYY/MM.dd/ hh : mm : ss");

        String formattedDateTime = localDateTime.format(format);

        System.out.println(formattedDateTime);
    }
}
