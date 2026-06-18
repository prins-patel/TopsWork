public class PaymentProcessor {

    // Method 1: Process payment without coupon
    public void processPayment(double amount) {
        System.out.println("processPayment(amount) called");
        System.out.println("Final Amount: ?" + amount);
    }

    // Method 2: Process payment with coupon
    public void processPayment(double amount, String couponCode) {
        double discount = amount * 0.10; // 10% discount
        double finalAmount = amount - discount;

        System.out.println("processPayment(amount, couponCode) called");
        System.out.println("Coupon Applied: " + couponCode);
        System.out.println("Final Amount: ?" + finalAmount);
    }

    public static void main(String[] args) {
        PaymentProcessor payment = new PaymentProcessor();

        // Calling first overloaded method
        payment.processPayment(1000);

        System.out.println();

        // Calling second overloaded method
        payment.processPayment(1000, "SAVE10");
    }
}
