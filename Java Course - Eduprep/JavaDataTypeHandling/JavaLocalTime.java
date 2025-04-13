package Java.JavaDataTypeHandling;

import java.time.LocalTime;

public class JavaLocalTime {
    public static void main(String[] args) {
        LocalTime localTime = LocalTime.now();
        System.out.println(localTime);
        System.out.println(localTime.minusHours(1));
        System.out.println(localTime.plusHours(1));
    }
}
