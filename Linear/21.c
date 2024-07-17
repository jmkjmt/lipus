
int main()
{
    int x = 1;
    int m = 1;
    int n;

    while (x < n) 
    //  ((1<x && x<=n) -> m<x) && (n>=1 ->( 1<=x  && x<=n))
    {
        if (unknown()) {
            m = x;
        }
        x = x + 1;
    }

    //post-condition
    if(n > 1) {
       assert (m < n);
       //assert (m >= 1);
    }
}
