import java.util.Scanner;

class Bank_Acc{
    String name;
    int acc_num;
    String acc_type;
    int balance;
    static int rate;

    Bank_Acc(){
        name="";
        acc_num=0;
        acc_type="";
        balance=0;
        rate = 6;
    }

    Bank_Acc(String name, int acc_num, String acc_type, int balance)
    {
         this.name = name;
        this.acc_num = acc_num;
        this.acc_type = acc_type;
        this.balance = balance;
    }

    void display()
    {
        System.out.println("Name:"+name+"\n Account_no.:"+acc_num+"\n Account_type:"+acc_type+"\n Current_bal:"+balance);
    }


   
}





public class lab4_Q3 {
    public static void main(String[] args) {

        Bank_Acc c1 = new Bank_Acc();
        c1.display();
        System.out.println("above default constructor has been called..");

        Bank_Acc c2 = new Bank_Acc("Manush",210905298,"savings",2100);
        c2.display();
    }
}
