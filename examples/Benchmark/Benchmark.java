import java.util.Date;

public class Benchmark {
  static int fibonacci(int n) {
    if (n <= 2) {
      return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
  }

  public static void main(String[] args) {
    Date start = new Date();
    long n = fibonacci(40);
    Date end = new Date();
    System.out.println(n);
    System.out.println(end.getTime() - start.getTime());
  }

}