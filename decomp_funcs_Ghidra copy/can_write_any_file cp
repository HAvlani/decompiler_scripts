
_Bool can_write_any_file(void)

{
  __uid_t _Var1;
  
  if (can_write_any_file::initialized != false) {
    return can_write_any_file::can_write;
  }
  _Var1 = geteuid();
  can_write_any_file::can_write = _Var1 == 0;
  can_write_any_file::initialized = true;
  return _Var1 == 0;
}

