int even( int n ){
    if(n%2==0) return 1;
    else return 0;
}
int OddSum( int List[], int N ){
    int i,sum=0;
    for(i=0;i<N;i++){
        if(List[i]%2==1||List[i]%2==-1){
            sum=sum+List[i];
            }
        }
    return sum;
    }
