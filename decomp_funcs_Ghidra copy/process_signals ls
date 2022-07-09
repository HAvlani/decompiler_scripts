
void process_signals(void)

{
  long lVar1;
  sig_atomic_t __sig;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (stop_signal_count != 0))) {
    if (used_color != false) {
      restore_default_color();
    }
    fflush_unlocked(stdout);
    sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
    __sig = interrupt_signal;
    if (stop_signal_count == 0) {
      signal(interrupt_signal,(__sighandler_t)0x0);
    }
    else {
      stop_signal_count = stop_signal_count + -1;
      __sig = 0x13;
    }
    raise(__sig);
    sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

