
mode_t cached_umask(void)

{
  __mode_t __mask;
  
  if (cached_umask::mask != 0xffffffff) {
    return cached_umask::mask;
  }
  __mask = umask(0);
  cached_umask::mask = __mask;
  umask(__mask);
  return __mask;
}

