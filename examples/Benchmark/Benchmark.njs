function fibonacci(n) {
  if (n <= 2) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

const start = new Date().getTime();
const n = fibonacci(40);
const end = new Date().getTime();
console.log(n);
console.log(end - start);