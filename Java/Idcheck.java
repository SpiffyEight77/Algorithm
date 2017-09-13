public class Idcheck{
    public static void main(String args[]){
        String Id = new String("610456930101146");
        String name = "先生";
        String adress ="未知";
        if(Id.startsWith("610")){
            adress = "陕西省";
        }
        for(int  i = 0; i < 10; i++){

            String endchar=""+i;
                if(Id.endsWith(endchar)){
                    name="女士";
                    break;
                }
        }
        System.out.println(name+", 你的地址："+adress);
    }
}