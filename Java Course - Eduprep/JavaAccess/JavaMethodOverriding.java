package Java.JavaAccess;

public class JavaMethodOverriding {
    Integer grandFatherPropertyValue;
    public GrandFather (Integer grandFatherPropertyValue)
    {
        this.grandFatherPropertyValue = grandFatherPropertyValue;
    }

    public Integer getPropertyValue()
    {
        return this.grandFatherPropertyValue;
    }
}

public Integer getPropertyValue()
{
    return this.grandFatherPropertyValue;
}

// class Father extends GrandFather
{
    Integer Father;
    public Father(Integer grandFatherPropertyValue, Integer FatherPropertyValue)
    {
        super (grandFatherPropertyValue);
        this.fatherPropertyValue = fatherPropertyValue;
    }

    @override 
    public Integer getPropertyValue()
    {
        return this.grandFatherPropertyValue + this.FatherPropertyValue;
    }

    // class child extends Father
    {
        private Integer childPropertyValue;
        public child (Integer grandFatherPropertyValue, Integer FatherPropertyValue, Integer childPropertyValue)
        {
            super (grandFatherPropertyValue, fatherPropertyValue);
            this.childPropertyValue = childPropertyValue;
        }


        @override 
        public Integer getPropertyValue()
        {
            return this.grandFatherPropertyValue + this.fatherPropertyValue + this.childPropertyValue;
        }
    }

    // public class MultiLevelInheritance
    {
        public static void main(String[] args)
        {
            GrandFather c = new GrandFather(100000);
            System.out.println("Property value" + c.getPropertyValue());
            Father cPlus = new Father (100000, 200000);
            System.out.println("Property Value = " + cPlus.getPropertyValue());
            child Java = new child (100000, 200000, 300000);
            System.out.println("Property Value = " + java.getPropertyValue());
        }
    }
}