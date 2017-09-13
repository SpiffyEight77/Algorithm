public class Books{
    private String name;
    private String author;
    private String num;
    private String date;
    private String publish;
    private int ammount;

    public Books(String name,String author,String num,String date,String publish,int ammount)
    {
        this.name=name;
        this.author=author;
        this.num=num;
        this.date=date;
        this.publish=publish;
        this.ammount=ammount;
    }

    public void show()
    {
        System.out.println("书名："+name+" "+"作者："+author+" "+"书号："+num+" "+"出版日期："+date+" "+"出版社："+publish+" "+"藏书量："+ammount);
    }

    public void borrow()
    {
        if(ammount > 0)
        {
            ammount--;
            System.out.println("借书成功！");
        }
        else
            System.out.println("借书失败");
    }

    public void returnbook()
    {
        ammount++;
        System.out.println("还书成功！");
    }

    public static void main(String args[])
    {
        Books book = new Books("数学之美","吴军","41564135","2012-9-23","中信出版社",5);
        book.show();
        book.borrow();
        book.returnbook();
    }
}