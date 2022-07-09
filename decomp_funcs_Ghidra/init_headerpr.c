
void init_header(char *filename,int desc)

{
  long lVar1;
  __syscall_slong_t _Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  size_t sVar7;
  char *s;
  char *pcVar8;
  long in_FS_OFFSET;
  timespec t;
  tm tm;
  stat st;
  char secbuf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*filename == '-') && (filename[1] == '\0')) {
    desc = -1;
  }
  else if ((-1 < desc) && (iVar5 = __fxstat(1,desc,(stat *)&st), iVar5 == 0)) {
    t.tv_nsec = st.st_mtim.tv_nsec;
    t.tv_sec = st.st_mtim.tv_sec;
    goto LAB_00103752;
  }
  if (CONCAT44(init_header::lexical_block_0::timespec.tv_sec._4_4_,
               (undefined4)init_header::lexical_block_0::timespec.tv_sec) == 0) {
    gettime(&init_header::lexical_block_0::timespec);
  }
  t.tv_sec = CONCAT44(init_header::lexical_block_0::timespec.tv_sec._4_4_,
                      (undefined4)init_header::lexical_block_0::timespec.tv_sec);
  t.tv_nsec = CONCAT44(init_header::lexical_block_0::timespec.tv_nsec._4_4_,
                       (undefined4)init_header::lexical_block_0::timespec.tv_nsec);
LAB_00103752:
  _Var2 = t.tv_nsec;
  ptVar6 = localtime_rz(localtz,&t.tv_sec,&tm);
  if (ptVar6 == (tm *)0x0) {
    s = (char *)xmalloc(0x21);
    pcVar8 = imaxtostr(t.tv_sec,secbuf);
    __sprintf_chk(s,1,0x21,"%s.%09d",pcVar8,_Var2 & 0xffffffff);
  }
  else {
    iVar5 = (int)_Var2;
    sVar7 = nstrftime((char *)0x0,0xffffffffffffffff,date_format,&tm,localtz,iVar5);
    s = (char *)xmalloc(sVar7 + 1);
    nstrftime(s,sVar7 + 1,date_format,&tm,localtz,iVar5);
  }
  rpl_free(date_text);
  iVar5 = chars_per_line;
  file_text = custom_header;
  if ((custom_header == (char *)0x0) && (file_text = "", -1 < desc)) {
    file_text = filename;
  }
  date_text = s;
  iVar3 = gnu_mbswidth(s,0);
  iVar4 = gnu_mbswidth(file_text,0);
  header_width_available = (iVar5 - iVar3) - iVar4;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

