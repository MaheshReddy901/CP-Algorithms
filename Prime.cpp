//finding Prime in sqrt(n)

bool isPrime(long long int value){
  if(value<2)return false;
  for(int i=2;i*i<=n;i++)
    if(n%i==0)return false;
  return true;

}

//seieve of eratosthenes
bool v[n+1]={false};
v[0]=true;
v[1]=true;
for(int i=2;i*i<=n;i++){
  if(v[i]==true){
    continue;
  }
  int j=i*i;
  while(j<=n){
    v[j]=true;
    j+=i;
  }
}

//prime factorization in sqrt(n)
void pf(long long int n){
  if(n==1){
    cout<<"0\n";
  }
  for(long long int i=2;i*i<=n;i++){
    if(n%i==0){
      while(n%i==0){
        cout<<i<<" ";
        n/=i;
      }
    }
  }
  if(n>1)cout<<n<<endl;
}
