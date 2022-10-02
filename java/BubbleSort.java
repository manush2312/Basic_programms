//import java.rmi.server.SocketSecurityException;
//import java.util.Scanner;

class BubbleSort
{
    static void bubbleSort(int array[])
    {
        int n = array.length;
        int temp =0;
        
        for(int i =0;i<n;i++)
        {
            for(int j =1; j<(n); j++)
            {
                if(array[j-1]>array[j])
                {
                    temp = array[j-1];
                    array[j-1] = array[j];
                    array[j] = temp;
                }
            }
        }
    }













    public static void main(String[] args) {
        int array[] = {3,60,35,55,47,87,22};

        System.out.println("Array before bubble sort");
        for (int i=0; i<array.length; i++)
        
        {
            System.out.print(array[i]+" ");

        }
        System.out.println();

        bubbleSort(array);

        System.out.println("After bubble sort");
        for(int i=0;i<array.length;i++)
        {
            System.out.print(array[i]+" ");
        }
        
    }
}
