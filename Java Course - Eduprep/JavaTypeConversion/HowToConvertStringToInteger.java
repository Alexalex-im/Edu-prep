package Java.JavaTypeConversion;

public class HowToConvertStringToInteger {
    public static void main(String[] args) {
        String test = "100";
        // int or Integer

        int test1 = Integer.parseInt(test);
        System.out.println(test1);
        Integer test2 = Integer.valueOf(test);
        System.out.println(test2);
    }
}
