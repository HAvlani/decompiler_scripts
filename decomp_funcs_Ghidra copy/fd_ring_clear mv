
void fd_ring_clear(I_ring *fd_ring)

{
  _Bool _Var1;
  int __fd;
  
  while( true ) {
    _Var1 = i_ring_empty(fd_ring);
    if (_Var1 != false) break;
    __fd = i_ring_pop();
    if (-1 < __fd) {
      close(__fd);
    }
  }
  return;
}

