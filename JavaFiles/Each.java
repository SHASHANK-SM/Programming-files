class Each
{
    public static void main(String[] args)
    {
        int sum=0,count=0;
        int a[]={10,20,30,40,50,60};
        for(int x:a)
        {
            sum=sum+x;
            count++;
            if(count==6)
                break;
        } 
        System.out.println("sum="+sum);
    }
}