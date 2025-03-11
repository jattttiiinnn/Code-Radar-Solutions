// Your code here...
int n;
scanf("%d", &n);
for(int i=1; i<=n; i++){
    for(int j=1; j<n+i; j++){
        printf(n, "*", i, "=",n*i);
    }
printf("\n");
}