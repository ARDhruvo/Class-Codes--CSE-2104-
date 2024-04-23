//not actual code


//This code is used to differentiate between Java's OOP, C++'s OOP and C++'s structures
class Box{
    int height, width, length;

    Box(){}

    Box(int a, int b){
        height = a;
        width = b;
        length = 1;
    }

    Box (int a, int b, int c){
        height = a;
        width = b;
        length = c;
    }

    void Print(){
        System.out.println(height * width * height);
    }
}

public static void main(String args[]){
    Box obj1, obj2;
    obj1 = new Box(10, 12);
    obj2 = new Box(10, 12, 5);
    obj1.Print(); //prints out 120
    obj2.Print(); //prints out 609
}
