double e(int x , int n){
    static double p =1 , f = 1;
    double res;
    if(n==0){
        return 1;
    }
    
    else{
        res = e(x,n-1);
        p = p*x;
        f = f*n;
        
        return (res+ p/f);
    }
}
int main() {
    std::cout << e(1,5);
}
