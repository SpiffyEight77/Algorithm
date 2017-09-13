public class lx{
    public static void main(String args[]){
        int map[][]=new int[][]{{0,0,0,1,0,0,0},
                                 {0,0,1,0,1,0,0},
                                 {0,1,0,0,0,1,0},
                                 {1,0,0,0,0,0,1},
                                 {0,1,0,0,0,1,0},
                                 {0,0,1,0,1,0,0},
                                 {0,0,0,1,0,0,0}};
        for(int row=0;row<map.length;row++){
            for(int col=0;col<map[row].length;col++){
                switch(map[row][col]){
                    case 0:
                        System.out.print(" "); 
                        break;
                    case 1:
                        System.out.print("*"); 
                        break;
                }
            }
            System.out.println();
        }
    }
}