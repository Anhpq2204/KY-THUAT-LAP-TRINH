int lucas(int n) {

    /*****************
    Pham Quang Anh 20224924
    *****************/
    if(n==0){return 2;}
    if(n==1){return 1;}
    else {return lucas(n-1)+lucas(n-2);}
}
