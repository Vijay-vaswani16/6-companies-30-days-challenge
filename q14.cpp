

/*You are required to complete this function */

string encode(string src)
{     
    string ans="";
    int n=src.size();
    int count=1;
    for(int i=0;i<n-1;i++){
        if(src[i]==src[i+1]){
            count++;
        }
        else{
            ans+=src[i];
            ans+=char('0'+count);
            count=1;
        }
    }
    ans+=src[n-1];
            ans+=char('0'+count);
            count=1;
            return ans;
  //Your code here 
}     
 
