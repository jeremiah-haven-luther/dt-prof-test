/**
 * Class Greeter
 */
class Greeter {
    private String message;
    /**
     * Constructor
     */
    public Greeter(String msg) {
        this.message = msg;
    }
    /**
     * String representation
     */
    public String toString() {
        return this.message.toString();
    }
}
