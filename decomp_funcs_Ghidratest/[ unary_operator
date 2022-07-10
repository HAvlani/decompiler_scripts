
_Bool unary_operator(void)

{
  long lVar1;
  char **ppcVar2;
  __gid_t _Var3;
  __uid_t _Var4;
  int iVar5;
  char *pcVar6;
  char *format;
  int *piVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  stat stat_buf;
  
  ppcVar2 = argv;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  switch(argv[pos][1]) {
  case 'G':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    if (iVar5 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var3 = getegid();
      if ((_Var3 != 0xffffffff) || (bVar9 = false, *piVar7 == 0)) {
        bVar9 = stat_buf.st_gid == _Var3;
      }
      break;
    }
    goto LAB_00103880;
  default:
    pcVar6 = quote(argv[pos]);
    format = (char *)dcgettext(0,"%s: unary operator expected",5);
                    /* WARNING: Subroutine does not return */
    test_syntax_error(format,pcVar6);
  case 'L':
  case 'h':
    unary_advance();
    iVar5 = __lxstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0xa000;
    }
    break;
  case 'N':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    if (iVar5 == 0) {
      bVar9 = 0 < (int)(((uint)(stat_buf.st_atim.tv_nsec < stat_buf.st_mtim.tv_nsec) -
                        (uint)(stat_buf.st_mtim.tv_nsec < stat_buf.st_atim.tv_nsec)) +
                       ((uint)(stat_buf.st_atim.tv_sec < stat_buf.st_mtim.tv_sec) -
                       (uint)(stat_buf.st_mtim.tv_sec < stat_buf.st_atim.tv_sec)) * 2);
      break;
    }
    goto LAB_00103880;
  case 'O':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    if (iVar5 == 0) {
      piVar7 = __errno_location();
      *piVar7 = 0;
      _Var4 = geteuid();
      if ((_Var4 != 0xffffffff) || (bVar9 = false, *piVar7 == 0)) {
        bVar9 = stat_buf.st_uid == _Var4;
      }
      break;
    }
LAB_00103880:
    bVar9 = false;
    break;
  case 'S':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0xc000;
    }
    break;
  case 'b':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0x6000;
    }
    break;
  case 'c':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0x2000;
    }
    break;
  case 'd':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0x4000;
    }
    break;
  case 'e':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = iVar5 == 0;
    break;
  case 'f':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0x8000;
    }
    break;
  case 'g':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (bool)((byte)(stat_buf.st_mode >> 10) & 1);
    }
    break;
  case 'k':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (bool)((byte)(stat_buf.st_mode >> 9) & 1);
    }
    break;
  case 'n':
    unary_advance();
    bVar9 = *ppcVar2[(long)pos + -1] != '\0';
    break;
  case 'p':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (stat_buf.st_mode & 0xf000) == 0x1000;
    }
    break;
  case 'r':
    unary_advance();
    iVar5 = euidaccess(ppcVar2[(long)pos + -1],4);
    bVar9 = iVar5 == 0;
    break;
  case 's':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = 0 < stat_buf.st_size;
    }
    break;
  case 't':
    unary_advance();
    pcVar6 = find_int(ppcVar2[(long)pos + -1]);
    piVar7 = __errno_location();
    *piVar7 = 0;
    uVar8 = strtol(pcVar6,(char **)0x0,10);
    bVar9 = false;
    if ((*piVar7 != 0x22) && (uVar8 < 0x80000000)) {
      iVar5 = isatty((int)uVar8);
      bVar9 = iVar5 != 0;
    }
    break;
  case 'u':
    unary_advance();
    iVar5 = __xstat(1,ppcVar2[(long)pos + -1],(stat *)&stat_buf);
    bVar9 = false;
    if (iVar5 == 0) {
      bVar9 = (bool)((byte)(stat_buf.st_mode >> 0xb) & 1);
    }
    break;
  case 'w':
    unary_advance();
    iVar5 = euidaccess(ppcVar2[(long)pos + -1],2);
    bVar9 = iVar5 == 0;
    break;
  case 'x':
    unary_advance();
    iVar5 = euidaccess(ppcVar2[(long)pos + -1],1);
    bVar9 = iVar5 == 0;
    break;
  case 'z':
    unary_advance();
    bVar9 = *ppcVar2[(long)pos + -1] == '\0';
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

