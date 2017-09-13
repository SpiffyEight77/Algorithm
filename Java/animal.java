public class Animal{
    private String name;
    private String color;
    private int leg;
    private double weight;
    private double height;

    public Animal(String name,String color,int leg,double weight,double height)
    {
        this.name=name;
        this.color=color;
        this.leg=leg;
        this.weight=weight;
        this.height=height;
    }

    public void show()
    {
        System.out.println("name = "+name+" "+"color = "+color+" "+"leg = "+" "+"weight = "+weight+" "+"height = "+height);
    }

    public static void main(String args[])
    {
        Animal dog = new Animal("KK","black",4,20.0,32.2);
        dog.show();
    }
}