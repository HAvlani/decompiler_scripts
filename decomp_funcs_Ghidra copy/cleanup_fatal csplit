
void cleanup_fatal(void)

{
  sigset_t oldset;
  
  close_output_file();
  sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
  if (remove_files != false) {
    delete_all_files(false);
  }
  sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

