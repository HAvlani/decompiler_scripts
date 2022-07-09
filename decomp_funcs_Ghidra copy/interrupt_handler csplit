
void interrupt_handler(int sig)

{
  if (remove_files != false) {
    delete_all_files(true);
  }
  signal(sig,(__sighandler_t)0x0);
  (*(code *)PTR_raise_0011ed58)(sig);
  return;
}

