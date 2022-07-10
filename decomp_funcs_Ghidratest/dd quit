
void quit(int code)

{
  undefined4 in_register_0000003c;
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)CONCAT44(in_register_0000003c,code);
  process_signals();
  cleanup(ctx);
  print_stats();
                    /* WARNING: Subroutine does not return */
  exit(1);
}

