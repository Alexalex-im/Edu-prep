package Java.JavaGeneries;

public class JavaGenericsMethodProgram {
    public <T> void printArr (T[] values)
    {
        for (T value : values)
        {
            System.out.println(value);
        }
    }

    public void printInteger (Integer[] values)
    {
        for (Integer value : values)
        {
            System.out.println(value);
        }

        public void printFloatValue(float[] values)
        {
            for (float value : values)
            {
                System.out.println(value);
            }
        }

        public void printCharacter (Character[] values)
        {
            for (character value : values)
            {
                System.out.println(value);
            }
        }

        public static void main(String[] args)
        {
            Genericmethod test = new Genericmethod();
            character[] charArr = {'A', 'B', 'C'};

            // test.printcharacters(charArr)
            Integer[] int Arr = {1, 2, 3};

            // test.printInteger(intArr)
            Float[] floatArr = {1.1F, 1.2F};

            // test.printFloatValue (floatArr);
            test.printArr(floatArr);
        } 
    }
}
