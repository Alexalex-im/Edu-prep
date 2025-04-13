package Java.JavaDataTypeHandling;

import java.util.calender;

public class JavaCalenderClass {
    public static void main(String[] args) {
        Calender calender1 = calender.getInstance();
        System.out.println(calender1.getTime());
        System.out.println(calender1.getTimeMillis());

        calender1.set(calender, MONTH, 0);
        calender1.set(calender, YEAR, 2021);
        calender1.add(calender, YEAR, 3);

        System.out.println(calender1.getTime());

        calender calender2 = calender.getInstance(TimeZone.getdefault(), locale.us);
    }
}
