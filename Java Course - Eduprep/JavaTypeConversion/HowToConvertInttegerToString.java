package Java.JavaTypeConversion;

public class HowToConvertInttegerToString {
    public static void main(String[] args)
    {
        //  int or Integer
        int test = 100;
        String output1 = String.valueOf(test);
        System.out.println("Output1 :" + output1);

        System.out.println("test :" + test);
        System.out.println("Output :" + (output1 + 200));
        System.out.println("test :" +(test + 200));

        Integer testInteger = 100;
        String output2 = Integer.toString(testInteger);
        System.out.println("Output :" + output2);
    }
}
