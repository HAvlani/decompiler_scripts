
void cdb_free(cd_buf *cdb)

{
  int iVar1;
  
  if ((int)cdb < 0) {
    return;
  }
  iVar1 = close((int)cdb);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("! close_fail","lib/chdir-long.c",0x40,"cdb_free");
}

