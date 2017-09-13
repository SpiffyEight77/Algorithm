public class Point{
    public double x;
    public double y;
    public Point(double x,double y)
    {
        this.x = x;
        this.y = y;
    }
    public void show()
    {
        System.out.println("x = "+x+" "+"y = "+y);
    }
    public static void main(String args[])
    {
        Point p  = new Point(1.1,2.9);
        Point p1 = new Point(1.3,3.0);
        Point p2 = new Point(4.8,5.2);
        Point p3 = new Point(5.3,10.9);
        p.show();
        p1.show();
        p2.show();
        p3.show();
     }
} 