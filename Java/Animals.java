abstract class Animals{
    protected String name;
    protected String color;
    protected int leg;
    protected double weight;

    public Animals(String name,String color,int leg,double weight)
    {
        this.name = name;
        this.color = color;
        this.leg = leg;
        this.weight = weight;
    }
    
    public Animals(String name,String color,double weight)
    {
        this.name = name;
        this.color = color;
        this.weight = weight;
    }

    public Animals()
    {}

    public abstract void eat();
    public abstract void cry();
    public abstract void show();
}

class Cat extends Animals{
    public Cat(String name,String color,int leg,double weight)
    {
        super(name,color,leg,weight);
    }

    public void cry(){
        System.out.println("miao miao miao!");
    }

    public void eat(){
        System.out.println("Cat eats fishes");
    }

    public void show(){}
}

class Dog extends Animals{
    public Dog(String name,String color,int leg,double weight)
    {
        super(name,color,leg,weight);
    }

    public void cry(){
        System.out.println("wang wang wang!");
    }

    public void eat(){
        System.out.println("Dog eats dogfood");
    }

    public void show(){}
}

class Duck extends Animals{
    public Duck(String name,String color,int leg,double weight)
    {
        super(name,color,leg,weight);
    }

    public void cry(){
        System.out.println("gua gua gua!");
    }

    public void eat(){
        System.out.println("Duck eats bugs");
    }

    public void show(){}
}

class Fish extends Animals{
    public Fish(String name,String color,double weight)
    {
        super(name,color,weight);
    }

    public void cry(){
        System.out.println("bule bule bule!");
    }

    public void eat(){
        System.out.println("Fish eats what?");
    }

    public void show(){}
}

public class Test{
    public static void main(String args[]){
        Cat cat = new Cat("Kity","White",4,20.3);
        Dog dog = new Dog("John","Black",4,40.5);
        Duck duck = new Duck("Donal","White",2,15.2);
        Fish fish = new Fish("Fish","Sliver",5.6);

        cat.show();
        cat.cry();
        cat.eat();

        dog.show();
        dog.cry();
        dog.eat();

        duck.show();
        duck.cry();
        duck.eat();

        fish.show();
        fish.cry();
        fish.eat();

    }
}