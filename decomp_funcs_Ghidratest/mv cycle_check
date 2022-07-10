
_Bool cycle_check(cycle_check_state *state,stat *sb)

{
  ulong uVar1;
  ulong uVar2;
  __ino_t _Var3;
  __dev_t _Var4;
  
  if (state->magic != 0x95f616) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("state->magic == 9827862","lib/cycle-check.c",0x3c,"cycle_check");
  }
  uVar2 = state->chdir_counter;
  _Var3 = sb->st_ino;
  if (uVar2 == 0) {
    state->chdir_counter = 1;
  }
  else {
    if (((state->dev_ino).st_ino == _Var3) && (sb->st_dev == (state->dev_ino).st_dev)) {
      return true;
    }
    uVar1 = uVar2 + 1;
    state->chdir_counter = uVar1;
    if ((uVar2 & uVar1) != 0) {
      return false;
    }
    if (uVar1 == 0) {
      return true;
    }
  }
  _Var4 = sb->st_dev;
  (state->dev_ino).st_ino = _Var3;
  (state->dev_ino).st_dev = _Var4;
  return false;
}

