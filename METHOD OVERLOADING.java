public class Calculator {

    // Method with 2 int parameters
    public int add(int a, int b) {
        return a + b;
    }

    // Method with 3 int parameters
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method with double parameters
    public double add(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(5, 10));         // Output: 15
        System.out.println(calc.add(5, 10, 15));     // Output: 30
        System.out.println(calc.add(5.5, 10.5));     // Output: 16.0
    }
}
