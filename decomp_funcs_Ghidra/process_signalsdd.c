
void process_signals(void)

{
  long lVar1;
  sig_atomic_t __sig;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (info_signal_count != 0))) {
    while( true ) {
      sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
      __sig = interrupt_signal;
      if (info_signal_count != 0) {
        info_signal_count = info_signal_count + -1;
      }
      ctx = (EVP_PKEY_CTX *)0x2;
      sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
      if (__sig != 0) break;
      print_stats();
      if ((interrupt_signal == 0) && (info_signal_count == 0)) goto LAB_00105d1a;
    }
    cleanup(ctx);
    print_stats();
    raise(__sig);
  }
LAB_00105d1a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

