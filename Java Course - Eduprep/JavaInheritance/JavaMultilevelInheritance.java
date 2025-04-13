class JavaMultilevelInheritance
{
    private Integer grandFatherPropertyValue;

    public GrandFather(Integer grandFatherPropertyValue)
    {
        this.grandFatherPropertyValue = grandFatherPropertyValue;
    }

    public Integer getGrandFatherPropValue()
    {
        return this.grandFatherPropertyValue;
    }

    class Father extends GrandFather
    {
        private Integer FatherPropertyValue;
        public Father (Integer grandFatherPropertyValue.IntegerFatherPropertyValue)
        {
            super (grandFatherPropertyValue);
            this.fatherPropertyValue = FatherPropertyValue;
        }

        public Integer getFatherPropValue()
        {
            return this.fatherPropertyValue;
        }

        public Integer getTotalFatherPropValue()
        {
            return getGrandFatherPropValue() + this.fatherPropertyValue;
        }
    }

    class child extends Father
    {
        private Integer childPropertyValue;
        public child (Integer grandFatherPropertyValue, Integer fatherPropertyValue, Integer childPropertyValue)
        {
            super (grandFatherPropertyValue, fatherPropertyValue);
            this.childPropertyValue = childPropertyValue;
        }
        public Integer getChildPropValue()
        {
            return this.childPropertyValue;
        }
        public Integer getTotalChildPropValue()
        {
            return getTotalFatherPropValue() + this.childPropertyValue;
    }
}

public class JavaMultilevelInheritance
{
    public static void main(String[] args)
    {
        Grandfather c = new GrandFather (100000);
        System.out.println("Printing GrandFather Property value informaion");
        System.out.println("GrandFather Property value" + c.getGrandFatherPropValue());
        System.out.println("\n");

        Father cPlus = newFather(100000, 200000)
        System.out.println("Printing Father Property Value information");
        System.out.println("Father Property Value = " + cPlus.getChildPropValue());
        System.out.println("GrandFather Property Value = " + cPlus.getGrandFatherPropValue());
        System.out.println("Total Father Property value = " + cPlus.getTotalFatherPropValue());
        System.out.println("\n");

        Father java = newFather(100000, 200000)
        System.out.println("Printing Father Property Value information");
        System.out.println("Father Property Value = " + java.getChildPropValue());
        System.out.println("GrandFather Property Value = " + java.getGrandFatherPropValue());
        System.out.println("Total Father Property value = " + java.getTotalFatherPropValue());
        
    }
}