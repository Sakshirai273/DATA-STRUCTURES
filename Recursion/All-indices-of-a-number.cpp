int allIndexes(int input[], int size, int x, int output[]) {
	  if(size == 0)
        return 0;
    int smallCount= allIndexes(input, size -1, x, output);
     if(input[size -1] == x)
     {
         output[smallCount] = size -1;
         return smallCount +1;
     } else {
         return smallCount;
     }
}

//----------------------------------------------------------------------------------------------------------------------------------------------------
int allIndexes(int input[], int size, int x, int output[]) {
 
   if(size==0) 
       return 0;
    int ans =allIndexes(input+1,size-1,x,output);

   // output[k]=output[k]+1;k++;
    if(input[0]==x){
        if(ans!=0)  // if output contains previous indexes
        {
  			for(int i=ans-1 ;i>=0;i--)  // increment their index and shift them 1 right side as we have to add
                //at output[0] the current index
            {
					output[i]++;
                output[i+1]=output[i];
                
            }
        }
        
        output[0]=0; 
        return ans+1;
    } 
    else
    {    //just increment index
        for(int i=ans-1 ;i>=0;i--)
            {
					output[i]++;
                //output[i+1]=output[i];
            }
     return ans;   
    }
}
//----------------------------------------------------------------------------------

void findIndexes (int input[] ,int currIndex , int size, int x, int output[], int &k){
    if (currIndex== size)
    return ;
    if(input[currIndex] == x){
        output[k] = currIndex;
        k++;
    }
    findIndexes(input, currIndex+! , size , x , output , k);
}
int allIndexes(int input[], int size, int x, int output[]) {
int k = 0 ;
findIndexes(input, 0 , size , x, output, k)
return k;
}