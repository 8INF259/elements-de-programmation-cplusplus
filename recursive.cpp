int mystere (int n) {
  if (n == 1) return 1;
  else return(mystere (n-1) + n);
}