// Defining multiple interfaces
interface Vehicle {
    void start();
}

interface Electric {
    void charge();
}

// Implementing multiple interfaces in a class
class ElectricCar implements Vehicle, Electric {
    public void start() {
        System.out.println("Electric car is starting.");
    }

    public void charge() {
        System.out.println("Charging electric car.");
    }
}

// Main class
public class MultiInterfaceExample {
    public static void main(String[] args) {
        ElectricCar tesla = new ElectricCar();
        tesla.start();
        tesla.charge();
    }
}
