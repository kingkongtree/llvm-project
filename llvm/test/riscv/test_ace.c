int main() {

  int a, b;
  a = 1;
  b = 1;
  asm volatile
      ("ace_cmd %0, %1, ace_reg_4, 0b0\n"
       :
       : "r" (a), "r" (b)
       : "memory"
      );
  return 0;
}