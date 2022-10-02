import java.util.Scanner;

class lab{

   public class Complex{
        float real;
        float imaginary;

        public Complex(float real, float imaginary){
            this.real = real;
            this.imaginary = imaginary;
        }

        void display()
        {
            System.out.println(real+" + "+imaginary+"i");
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the real and imaginary part of c1:");
        Complex c1 = new Complex(23 , 43);
        c1.display();
        
    }
}