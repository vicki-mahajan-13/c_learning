int count_num_of_digits(int);
int power(int, int);
int is_armstrong_number(int);    
    
int count_num_of_digits(int b)
{
    int ctr=0;
    while(b>0)
    {
        b=b/10;
        ctr++;
    }
    return ctr;
}  

int power(int n,int count)
{
    int p=1,i;
    for(i=0;i<count;i++)
    {
        p=p*n;
    }
    return p;
}

int is_armstrong_number(int a)
{
    int b,count,n,result=0;
    b=a;
    count=count_num_of_digits(b);
    while(b>0)
    {
        n=b%10;
        result=result+power(n,count);
        b=b/10;
    }
    if(result == a)
        return 1;
    else
        return 0;
}
