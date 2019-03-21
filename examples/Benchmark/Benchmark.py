from time import time

def fibonacci(n):
  if n <= 2:
    return 1
  return fibonacci(n - 1) + fibonacci(n - 2)


start = time()
n = fibonacci(40)
end = time()

print(n)
print(end - start)