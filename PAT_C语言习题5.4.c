int prime( int p ){
    int i;
    int isprime=1;
    if(p<2) isprime=0;
    for(i=2;i<p-1;i++){
        if(p%i==0){
            isprime=0;
            break;
        }
    }
    return isprime;
}
int PrimeSum( int m, int n ){
    int i,sum=0;
    for(i=m;i<=n;i++){
        if(prime(i)!=0){
            sum+=i;
        }
    }
    return sum;
    
}

