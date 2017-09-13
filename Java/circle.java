public class Circle{
    public int x;
    public int y;
    public double r;
    Circle(int x,int y,double r){
        this.x=x;
        this.y=y;
        this.r=r;
    }
    public double computArea(){
        return r*r*3.1415926;
    }
    public void show(){
        System.out.print("x = "+x+" y = "+y);
        System.out.println();
    }
    public static void main(String args[]){
        Circle c = new Circle(10,10,5.1);
        c.show();
        System.out.println("c的面积为"+c.computArea());
    }
}