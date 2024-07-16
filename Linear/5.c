int main()
{
    int x = 0;
    int size;
    int y, z;

    while(x < size) 
    // size >=0 -> (x==0) || (0<=x<=size && z>=y)
    {
       x += 1;
       if( z <= y) {
          y = z;
       }
    }

    //post-condition
    if(size > 0) {
       assert (z >= y);
    }
}
