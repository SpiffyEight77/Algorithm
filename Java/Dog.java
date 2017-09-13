public class dog{
    String name;
    int age;
    dog(){};
    dog(String name,int age){
        this.name=name;
        this.age=age;
        System.out.println("hello "+name);
    }
    void bark(){
        System.out.println("Wang Wang!");
    }
    void hungry(){
        System.out.println("I'm hungry!");
    }
    class Teddy extend dog{
        
    }
    public static void main(String args[]){
        dog doge=new dog("3",3);
        String name=doge.name;
        System.out.println(name);
        doge.bark();
        doge.hungry();
    }
}