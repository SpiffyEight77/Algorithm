public class array{
    public static void main(String args[]){
        int arr[][]=new int[3][4];
        int a=1;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=a++;
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}