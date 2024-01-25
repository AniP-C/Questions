void perm(char s[] , int l , int h){
    
    int i;
     if(l == h){
        cout <<s <<endl;
            
        }
    else{
    for(i = l ;i <= h ;i++){
        
       swap(s[i] ,s[l]);
        perm(s , l+1 , h);
        swap(s[i] , s[l]);
        
        }
    }
    
}
int main() {
    char s[] = "ABC";
    int l ,h;
        l = 0;
    h = 3;
    
    perm(s,l , h);
}
