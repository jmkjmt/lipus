
int main() {
    int n,y;
    int x = 1;

    while (x <= n) 
    // n>0 -> (x==1 || (1<=x && x<=n+1 && y<=n))
    {
        y = n - x;
        x = x +1;
    }

    //post-condition
    if (n > 0) {
        //assert (y >= 0);
        assert (y <= n);
    }
}
