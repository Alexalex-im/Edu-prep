package Java.JavaReflection;

//  class Instance
{

} 

public class HowToCreateAClassInstanceUsingReflection {
    public static void main(String[] args) throws classNotFoundException, InstantiationException,IllegalAccessException {
        class c = class.forName("ProgrammingLine Instance Sample");

        InstanceSample test1 = new InstanceSample();
        InstanceSample test2 = (InstanceSample)c();
    }
}
