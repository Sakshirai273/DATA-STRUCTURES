///starting from first
int lastIndex(int input[], int size, int x) {
 
    if(size==0) return -1;
    
    int index = lastIndex(input+1, size-1,x);
    
    if(index != -1)  return index+1;
    
    if(input[0]==x)
      return 0;
    
    return -1;

}
///starting from last

int lastIndex(int input[], int size, int x) {
     
    if(size==0)
        return -1;
    
    if(input[size-1]==x)
        return size-1;
      
    return lastIndex(input,size-1,x);
           
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}