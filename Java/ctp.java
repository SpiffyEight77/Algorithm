public class ctp{
    static int i=47;
    public void call(){
        for(i=0;i<3;i++){
            System.out.print(i+" ");
            if(i==2)
             System.out.println();
        }
    }
    public ctp(){}
    public static void main(String args[]){
       ctp t1 = new ctp();
       ctp t2 = new ctp();
       t1.i=60;
       System.out.println(" "+t2.i++);
       t1.call();
       System.out.println(" "+t1.i);
       
       t2.call();
    }
}