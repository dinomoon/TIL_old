interface PhoneInterface{   //인터페이스 선언
    final int TIMEOUT = 10000;
    void sendCall();
    void receiveCall();
    default void printLogo(){
        System.out.println("**Phone**");
    }
}

class SamsunPhone implements PhoneInterface{
    @Override
    public void sendCall(){
        System.out.println("ring ring ring");
    }
    @Override
    public void receiveCall(){
        System.out.println("Calling~~!");
    }

    public void flash() { System.out.println("flashing~!"); }
}

public class Exercise56{
    public static void main(String[] args){
        SamsunPhone phone = new SamsunPhone();
        phone.printLogo();
        phone.sendCall();
        phone.receiveCall();
        phone.flash();
    }
}