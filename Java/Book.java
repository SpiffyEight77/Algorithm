public class Book{
    public String name;
    public String author;
    public double price;
    public Book(String name,String author,double price){
        this.name=name;
        this.author=author;
        this.price=price;
    }
    public String getname(){
        return name;
    }
    public String gteauthor(){
        return author;
    }
    public double getprice(){
        return price;
    }
    public static void main(String args[]){
       Book book =new Book("hello","abc",99.2);
       System.out.println(book.name);
       System.out.println(book.author);
       System.out.println(book.price);
    }
}