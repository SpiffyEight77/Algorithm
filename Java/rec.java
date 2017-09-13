public class Rec{
    public int x;
    public int y;
    public int length;
    public int width;
    Rec(int x,int y,int length,int width){
        this.x=x;
        this.y=y;
        this.length=length;
        this.width=width;
    }
    public double computArea(){
        return length*width;
    }
    public void show(){
        System.out.println("x = "+x+" y = "+y);
        System.out.println("length = "+length+" width = "+width);
    }
    public static void main(String args[]){
        Rec R = new Rec(10,10,5,4);
        R.show();
        System.out.println("R的面积为"+R.computArea());
    }
}