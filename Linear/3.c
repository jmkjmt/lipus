
int main()
{
    int x = 0;
    int y, z;

    while(x < 5) 
    //(x==0) || ((0<=x<=5) && z>=y)
    {
       x += 1;
       if( z <= y) {
          y = z;
       }
    }

    //post-condition
    assert (z >= y);
}
