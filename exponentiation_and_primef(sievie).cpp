Number Theory page 2

Binary Exponentiation

long long int binpow(long long int base, long long int power){
  long long int res=1;
  while(n){
    if(n%2){
      res*=base;
      n--;
    }else{
      base*=base;
      n/=2;
    }
  }
  return res;
}

Matrix Exponentiation
int ar[N][N],I[N][N];
void mul(int A[][N], int B[][N], int dim){
  int res[dim+1][dim+1];
  for(int i=1;i<=dim;i++){
    for(int j=1;j<=dim;j++){
      res[i][j]=0;
      for(int k=1;k<=dim;k++){
        res[i][j]+=A[i][k]*B[k][j];
      }
    }
  }
  for(int i=1;i<=dim;i++)
  for(int j=1;j<=dim;j++)
  A[i][j]=res[i][j];
}

void matPow(int A[][N], int dim, int n){
  for(int i=1;i<=dim;i++)
    for(int j=1;j<=dim;j++)
      if(i==j)I[i][j]=1;
      else I[i][j]=0;
  while(n){
    if(n%2){
      mul(I,A,dim);
      n--;
    }else{
      mul(A,A,dim);
      n/=2;
    }
  }
  for(int i=1;i<=dim;i++)
    for(int j=1;j<=dim;j++)
      A[i][j]=I[i][j];
}


Prime Factorization of a number in O(nlogn) time complexity with sieve

int v[N+1]={0};
void spf(){
  v[0]=-1;
  v[1]=-1;
  for(int i=2;i<=N;i++){
    if(v[i]==0){
      int j=i;
      while(j<=N){
        if(v[j]==0)
          v[j]=i;
        j+=i;
      }
    }
  }
  
  int x;
  cin>>x;
  while(x>1){
    cout<<v[x]<<" ";
    x/=v[x];
  }
}
