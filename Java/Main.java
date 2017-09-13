abstract class Student{

    public final static int coursesno = 3;
    protected String name;
    protected String type;
    protected String courses_grades;
    protected int[] courses;

    public Student(String name)
    {
        this.name = name;
        courses = new int[coursesno];
        courses_grades = "";
    }

    public void setcourses_scores(int coursenum,int course_score)
    {
        courses[coursenum] = course_score;
    }

    public void setcourses_grades(String courses_grades)
    {
        this.courses_grades = courses_grades; 
    }

    public void setname(String name)
    {
        this.name = name;
    }

    public void settype(String type)
    {
        this.type = type;
    }

    public String getcourses_grades()
    {
        return courses_grades;
    }

    public String gettype()
    {
        return type;
    }
    
    public String getname()
    {
        return name;
    }

    abstract void calculate();

}

class Undergraduate extends Student{
    public Undergraduate(String name)
    {
        super(name);
        type = "Undergraduate";
    }

    public void calculate()
    {
        int ave = 0;
        for(int i = 0; i < coursesno; i++)
            ave = ave + courses[i];
        ave = ave / coursesno;

        ave = ave /10;
        switch(ave)
        {
            case 10 :  courses_grades = "A"; break; 
            case  9 :  courses_grades = "A"; break; 
            case  8 :  courses_grades = "B"; break; 
            case  7 :  courses_grades = "C"; break; 
            case  6 :  courses_grades = "D"; break; 
            default :  courses_grades = "E";
        }
    }
}

class Postgraduate extends Student{
     public Postgraduate(String name)
    {
        super(name);
        type = "Postgraduate ";
    }

    public void calculate()
    {
        double ave = 0;

        for(int i = 0; i < coursesno; i++)
            ave = ave + courses[i];
        ave = ave / coursesno;

        if(ave >= 95 && ave <100)
            courses_grades = "A";
        else
        if(ave >= 85 && ave <95)
            courses_grades = "B";
        else
        if(ave >= 75 && ave <85)
            courses_grades = "C";
        else
        if(ave >= 65 && ave < 75)
            courses_grades = "D";
        else
            courses_grades ="E";
    }
}

public class Main{
    public static void main(String args[]){
        Student[] student = new Student[5];

    student[0] = new Undergraduate("Mike");
    student[1] = new Undergraduate("John");
    student[2] = new Postgraduate("Kite");
    student[3] = new Undergraduate("Heny");
    student[4] = new Postgraduate("Edwa");

    for(int i = 0; i < 5; i++)
    {
        student[i].setcourses_scores(0,88);
        student[i].setcourses_scores(1,99);
        student[i].setcourses_scores(2,96);

        student[i].calculate(); 
    }
    System.out.println("Name"+"          "+"Type"+"                    "+"Rank");
    System.out.println("---------------------------------------------");
    for(int i = 0; i < 5; i++)
        System.out.println(student[i].getname()+"          "+student[i].gettype()+"           "+student[i].getcourses_grades());
    }
}