public class ThreadDemo
{
    public static void main(String args[])
    {
        Thread t=Thread.currentThread();
        System.out.println("Current thread is "+t);
        t.setName("My Thread");
        System.out.println("After changing "+t);
        System.out.println("Name of Thread : "+t.getName());
        for(int i=5;i>=0;i--)
        {
            System.out.println(i);
            try{
                Thread.sleep(100);
            }
            catch(InterruptedException e)
            {
                System.out.println(e);
            }
            finally{
            System.out.println("Main thread interrupted");
            }

        }
    }
}