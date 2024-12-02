 void fun(int *p,int *q) {
     int a1 = *p % 10, a2 = *p / 10 % 10;
     int b1 = *q % 10, b2 = *q / 10 % 10;
     int t1 = *p, t2 = *q;
     *p = t1 / 100 * 100 + b2 * 10 + b1;
     *q = t2 / 100 * 100 + a2 * 10 + a1;
}