string reverseWord(string str){
    int n=str.size();
    char c;
    for(int i=0;i<n/2;i++)
    {
        c=str[n-1-i];
        str[n-1-i]=str[i];
        str[i]=c;
    }
    
 return str;
}
