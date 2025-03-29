package mypack;

public class MyClass {
    public void display() {
        System.out.println("Hello from MyClass in mypack package!");
    }
}
import mypack.MyClass;

public class TestPackage {
    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.display();
    }
}
