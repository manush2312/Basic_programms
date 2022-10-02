class Box
{
    int length, breadth, height;
    // Box(int l, int b, int h)
    // {
        
    //     length=l;
    //     breadth=b;
    //     height=h;
    // }
    public
    void Evaluate()
    {
        int a,vol;
        a=2*((length*breadth)+(breadth*height)+(length*height));
        vol=length*breadth*height;
        System.out.println("area:"+a);
        System.out.println("volume:"+vol);
    }
}
class Box1
{
    public static void main(String args[])
    {
        Box b1= new Box();
        b1.length=10;
        b1.breadth=20;
        b1.height=30;
        b1.Evaluate();
        Box b2= new Box();
        b2.length=10;
        b2.breadth=20;
        b2.height=30;
        

        // Box b3 = new Box();
        // b3.breadth = 23;
        // System.out.println(b3.breadth);
    }   
}