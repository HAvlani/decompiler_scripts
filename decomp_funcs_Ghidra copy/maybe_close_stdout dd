
void maybe_close_stdout(void)

{
  int iVar1;
  
  if (close_stdout_required != false) {
    close_stdout();
    return;
  }
  iVar1 = close_stream(stderr);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

