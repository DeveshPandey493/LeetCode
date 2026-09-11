bool isPalindrome(int x) {
    if(x < 0) return false;
    int t = x;
    long long rev = 0 , rem ;
    while(t != 0){
        rem = t%10;
        rev = rev*10 + rem;
        t = t/10;
    }
    return rev == x;
    
}