import java.util.Scanner;
class LinSearch 
{
    public static void main(String[] args) {
        int n,ele;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of integers");
        n = sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter" +n+ "integers");
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        System.out.println("The elements are");
        for(int i=0; i<n; i++)
        {
            System.out.print(arr[i] +" ");
        }
        System.out.println("Enter the element to be searched:");
        ele = sc.nextInt();

        linear(arr, ele, n);

        


    }

    static void linear(int arr[], int ele, int n)
    {
        for(int i=0; i<n; i++)
        {
            if(ele == arr[i])
            {
                System.out.println("Element found");
            }
            else{ 
            System.out.println("Not found");
            }
        }
    }
}