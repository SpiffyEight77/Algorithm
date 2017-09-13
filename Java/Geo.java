public class Geo{
    public int x;
    public int y;
    public double r;
    public int width;
    public int length;
    static double pi = 3.1415926;
    
    public Geo(int x,int y,double r)
    {
        this.x=x;
        this.y=y;
        this.r=r;
    }

   public Geo(int x,int y,int width,int length)
    {
        this.x=x;
        this.y=y;
        this.width=width;
        this.length=length;
    }

    public void Circleshow()
    {
        System.out.println("x = "+x+" "+"y = "+y+" Circle area = "+r*r*pi);
    }

    public void Recshow()
    {
        System.out.println("x = "+x+" "+"y = "+y+" Rectangle area = "+width*length);
    }

    public static void main(String args[])
    {
        Geo circle = new Geo(1,7,3.1);
        Geo rec = new Geo(3,5,8,6);
        circle.Circleshow();
        rec.Recshow();
    }
}