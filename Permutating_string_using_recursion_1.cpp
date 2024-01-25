void perm(char s[] , int k){
    
    static int A[10] = {0}; // making empty array with all zeroes just to keep the number thst which part of string is used which is not
    int i;
    static char res[10]; // this array will store the string s's element one by one , like for k = 0 , i = 0 it'll store A 
    
    if(s[k] == '\0'){ // this line checks if k is in the end of the string or its still away from the end "\0 " this character is the end of any string in cpp or c
        res[k] = '\0'; // if this conditon gets the last value (k) is set as res[k] to the last element of any given string which is backslash zero (\0)
        cout << res <<endl;  // this line print the result as soon as it gets any part of the string 
    }
    else{ //if the conditon fails this one is executed by default
        for(i = 0 ; s[i] != '\0' ;i++){ // this line just iterates all over the string
            if(A[i] == 0){ // it checks if the place is vacant in the empty zero array if it is we go inside the condition to explore more
                res[k] = s[i]; // res empty array is set to the string's alphabet , for k = 0 and i = 0 res[0] = s[0] i.e res [0] = A 
                A[i] = 1; // now the empty array that we checked in the conditon A[i] == 0 is set to A[i] = 1 to tell that the place is occupied now
                perm(s , k+1); // we call the function again and it cheks the first if condition then comes to else , it skips i = 0 as A[0] != 0 its actually 1, so the i gets incremented to i = 1; and comes in the loop and this time res[1] store B
                A[i] = 0; // after all previous calls end it comes and sets every A[i] = 0 to make it move forward for the other section where the letters will start from B and same process is repeated
                
            }
        }
    }
    
}

int main() {
    char s[] = "ABC";
    perm(s , 0);
return 0;

}
