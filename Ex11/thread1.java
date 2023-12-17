package Ex11;
class producer implements Runnable{
    private Utility utility;
    producer(Utility utility){
        this.utility=utility;
        Thread producer=new Thread(this,"producer");
        producer.start();
    }
    public void run(){
        int i=0; 
        while (true) {
            
            try{
                utility.set(i++);
                Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }  
        }
    }

}
class consumer implements Runnable{
     private Utility utility;
    consumer(Utility utility){
        this.utility=utility;
        Thread Consumer=new Thread(this,"Consumer");
        Consumer.start();
    }
    public void run(){
        while (true) {
            try{
                utility.get();
                Thread.sleep(500);
            }catch(InterruptedException e){
                
            }
        }

    }

}
class Utility{
    int i=0;
    boolean bool=false;
    synchronized void set(int i) throws InterruptedException {
        while (bool) {
            wait();
            Thread.sleep(500);
        }
        this.i=i;
        bool=true;
        System.out.println("Producer"+i);
        notify();

    }
    synchronized void get() throws InterruptedException{
         while (!bool) {
            wait();
        }
       
        bool=false;
        System.out.println("Consumer"+i);
        notify();

    }
}
public class thread1{
    public static void main(String[] args) {
        Utility u=new Utility();
        producer p=new producer(u);
        consumer c=new consumer(u);

        
    }
    
}
